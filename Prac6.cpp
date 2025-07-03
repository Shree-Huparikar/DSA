#include <iostream>
#include <cstring> // For strcpy and strcmp
using namespace std;

class flight {
public:
    int am[10][10];
    char city_index[10][10];
    flight();
    int create();
    void display(int city_count);
};

flight::flight() {
    for (int i = 0; i < 10; i++) {
        strcpy(city_index[i], "xx");
        for (int j = 0; j < 10; j++) {
            am[i][j] = 0;
        }
    }
}

int flight::create() {
    int city_count = 0, si, di, wt;
    char s[10], d[10], c;
    do {
        cout << "Enter the source city :" << endl;
        cin >> s;
        cout << "Enter the destination city :" << endl;
        cin >> d;

        // Check if source city exists, if not add it
        si = -1;
        for (int j = 0; j < city_count; j++) {
            if (strcmp(city_index[j], s) == 0) {
                si = j;
                break;
            }
        }
        if (si == -1) {
            strcpy(city_index[city_count], s);
            si = city_count;
            city_count++;
        }

        // Check if destination city exists, if not add it
        di = -1;
        for (int j = 0; j < city_count; j++) {
            if (strcmp(city_index[j], d) == 0) {
                di = j;
                break;
            }
        }
        if (di == -1) {
            strcpy(city_index[city_count], d);
            di = city_count;
            city_count++;
        }

        cout << "\t Enter distance from " << s << " to " << d << " : " << endl;
        cin >> wt;

        // Update the adjacency matrix with the distance
        am[si][di] = wt;

        cout << "Do you want to add more cities ...(y/n) :" << endl;
        cin >> c;
    } while (c == 'y' || c == 'Y');

    return city_count;
}

void flight::display(int city_count) {
    cout << " Displaying adjacency Matrix :" << endl;
    // Print column headers (city names)
    cout << "\t";
    for (int i = 0; i < city_count; i++) {
        cout << city_index[i] << "\t";
    }
    cout << endl;
    // Print the adjacency matrix
    for (int i = 0; i < city_count; i++) {
        cout << city_index[i] << "\t"; // Print row header (city name)
        for (int j = 0; j < city_count; j++) {
            cout << am[i][j] << "\t"; // Print distance
        }
        cout << endl;
    }
}



int main() {
    flight f;
    int n, city_count;
    char c;
    do {
        cout << "***** Flight Main Menu *****" << endl;
        cout << "\n\t1.Create \n\t2.Adjacency Matrix \n\t3.Exit" << endl;
        cout << "\n\t Enter your choice :" << endl;
        cin >> n;
        switch (n) {
            case 1:
                city_count = f.create();
                break;
            case 2:
                f.display(city_count);
                break;
            case 3:
                return 0;
        }
        cout << "\n\t Do you want to continue in main menu (y/n):" << endl;
        cin >> c;
        cin.ignore(); // Clear newline character from input buffer
    } while (c == 'y' || c == 'Y');
    return 0;
}

