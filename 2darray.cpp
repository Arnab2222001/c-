#include<iostream>
using namespace std;
//row wise input takeing
bool ispresent(int arr[][4],int target,int i,int j)
{       
     for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           if (arr[i][j]==target)
           {
            cout<<"the element is founded";
             return 1;
           }
           
        }
       
    }
    return 0;
}

int main(){
    
    int arr[4][4];
     for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout <<"\t"<<arr[i][j];
        }
        cout<<"\n";
    }
    //colmn wise
    /* int arr2[4][4];
     for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout <<"\t"<<arr[i][j];
        }
        cout<<"\n";
    }*/
    cout<<"enter the number to be search";
    int target;
    cin>>target;
    ispresent(arr,target,4,4);
   

return 0;
}
