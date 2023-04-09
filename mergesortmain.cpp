#include <iostream>
using namespace std;
void merge(int arr[], int s, int e)
{
    int mid = (s + e) / 2;
    int length1 = mid - s + 1;
    int length2 = e - mid;
    int arr1[length1],arr2[length2];
    // cop the values
    int mainarrayindex = s;

    for (int i = 0; i < length1; i++)
    {
        arr1[i]=arr[mainarrayindex++];
    }
    mainarrayindex = mid + 1;
    for (int i = 0; i < length2; i++)
    {
       arr2[i]=arr[mainarrayindex++];
    }
    
    // now merge the two array
    int index1 = 0, index2 = 0;
    mainarrayindex = s;
    while (index1 < length1 && index2 < length2)
    {
        if (arr1[index1] <arr2[index2])
        {
            arr[mainarrayindex++] = arr1[index1++];
        }

        else
        {
            arr[mainarrayindex++] =arr2[index2++];
        }
    }
    while (index1 < length1)
    {
        arr[mainarrayindex++] = arr1[index1++];
    }
    while (index2 < length2)
    {
        arr[mainarrayindex++] =arr2[index2++];
    }
}
void mergesort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = (s+e)/2;
    /*left part sort*/
    mergesort(arr, s, mid);
    // right part sort
    mergesort(arr, mid + 1, e);
    merge(arr, s, e);
}
int main()
{
    int n;
   cout<<"enter the number";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */cin>>arr[i];
    }
    
    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}