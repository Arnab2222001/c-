#include<iostream>
using namespace std;
int partition(int arr[],int s,int e)
{
    int pivot=arr[s];
    int count=0;
    for ( int i = s+1; i <=e; i++)
    {
       if (arr[i]<=pivot){
count++;
       }
        
    }
    int pivotindex=s+count;
    swap(arr[pivotindex],arr[s]);
    int i=s,j=e;
    while (i<pivotindex && j>pivotindex)
    {
        while (arr[i]<=pivot)
        {
            i++;
        }
        while (arr[j]>pivot)
        {
            j--;
        }
         if(i < pivotindex && j > pivotindex) {
            swap(arr[i++], arr[j--]);
        }

        
    }
    return pivotindex;


}
void quicksort(int arr[],int s,int e)
{
    if (s>=e)
    {
        return;
    }
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
    


}
int main(){
    int num;
    cout<<"enter the number of element";
    cin>>num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,num-1);
    for (int  i = 0; i < num; i++)
    {
        cout<< "\t"<<arr[i];
    }
    
    
}