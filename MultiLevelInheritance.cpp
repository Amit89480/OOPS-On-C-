#include<iostream>
using namespace std;
class animal{
    public:
        int age;
        int weight;

        public:
        void speak(){
            cout << "Speaking" << endl;
        }
};
class dog:public animal{
};
class germanshephard:public dog{
};
int main(){
    dog d;
    germanshephard g;
    g.speak();
    d.speak(); 
    return 0;
}