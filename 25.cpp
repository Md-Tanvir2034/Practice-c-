#include <iostream>
using namespace std;

class MyClass{

    static int a;
public:
    
    MyClass() {
        cout << "Constructor called! Object is created. " << a++<< endl;
    }

    
    ~MyClass() {
        cout << "Destructor called! Object is destroyed. " << a++ << endl;
    }

 
    void displayMessage() {
        cout << "Hello from MyClass! " << endl;
    }
};

int MyClass :: a =10 ;

int main() {
    cout <<  "Creating an object of MyClass..." << endl;
    MyClass obj; 

    cout << "Calling displayMessage()..." << endl;
    obj.displayMessage(); 

    cout << "End of main(). Destructor will be called automatically." << endl;

    MyClass obj1 ;
    obj1.displayMessage();

    cout << endl; 
    cout << endl ;

    MyClass obj2 ;
    obj2.displayMessage();
    return 0; 
}