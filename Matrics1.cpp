// Transpose of matrix
// - Transpose: Rows become columns and columns become rows
// - If original matrix is n x m, transpose will be m x n
// Transpose Logic:
// - Loop through original matrix and swap indices
// - transpose[i][j] = arr[j][i]

#include<iostream>
using namespace std;

int main() {
    int  n, m;
    cin >> n;
    cin >> m;

    
    int arr[n][m];


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cout<<"Original Matrix"<<endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    
    int transpose[m][n];

    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            transpose[i][j] = arr[j][i];
        }
    }

    cout<<"Transposed Matrix"<<endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
