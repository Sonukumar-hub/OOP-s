#include <bits/stdc++.h>

using namespace std;

class Student{
    public:
        int id;
        string name;
        int age;
        int nos;

    private:
        int *gpa;
        string gf;


    public:

        void gfChatting(){
            cout << this->name << " Chatting with " << this->gf << endl;
        }


        Student(){
            cout << "Defalut Constructor called" << endl;
        }

        Student(int id, string name, int age, int nos,float gpa,string gf){
            this->id = id;
            this->name = name;
            this->age = age;
            this->nos = nos;
            this->gpa = new int(gpa);  
            this->gf = gf;
        }

        //copy constructor
        Student(const Student &obj){
            this->id = obj.id;
            this->name = obj.name;
            this->age = obj.age;
            this->nos = obj.nos;
        }

        void study(){
            cout << this->name << " Studying..." << endl;
        }

        void sleep(){
            cout << this->name << " Sleeping..." << endl;
        }

        void bunk(){
            cout << this->name << " Bunking..." << endl;
        }

        ~Student(){
            cout << "Defalut Destructor called" << endl;
            delete this->gpa;
        }
};


int main() {

    Student s1(2,"Sonu",21,3,9.5,"Nauseen");
    s1.gfChatting(); // This will give an error because gfChatting is a private method and cannot be accessed outside the class.    
    return 0;
}