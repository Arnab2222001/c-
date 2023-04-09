#include <iostream>
using namespace std;
int fibonnacci(int num )
{
    if ( num==0)
    {
        return 1;
    }
    if (num==1)
    {
        return 0;
    }
    
 int ans=fibonnacci(num-1)+fibonnacci(num-2);
 return ans;





}
int main()
{
    int num;
    cout << "enter the nth term for which you want the fionnacci number" << endl;
    cin >> num;
    fibonnacci(num);
}