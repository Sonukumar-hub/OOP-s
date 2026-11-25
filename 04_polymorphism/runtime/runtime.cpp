#include<bits/stdc++.h>

using namespace std;

class Shape{
    
    public:
        void draw(){
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
    Circle s;
    s.draw();
    return 0;
}