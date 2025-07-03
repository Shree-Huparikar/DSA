// Given an array sorted in ascending order return an array of squares of each number arranged in sorted ascending order.
// input = [1 2 3 4 5] -> output = [1 4 9 16 25]
// input  = [-10 -3 4 5 6] -> output = [9 16 25 36 100]

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortedSquared(vector<int>& v) {
    vector<int> ans;
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while (left_ptr <= right_ptr) {
        if (abs(v[left_ptr]) < abs(v[right_ptr])) {
            ans.push_back(v[right_ptr] * v[right_ptr]);
            right_ptr--;
        } else {
            ans.push_back(v[left_ptr] * v[left_ptr]);
            left_ptr++;
        }
    }

    // We pushed from largest to smallest, so reverse it
    reverse(ans.begin(), ans.end());

    // Print the sorted squared values
    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v;
    cout << "Enter the size of the vector: ";
    int n;
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    cout << "The resultant vector is: ";
    sortedSquared(v);

    return 0;
}
