#include <bits/stdc++.h>
using namespace std;


class Add{
    public:

    // int a, b, c;
        

    int sum(int a, int b){
        return a + b;
    }

    int sum(int a, int b, int c){
        return a + b + c;
    }

    double sum(double a, double b){
        return a + b;
    }
};


int main(){

    Add A;

    cout << A.sum(3,5) << endl;
    cout << A.sum(3,5,7) << endl;

    return 0;
}