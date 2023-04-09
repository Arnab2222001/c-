#include <iostream>
using namespace std;
class hero
{
public:
    int health;


    char level;
//creat a constructure 
   hero()
   {
        cout<<"constructur called";

   }
   //parameterised constructtor
   hero(int health){
    cout<<"this->"<<this<<endl;
   this-> health =health;
   }
    int gethealth()
    {
        return health; 
    }
void sethealth(int h){
    health=h;
}
 int getlevel()
    {
        return health; 
    }
void setlevel(char ch){
    level=ch;
}
void print(){
    cout<<this ->health<<endl;
    cout<<this ->level<<endl;
}
};
int main()
{
    /*hero arnab;
    cout << "size" << arnab.gethealth() << endl;
    cout << "size" << arnab.getlevel() << endl;
    hero *priya=new hero;
    priya->sethealth(60);
    priya->setlevel('b');
    
    cout << "size" << (*priya).gethealth() << endl;
    cout << "size" << (*priya).level << endl;*/
   
  /*  arnab.level = 'a';
    cout << "size" << arnab.gethealth() << endl;
    arnab.sethealth(70) ;
    cout << "size" << arnab.gethealth() << endl;*/
//created constructure called
 hero arnab(40);
cout<<"the address of this is  "<<&arnab;
  hero priya(arnab);
  priya.print();
}
