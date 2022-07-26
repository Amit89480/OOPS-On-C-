#include<iostream>
using namespace std;
// here we are doing the function overloading

class A{
    public:
    void sayHello(){
        cout << "Hello Amit" << endl;
    }
     void sayHello(string name){
        cout << "Hello"<<name << endl;
    }
};
int main(){
    A obj;
    obj.sayHello();
    return 0;
}