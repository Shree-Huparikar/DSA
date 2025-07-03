#include <iostream>
using namespace std;

// Change the case.
/*
void LowerCase(char *A)
{
     for(int i=0;A[i]!='\0';i++)
    {
        A[i]+=32;
    }
    cout<<endl;
}
void UpperCase(char *B)

{
    for(int i=0;B[i]!='\0';i++)
    {
        B[i]-=32;
    }
}
*/

// Toggle the string.
/*
void Toggle(char *C)
{
    for(int i=0;C[i]!='\0';i++)
    {
        if(C[i]>=65&&C[i]<=90)
        {
            C[i]+=32;
        }
        else if(C[i]>=97&&C[i]<=122)
        {
            C[i]-=32;
        }
    }
}
*/

// To check the String is Valid or not
/*
void Validate(char *D)
{
    for (int i = 0; D[i] != '\0'; i++)
    {
        if (!(D[i] >= 65 && D[i] <= 90) && !(D[i] >= 97 && D[i] <= 122) && !(D[i] >= 48 && D[i] <= 57))
        {
            cout << "String is Invalid" << endl;
            return; // Exit the function if an invalid character is found
        }
    }
    cout << "String is Valid" << endl;
}
*/

// To Reverse a String.
/*
void Reverse(char *D,char *E)
{   int i,j;

    for(i=0;D[i]!='\0';i++)
    {

    }
    i=i-1;
    for(j=0;i>=0;j++,i--)
    {
        E[j]=D[i];
    }
    E[j] = '\0';
    cout<<E;
}
*/

// To compare two Strings
/*
void Compare( char*U,char *V)
{
    int i,j;
    for(i=0,j=0;U[i]!='\0'&& V[i]!='\0';i++,j++)
    {
        if(U[i]!=V[i])
        {
            break;
        }
    }
    if(U[i]==V[j])
       cout<<"Both Strings Are Equal "<<endl;
    else if(U[i]<V[i])
       cout<<"String U is smaller than String V "<<endl;
    else
       cout<<"String U is greater than String V "<<endl;

}
*/

// To chaeck The Palindeome of String.
/*
void Palindrome(char *P) {
    char reversed[100];
    Reverse(P, reversed);
    Compare(P, reversed);

}
*/

int main()
{
    // char A[] = "SHREE";
    // char B[] = "hbefhhg";
    // char C[] = "pRoPlAyEr";
    // char D[] = "Shree_Sh_07";
    // char E[20];

    // LowerCase(A);
    // cout << A << endl;

    // UpperCase(B);
    // cout << B << endl;

    // Toggle(C);
    // cout<<C<<endl;

    // Validate(D);

    // Reverse(D,E);

    char U[100], V[100];

    cout << "Enter first string: ";
    cin.getline(U, 100);

    cout << "Enter second string: ";
    cin.getline(V, 100);

    // Compare(U,V);

    // char P[100];

    // cout << "Enter a string: ";
    // cin.getline(P, 100);

    // Palindrome(P);

    return 0;
}