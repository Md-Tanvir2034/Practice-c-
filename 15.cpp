#include<iostream>
using namespace std;

void fun(int* a , int *b , int *c){
    int tanvir = *a+*b+*c ;

    cout << "The sum of the numbers is : " << tanvir << endl ;
   
}



int main(){ 
    
    int a =  2 , b = 3 , c = 4 ;

     fun(&a , &b , &c) ;


     
   

   


}
