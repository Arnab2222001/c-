#include <iostream>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int length1 = mid - s + 1;
    int length2 = e - mid;
     int *first = new int[length1];
    int *second = new int[length2];
    // cop the values
    int mainarrayindex = s;

    for (int i = 0; i < length1; i++)
    {
        first[i]=arr[mainarrayindex++];
    }
    mainarrayindex = mid + 1;
    for (int i = 0; i < length2; i++)
    {
       second[i]=arr[mainarrayindex++];
    }
    
    // now merge the two array
    int index1 = 0, index2 = 0;
    mainarrayindex = s;
    while (index1 < length1 && index2 < length2)
    {
        if (first[index1] <second[index2])
        {
            arr[mainarrayindex++] = first[index1++];
        }

        else
        {
            arr[mainarrayindex++] =second[index2++];
        }
    }
    while (index1 < length1)
    {
        arr[mainarrayindex++] = first[index1++];
    }
    while (index2 < length2)
    {
        arr[mainarrayindex++] =second[index2++];
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
    int arr[5] = {22, 5, 69, 4, 80};

    int n = 5;
    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}