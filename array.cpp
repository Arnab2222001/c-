#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"enter the number of element\n";
    cin>>num;
    int arr[num];
    cout<<"enter the values of the elements\n";
    for ( i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    cout<<"the entered elements are:";
    for ( i = 0; i < num; i++)
    {
        cout<<arr[i];
    }
    return 0;



}