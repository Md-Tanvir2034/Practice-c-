#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input; 

    for (char ch : input) { 
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) { 
            cout << "Alphabetic character: " << ch << endl; 
        } else {
            cout << "Non-alphabetic character: " << ch << endl; 
        }
    }

    return 0;
}