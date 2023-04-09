#include<iostream>
using namespace std;
int main(){
    int num=5;
    int *p=&num;
    int **p2=&p;
    cout<<*p<<endl;//value of num;
    cout<<*p2<<endl;//adress of *p;
     cout<<&p<<endl;//adress of p
    cout<<&p2<<endl;//adress of p2 
     cout<<*&p<<endl;//value of p
    cout<<*p2<<endl;
 cout<<*p<<endl;//adress of num
    cout<<*p2<<endl;
 cout<<*p<<endl;
    cout<<*p2<<endl;

}
