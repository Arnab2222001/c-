#include<iostream>
using namespace std;
int factorial(int num)
{
    //base case
    //in recurion the base case maintion is mandatory
    if (num==0)
    {
        return 1;
    }
    return num* factorial (num-1);
  
    
}
int main()
{
    int num;
    cout<<"enter the number which factorial has to be found"<<endl;
    cin>>num;
   int p= factorial(num);
    cout<<"the factorial is "<<p;

}