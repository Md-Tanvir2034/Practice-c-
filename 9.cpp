#include<iostream>
using namespace std;

int main(){

int a = 20 ;
int b = 30 ;

int *p1 , *p2 ;

p1 =&a ;
p2 =&b ;

cout << "before swap a =" << *p1 << " b= " << *p2 << endl ;

*p1 = *p1 + *p2 ; //20+30 = 50
*p2 = *p1 - *p2 ; //50-30 = 20
*p1 = *p1 - *p2 ; //50-20 = 30

cout << "after swap a =" << *p1 << " b= " << *p2 << endl ;


  return 0 ;  
}