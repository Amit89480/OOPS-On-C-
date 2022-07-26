#include<iostream>
using namespace std;

class A {
    public:
    void func1(){
        cout << "Inside A" << endl;
    }
};
class D{
    public:
    void func4(){
        cout << "Inside D" << endl;
    }
};
class B:public A{
    public:
    void func2(){
        cout << "Inside B" << endl;
    }
};
class C:public A,public D{
    public:
    void func3(){
        cout << "Inside C" << endl;
    }
};
int main(){
   
    C obj2;
    obj2.func1();
    obj2.func4();
    return 0;
}