#include<iostream>
using namespace std;
class A{
    public:
    void func1(){
        cout << "Inside A" << endl;
    }
};
class B:public A{
    public:

    void func2(){
        cout << "Inside B" << endl;
    }
};
class C:public A{
    public:
    void func3(){
        cout << "Inside C" << endl;
    }
};
int main(){
    A Obj1;
    Obj1.func1();
    B obj2;
    obj2.func2();
    

    return 0;
}