#include <bits/stdc++.h>

using namespace std;

class Student{
    public:
        int id;
        string name;
        int age;
        int nos;
        int *gpa;


        Student(){
            cout << "Defalut Constructor called" << endl;
        }

        Student(int id, string name, int age, int nos,float gpa){
            this->id = id;
            this->name = name;
            this->age = age;
            this->nos = nos;
            this->gpa = new int(gpa);  
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

    //Stactic allocation of Object

    // Student A(1, "John", 20, 3);
    
    // Student D = A;

    // D.name = "Sonu";
    // cout << A.name << endl;


    // Dynamic allocation of Object
    Student *ptr = new Student(1, "John", 20, 3,9.8);
    cout << ptr->name << endl;

    // Don't forget to deallocate the dynamically allocated memory
    delete ptr;
    return 0;
}