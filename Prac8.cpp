#include<iostream>
using namespace std;

void con_obst(void);
void print(int,int);
float a[20],b[20],wt[20][20],c[20][20];
int r[20][20],n;

void con_obst(void)
{
    int i,j,k,l,min;
    for(i=0;i<n;i++)
    {
       c[i][i]=0;
       wt[i][i]=b[i];
       r[i][i]=0;
       // for j-i=1 can be j=i+1
       wt[i][i+1]=b[i]+b[i+1]+a[i+1];
       c[i][i+1]=b[i]+b[i+1]+a[i+1];
       r[i][i+1]=i+1;
       cout<<endl;

       cout << "wt[" << i << "][" << i + 1 << "]: " << wt[i][i+1] << endl;
       cout << "c[" << i << "][" << i + 1 << "]: " << c[i][i+1] << endl;
       cout << "r[" << i << "][" << i + 1 << "]: " << r[i][i+1] << endl;
       cout << endl;
    }
    c[n][n]=0.0;
    r[n][n]=0;
    wt[n][n]=b[n];

    // for j-i=2,3,4,...n
    for(i=2;i<=n;i++)
    {
        for(j=0;j<n-i+1;j++)
        {
            wt[j][j+i]=b[j+i]+a[j+i]+wt[j][j+i-1];
            c[j][j+i]=9999;
            for(l=j+1;l<=j+i;l++)
            {
                if(c[j][j+i]>(c[j][l-1]+c[l][j+i]))
                {
                    c[j][j+i]=c[j][l-1]+c[l][j+i];
                    r[j][j+i]=l;
                }
            }
            c[j][j+i]+=wt[j][j+i];
            cout << "wt[" << j << "][" << j + i << "]: " << wt[j][j+i] << endl;
            cout << "c[" << j << "][" << j + i << "]: " << c[j][j+i] << endl;
            cout << "r[" << j << "][" << j + i << "]: " << r[j][j+i] << endl;
            cout << endl;
        }
        cout<<endl;
        
    }
    cout<<"Otimal BST is :: ";
    cout<<"wt[0]["<<n<<"] :: "<<wt[0][n]<<endl;
    cout<<"c[0]["<<n<<"] :: "<<c[0][n]<<endl;
    cout<<"r[0]["<<n<<"] :: "<<r[0][n]<<endl;
}

void print(int l1,int r1)
{
    if(l1>r1)
         return;

    if(r[l1][r[l1][r1]-1]!=0)
           cout<<"Left Child of "<<r[l1][r1]<<" :: "<<r[l1][r[l1][r1]-1]<<endl;

    if(r[r[l1][r1]][r1]!=0)
    {
        cout<<"Right Child of "<<r[l1][r1]<<" :: "<<r[r[l1][r1]][r1]<<endl;
    }

    print(l1,r[l1][r1]-1);
    print(r[l1][r1],r1);
    return;
}

int main(){
    int i;
    cout<<"\n******PROGRAM FOR OBST******\n";
    cout<<"Enter the no of nodes :";
    cin>>n;
    cout<<endl;
    cout<<" Enter the probability for Successful Search ::"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"p["<<i<<"] : ";
        cin>>a[i];
    }
    cout<<" Enter the probability for Unsuccessful Search ::"<<endl;
    for(i=0;i<=n;i++)
    {
        cout<<"q["<<i<<"] : ";
        cin>>b[i];
    }
    cout<<endl;
    con_obst();
    print(0,n);
    cout<<endl;
    return 0;
}
