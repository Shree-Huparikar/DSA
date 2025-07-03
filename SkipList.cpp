#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_LEVEL = 6;

// Node structure for Skip List
struct Node {
    int value;
    Node* forward[MAX_LEVEL + 1];

    Node(int value, int level) {
        this->value = value;
        // Initialize forward pointers
        for (int i = 0; i <= level; i++) {
            forward[i] = nullptr;
        }
    }
};

class SkipList {
    int level;
    Node* header;

public:
    SkipList();
    ~SkipList();

    int randomLevel();
    Node* createNode(int value, int level);
    void insertElement(int value);
    bool searchElement(int value);
    bool deleteElement(int value);
    void displaySkipList();
};

SkipList::SkipList() {
    level = 0;
    header = new Node(-1, MAX_LEVEL);
    srand(time(nullptr)); // Seed the random number generator
}

SkipList::~SkipList() {
    // Clean up memory
    Node* current = header->forward[0];
    while (current) {
        Node* temp = current;
        current = current->forward[0];
        delete temp;
    }
    delete header;
}

int SkipList::randomLevel() {
    int lvl = 0;
    while (rand() < RAND_MAX / 2 && lvl < MAX_LEVEL) {
        lvl++;
    }
    return lvl;
}

Node* SkipList::createNode(int value, int level) {
    return new Node(value, level);
}

void SkipList::insertElement(int value) {
    Node* current = header;
    Node* update[MAX_LEVEL + 1] = {nullptr};

    for (int i = level; i >= 0; i--) {
        while (current->forward[i] != nullptr && current->forward[i]->value < value) {
            current = current->forward[i];
        }
        update[i] = current;
    }

    current = current->forward[0];

    if (current == nullptr || current->value != value) {
        int newLevel = randomLevel();
        if (newLevel > level) {
            for (int i = level + 1; i <= newLevel; i++) {
                update[i] = header;
            }
            level = newLevel;
        }
        Node* newNode = createNode(value, newLevel);
        for (int i = 0; i <= newLevel; i++) {
            newNode->forward[i] = update[i]->forward[i];
            update[i]->forward[i] = newNode;
        }
    }
}

bool SkipList::searchElement(int value) {
    Node* current = header;
    for (int i = level; i >= 0; i--) {
        while (current->forward[i] != nullptr && current->forward[i]->value < value) {
            current = current->forward[i];
        }
    }
    current = current->forward[0];
    return (current != nullptr && current->value == value);
}

bool SkipList::deleteElement(int value) {
    Node* current = header;
    Node* update[MAX_LEVEL + 1] = {nullptr};

    for (int i = level; i >= 0; i--) {
        while (current->forward[i] != nullptr && current->forward[i]->value < value) {
            current = current->forward[i];
        }
        update[i] = current;
    }

    current = current->forward[0];

    if (current != nullptr && current->value == value) {
        for (int i = 0; i <= level; i++) {
            if (update[i]->forward[i] != current)
                break;
            update[i]->forward[i] = current->forward[i];
        }

        delete current;

        while (level > 0 && header->forward[level] == nullptr)
            level--;

        return true;
    }

    return false;
}

void SkipList::displaySkipList() {
    cout << "Skip List:" << endl;
    for (int i = 0; i <= level; i++) {
        Node* node = header->forward[i];
        cout << "Level " << i << ": ";
        while (node != nullptr) {
            cout << node->value << " ";
            node = node->forward[i];
        }
        cout << endl;
    }
}

int main() {
    SkipList skipList;

    skipList.insertElement(3);
    skipList.insertElement(6);
    skipList.insertElement(7);
    skipList.insertElement(9);
    skipList.insertElement(12);

    skipList.displaySkipList();

    cout << "Searching for 7: " << (skipList.searchElement(7) ? "Found" : "Not found") << endl;
    cout << "Searching for 10: " << (skipList.searchElement(10) ? "Found" : "Not found") << endl;

    skipList.deleteElement(7);
    skipList.deleteElement(10);

    skipList.displaySkipList();

    return 0;
}
