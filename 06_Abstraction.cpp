#include <bits/stdc++.h>

using namespace std;

class Bird{
    public:
        virtual void eat() = 0;
        virtual void fly() = 0;  //pure virtual  note-- classes that inherit this class has to implement pure virtual function.

};

class Sparrow : public Bird{
    public:
    
        void eat(){
            cout << "Sparrow is eating\n";
        }

        void fly(){
            cout << "Sparrow is flying\n";
        }

};

int main(){
    Bird * b1 = new Sparrow();

    b1->fly();
    return 0;
}