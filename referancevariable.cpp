#include<iostream>
using namespace std;
void update(int i){
i++;
  cout<<"the adderss is "<<i<<endl;
}
//pass by reference
void update2(int &i){
    i++;
}
int main(){
    int i=5;
    int &j =i;
     cout<<"the adderss is "<<i<<endl;
     update(i);

      cout<<"the adderss is "<<i<<endl;
    
   /* cout<< "the value of j is "<<j<<endl;

    cout<<"the address is "<<&j<<endl;
    cout<<"the adderss is "<<&i<<endl;
    i++;
    cout<<"the value of i is "<<i<<endl;
    
    cout<< "the value of j is "<<j<<endl;
    j++;
    cout<< "the value of j is "<<j<<endl;
    i--;
    cout<< "the value of j is "<<i<<endl;*/
}