#include<iostream>
using namespace std;
class animal{
    public:
        int age;
        int weight;

        public:
        void speak(){
            cout << "Animal Is Barking" << endl;
        }
};
class human{
    public:
    void run(){
        cout << "Human Is Running" << endl;
    }
};
class hybrid : public animal, public human{
};
int main(){
    hybrid h;
    h.run();
    h.speak();

    return 0;
}