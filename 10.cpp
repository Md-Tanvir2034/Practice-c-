#include<iostream>
using namespace std;

int main(){

int a1 = 5, a2 = 10;
int *p, *p1, *p2;
p1 = &a1;
p2 = &a2;
*p2 = *p;
*p = 4;
*p1 = *p;
cout<<&p1<<endl;

cout<<*p2<<endl;
cout<<*p1<<endl;
cout<<p<<endl;
cout<<p1<<endl;

cout << "Add two numbers using pointers" << endl;

p1 = &a1;
p2 = &a2;
int add = *p1 + *p2;
cout<<"Addition is: "<<add << endl ;

int *p3 = NULL ;
cout<<"using name null pointer = " << p3<<endl;


  return 0 ;  
}