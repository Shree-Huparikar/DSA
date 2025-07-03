// moves all the elements which are odd at beginning and which are even at end of the array. Order dores not matter.
#include<iostream>
#include<vector>
using namespace std;
void arrangeEAO(vector<int>&v){
    int left_ptr = 0;
    int right_ptr = v.size()-1;

    while(left_ptr<right_ptr){
        if(v[left_ptr]%2 == 0 && v[right_ptr]%2 == 1){
            swap(v[left_ptr],v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        else if(v[right_ptr]%2 == 0){
            right_ptr--;
        }
        else{
            left_ptr++;
        }
    }
    return;

}
int main(){
    vector<int>v;
    cout<<"Enter the number of elements do you want to insert in vector "<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements in vector "<<endl;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    arrangeEAO(v);
    cout<<"The arranged vector is :"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    return 0;
}