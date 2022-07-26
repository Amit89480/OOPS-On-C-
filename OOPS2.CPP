#include<bits/stdc++.h>
using namespace std;
class human{
    public:
        int height;
        int weight;
        int age;

        public:
        int getage(){
            return this->age;
        }
       void setweight(int w){
            this->weight = w;
        }
};
class male:public human{
    public:
        string color;
        void sleep(){
            cout << "Male sleeping" << endl;
        }
};

int main(){
    male obj1;
    cout << obj1.age << endl;
    cout << obj1.weight << endl;
    obj1.setweight(90);
    cout << obj1.weight << endl;
    obj1.sleep();

    return 0;
}