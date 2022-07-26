#include<iostream>
using namespace std;
class overload{
    public:
        int a;
        int b;

        public:
        int add()
        {
            return a + b;
    }
    void operator+(overload obj){
        int value1 = a;
        int value2 = b;
        cout << "output    " << value2 - value1 << endl;
    }
    // here the bracket is overloaded
    void operator() (){
        cout << "This is running" << endl;
    }
};
int main(){
    overload obj1, obj2;
    obj1.a = 9;
    obj2.a = 6;
    obj1 + obj2;
    obj1();
    return 0;
}