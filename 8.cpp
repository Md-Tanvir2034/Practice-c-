#include<iostream>
using namespace std;

int compare(int *x , int *y){
    if(*x > *y){
      return *x ;
    }
    else if(*x < *y){
        return *y ;
    }
    else{
        cout << "Both are equal" << endl ;
        return *x ;
    }
}

int main(){
   int x , y ;
   cout << " Enter your x and y : " ;
   cin>> x >> y ;

   int greater = compare(&x , &y );

   if( x != y){
   cout << "The greater number is : " << greater  << endl ; 
   }
   
   return 0 ;
}