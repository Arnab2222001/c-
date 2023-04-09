#include<iostream>
#define PI 3.14
using namespace std;
//createing class for the cylinder
class cylinder//the class
{
    public://access specifier
    double base_radius{1};//this is the property
    double hight{1};
    public:
    double volume()//function for calculate the volume
    {
        return PI*base_radius*base_radius*hight;
    

    }
};
int main()
{
    cylinder cylinder1;
    
    cout<<"volume"<<cylinder1.volume()<<endl;

}