#include<iostream>
using namespace std;
int power(int num){
    if (num==0)
    {
        return 1;
    }
    int smallproblem =power(num-1);
    int biggerpronblem=2*smallproblem;
    return biggerpronblem;


}
int main()
{
    int num;
    cin>>num;
  int ans=  power(num);
    cout<<ans;

}