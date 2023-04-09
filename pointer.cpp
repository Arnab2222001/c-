#include<iostream>
using namespace std;
void print(int *p){
 cout<<*p<<endl;
}
int updatevalue(int *p){
    *p=*p+1;
cout<<*p<<endl;
}
int main(){
    /*int arr[7]={1,2,3,4,5,6,7};
    cout<<"print arr"<<arr <<endl;
    cout<<"print arr"<<arr+1<<endl;
 cout<<"print arr "<<*arr <<endl;
    cout<<"print arr "<<*(arr+1)<<endl;
    int arr1[7]={1,2,3,4,5,6,7};
    int*p=&arr[0];
    
    for (int  i = 0; i < 7; i++)
    {
        cout<<*p<<endl;
        p++;
    }*/
    int value=5;
    int *p=&value;
    print(p);
    updatevalue(p);

}