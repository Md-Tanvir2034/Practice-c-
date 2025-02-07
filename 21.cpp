#include<iostream>
using namespace std;


void fun1(int* num1 , int* num2){
    int sum = *num1 + *num2;
    cout << "The sum of the numbers is: " << sum << endl;
}

void fun2(int* num1 , int* num2){
    int sub = *num1 - *num2 ;
    cout << "The subtraction of the numbers is: " << sub << endl;
}


int main(){
    int* num1 = new int;
    int* num2 = new int;
    
    cout << "Enter the first number: ";
    cin >> *num1;
    cout<< "Enter the second number: ";
    cin >> *num2;

    string operation;
    cout << "Enter the operation you want to perform: ( + or -) ";
    cin >> operation;
    
    if(operation == "+"){
    fun1(num1 , num2);}

    else if(operation == "-"){
    fun2(num1 , num2);}

    else{
        cout << "Invalid operation" << endl;
    }
}