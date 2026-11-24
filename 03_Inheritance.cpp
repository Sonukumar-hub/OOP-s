#include<bits/stdc++.h>
using namespace std;

class Vehicle{

    
public:
    string name;
    string model;
    int noOfTyres;

    Vehicle(string name, string model, int noOfTyres){
        this->name = name;
        this->model = model;
        this->noOfTyres = noOfTyres;
    }

    void start_engine(){
        cout << "Engine is Starting" << name << " " << endl;
    }

    void stop_engine(){
        cout << "Engine is Stopping" << name << " " << endl;
    }
};

class Car: public Vehicle{
    public:
        int noOfDoors;
        string transmissionType;

        Car(string name, string model, int noOfTyres, int noOfDoors, string transmissionType): Vehicle(name, model, noOfTyres){
            this->noOfDoors = noOfDoors;
            this->transmissionType = transmissionType;
        }

        void startAc(){
            cout << "AC is Starting" << name << " " << endl;
        }
};

int main(){

    Car c1("BMW", "X5", 4, 4, "Automatic");
    c1.start_engine();
    c1.startAc();
    return 0;
}