#include<iostream>
using namespace std; 
void reachedhome(int stand,int home){
    cout<<"i am comming := "<<stand<<"please hold a second"<<home<<endl;
        if (stand==home)
    {
        cout<<"\t i am reached home :=\t"<<stand;
        return ;
    }
  stand++;
  reachedhome(stand,home);

}
int main()
{
    int home=10;
    int stand=1;
    reachedhome(stand, home);


}