#include<iostream>
using namespace std;

int main(){
  int * number = new int ;
  *number = 10 ; 

  // alternative way 
  // int *number = new int(10) ;
 
    cout << "The value of number is : " << *number << endl ;

    delete number ; 

    cout << "The value of number is : " << *number << endl ;

    cout <<endl ;
    cout <<endl ;
    cout <<endl ;

    cout << "ok , pointer and array combo " << endl ; 

    int *arr = new int[5] ;
    arr[0] = 10 ;
    arr[1] = 20 ;       
    arr[2] = 30 ;
    arr[3] = 40 ;
    arr[4] = 50 ;

    cout << "The value of arr[0] is : " << arr[0] << endl ;
    cout << "The value of arr[1] is : " << arr[1] << endl ;
    cout << "The value of arr[2] is : " << arr[2] << endl ;
    cout << "The value of arr[3] is : " << arr[3] << endl ;
    cout << "The value of arr[4] is : " << arr[4] << endl ;
    

    delete[] arr ;

    cout << "The value of arr[0] is : " << arr[0] << endl ;
    cout << "The value of arr[1] is : " << arr[1] << endl ;
    cout << "The value of arr[2] is : " << arr[2] << endl ;
    cout << "The value of arr[3] is : " << arr[3] << endl ;
    cout << "The value of arr[4] is : " << arr[4] << endl ;

}