//static allocaton of memory by the stack allocation
#include<iostream>
using namespace std;
class hero {
    int health;
    char level;
public:
int gethealth(){
    return health;
}
int sethealth(int h){
    health =h;
}
};

int main(){
    //meaking a hero type obbject
    hero arnab ;
 
    cout <<"size of"<<sizeof(arnab)<<endl; 
    cout <<"arnab health is "<<arnab.gethealth()<<endl;
   
        arnab.sethealth(70);
}