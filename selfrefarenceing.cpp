#include<iostream>
using namespace std;
int main(){
    int n=5;
    cout<<n<<"\n";
    int&j=n;
    n++;
    cout<<n<<"\n";
    j++;
    cout<<n<<"\n";
cout<<n<<"\n";
}