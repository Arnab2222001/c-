#include <iostream>
using namespace std;
void merge(int a[], int m, int b[], int n, int c[])
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
           
        }
        else if (a[i] > b[j])
        {
            c[k++] = b[j++];
            
        }
        
    }
    while (j<n)
    {
        c[k++]=b[j++];
    }
    while (i<m)
    {
        c[k++]=a[i++];
    }
    
    
}
void print(int ans[],int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    

}
int main()
{
    int a[5] = {1, 3, 5, 7, 9};
    int b[5] = {2, 4, 6, 8, 10};
    int c[10] = {0};
    merge(a, 5, b, 5, c);
    print(c,10);
}