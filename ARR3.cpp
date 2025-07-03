#include <iostream>
using namespace std;

class Array {
public:
    int* A;
    int size;
    int length;

    // Constructor to initialize the array
    Array(int sz) {
        size = sz;
        length = 0;
        A = new int[size];
    }

    // Destructor to free allocated memory
    ~Array() {
        delete[] A;
    }
};

// Function to insert the Element at the end of an array.
/*
void Append(Array &arr, int x) {
    if (arr.length < arr.size) {
        arr.A[arr.length++] = x;
    }
}
*/

// Function to insert the element in between the array.
/*
int Insert(Array &arr, int index, int x) {
    if (index >= 0 && index <= arr.length) {
        for (int i = arr.length; i > index; i--) {
            arr.A[i] = arr.A[i - 1];
        }
        arr.A[index] = x;
        arr.length++;
        return 1; // Success
    }
    return 0; // Failure
}
*/

// Function to delete the element in the array.
/*
int Delete(Array &arr, int index) {
    int x = 0;
    if (index >= 0 && index < arr.length) {
        x = arr.A[index];
        for (int i = index; i < arr.length - 1; i++) {
            arr.A[i] = arr.A[i + 1];
        }
        arr.length--;
        return x;
    }
    return -1; // Failure
}
*/

// Function to search the element in the array using linear search.
/*
int LinearSearch(Array &arr, int key) {
    for (int i = 0; i < arr.length; i++) {
        if (key == arr.A[i])
            return i;
    }
    return -1; // Not found
}
*/

// Function to search the element in the array using Binary search.
/*
int BinarySearch(Array &arr, int key) {
    int l = 0, h = arr.length - 1;
    while (l <= h) {
        int mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1; // Not found
}
*/

// Function to get the specific element in the array.
/*
int Get(Array &arr, int index) {
    if (index >= 0 && index < arr.length) {
        return arr.A[index];
    }
    return -1; // Failure
}
*/

// Function to set means insert an element at a particular index.
/*
void Set(Array &arr, int index, int x) {
    if (index >= 0 && index < arr.length) {
        arr.A[index] = x;
    }
}
*/

// Function to find the maximum element in the array.
/*
int Max(Array &arr) {
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++) {
        if (arr.A[i] > max) {
            max = arr.A[i];
        }
    }
    return max;
}
*/

// Function to find the minimum element in the array.
/*
int Min(Array &arr) {
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++) {
        if (arr.A[i] < min) {
            min = arr.A[i];
        }
    }
    return min;
}
*/

// Function to find the sum of all elements in the array.
/*
int Sum(Array &arr) {
    int s = 0;
    for (int i = 0; i < arr.length; i++) {
        s += arr.A[i];
    }
    return s;
}
*/

// Function to find the average of elements in the array.
/*
double Average(Array &arr) {
    return (double)Sum(arr) / arr.length;
}
*/

// Function to display all elements in the array.
/*
void Display(Array &arr) {
    cout << "The Elements Are: ";
    for (int i = 0; i < arr.length; i++) {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}
*/

// Function to insert the element in a sorted array.
/*
int InsertSort(Array &arr, int x) {
    int i = arr.length - 1;
    if (arr.size == arr.length) {
        return 0;
    }
    while (i >= 0 && arr.A[i] > x) {
        arr.A[i + 1] = arr.A[i];
        i--;
    }
    arr.A[i + 1] = x;
    arr.length++;
}
*/

// Function to check if the array is sorted or not.
/*
bool isSorted(Array &arr) {
    for (int i = 0; i < arr.length - 1; i++) {
        if (arr.A[i] > arr.A[i + 1])
            return false;
    }
    return true;
}
*/

// Function to arrange negative elements on the left side and positive elements on the right side.
/*
void Rearrange(Array &arr) {
    int i = 0, j = arr.length - 1;
    while (i < j) {
        while (i < j && arr.A[i] < 0) {
            i++;
        }
        while (i < j && arr.A[j] >= 0) {
            j--;
        }
        if (i < j) {
            swap(arr.A[i], arr.A[j]);
        }
    }
}
*/

// Function to initialize the array with values
void initializeArray(Array &arr, int n) {
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr.A[i];
    }
    arr.length = n;
}

int main() {
    int size, n;
    cout << "Enter the size of an array: ";
    cin >> size;

    Array arr(size);

    cout << "How many numbers do you want: ";
    cin >> n;
    initializeArray(arr, n);
    
    // Append(arr, 10);
    // Insert(arr, 4, 27);
    // cout << "Deleted element: " << Delete(arr, 4) << endl;
    // cout << "Linear Search for 46: " << LinearSearch(arr, 46) << endl;
    // cout << "Binary Search for 46: " << BinarySearch(arr, 46) << endl;
    // cout << "Element at index 4: " << Get(arr, 4) << endl;
    // Set(arr, 6, 34);
    // cout << "Max element: " << Max(arr) << endl;
    // cout << "Min element: " << Min(arr) << endl;
    // cout << "Sum of elements: " << Sum(arr) << endl;
    // cout << "Average of elements: " << Average(arr) << endl;
    // InsertSort(arr, 23);
    // cout << "Is Sorted: " << isSorted(arr) << endl;
    // Rearrange(arr);
    // Display(arr);

    return 0;
}
