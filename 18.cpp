#include<iostream>
using namespace std;

void fun(string *name){
    cout << "Your name is : " << *name << endl ;
    int length = (*name).length();

    cout << "The length of your name is : " << length << endl ;

    int count = 0 ; 
}

int main(){
    string name ;

    cout << "enter your name: " ;
    cin >> name ; 

    fun(&name) ;
}