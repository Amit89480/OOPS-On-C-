#include <iostream>
using namespace std;

class hero
{

private:
    char *name;
    int health;

public:
    static int timtocomplete;
    hero()
    {
        cout << "Simple Constructor" << endl;
        name = new char[100];
}
// parameterized constructor

hero(char name,int health){
    cout << "this ->" << this << endl;
    // this->name = name;
    this->health = health;
    
}
// creating custom copy constructor
// hero(hero& temp){
//     cout << "here we are learning the copy constructor" << endl;
//     this->health = temp.health;
// }

   
int getters()
    {
        return health;
    }
    void setters(int h)
    {
        health = h;
    }
   

    void print(){
        cout << "[Name" << name<< ", ";
        cout << "Health" << health << "]";
        cout << endl
             << endl;
    }
};
int hero::timtocomplete = 8;

int main()
{

    cout << hero::timtocomplete << endl;

    // hero h2(10);
    // hero *h3 = new hero;
    
    // here we are creatung the paratmeterizd the constructor
    // cout << "address of h2" << &h2 << endl;

    // *****************************************************************


    // below codes for copy constructor

    // hero amit(90);
    // hero ritesh(amit);
    // ritesh.print();
    // hero amit;
    // amit.setters(80);
    // amit.setters(90);

    // amit.print();
    // hero misti(amit);
    // misti.print();

    // *********************************************************************

    // // static allocation
    // hero h1;
    // // dynamic allocation
    // hero *h = new hero;
    //  cout << "health :" << (*h).getters() << endl;
    // //  or putting arrow
    //  cout << "health :" << h->getters() << endl;

    // cout << "size :" << sizeof(h1) << endl;

    // cout << "health :" << h1.getters() << endl;
    // h1.setters(900);
    // cout << "health is:" << h1.getters() << endl;
    // cout << "size of:" << sizeof(h1) << endl;

    return 0;
}