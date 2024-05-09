#include <iostream>
using namespace std;
class Base {
protected:
    int count;
public:
    Base(){
        cout<<"the zero argument constructor called of the base class";
        count=10;
    };

    void display() {
       cout << "Base class count: " << count <<endl;
    };
    void operator ++() {
        count++;
        
    }
};

class Derived : public Base {
public:
    
    void operator--() {
        count--;
    }


    void display() {
       cout << "Derived class count: " << count <<endl;
    }
};

int main() {
    Derived obj1,ob2;    --obj1;
   obj1.display();
}