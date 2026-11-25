#include<bits/stdc++.h>

using namespace std;

class Shape {
    
    public:
        virtual void draw final   {
            cout << "Generic Drawing..." << endl;
        }
};

class Circle: public Shape{
    public:
        void draw(){
          cout << "Circle is drawing..." << endl;
       }
};

class Rectangle: public Shape{
    public:
       void draw(){
          cout << "Rectangle is drawing..." << endl;
       }
};


int main(){
    Shape * s = new Shape();
    s->draw();


    Shape* s2 = new Circle();
    s2->draw();

    return 0;
}