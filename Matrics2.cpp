// Multiplication of two Matrices

#include<iostream>
using namespace std;

int main(){
    int r1,c1;
    cout<<"Enter number of rows and column for 1st matrix"<<endl;
    cin>>r1>>c1;
    cout<<"Enter 1st matrix elements"<<endl;
    int A[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    
    
    int r2,c2;
    cout<<"Enter number of rows and column for 2nd matrix"<<endl;
    cin>>r2>>c2;
    cout<<"Enter 2nd matrix elements"<<endl;
    int B[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
    }
    if(c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    int C[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value = 0;
            for(int k=0;k<c1;k++){
                value+=A[i][k]*B[k][j];
            }
            C[i][j]=value;
        }
    }
    cout<<"Multiplication Matrix"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<C[i][j]<<" "; 
        }cout<<endl;
    }
    return 0;
}