#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int *arr=new int[num];//the *arr is stored in stack and the b=new int [5]is tored in heap
    //taking inputs for dynamic array
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < num; i++)
    {
        cout<<" "<<arr[i];
    }
    
 delete []arr;
 arr=NULL;//by this stape i also free the pointer

     for (int i = 0; i < num; i++)
    {
        cout<<" the delete part "<<arr[i];
    }
    
}

