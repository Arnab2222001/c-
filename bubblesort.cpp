#include<iostream>
using namespace std;
void bubblesort(int arr[],int num);
void display(int arr[],int num);
int main()
{
    int i,num;
    cout<<"enter the number of element";
    cin>>num;
    int arr[num];
    for ( i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
   bubblesort(arr,num);
 display(arr,num);
}
void bubblesort(int arr[],int num)
{
    int i,j;
    bool swaped;
    for ( i = 0; i < num-1; i++)
    {
        for ( j = 0; j < num-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            swaped=true;
        }
        if (swaped==false)
        {
            break;
        }
        
    }
    

}
void display(int arr[],int num){

    for (size_t i = 0; i < num; i++)
    {
        cout<<"\t"<<arr[i];
    }
    
}