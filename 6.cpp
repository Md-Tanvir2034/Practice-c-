#include<iostream>
using namespace std;

void Fibonacci(int size){

    int *arr = new int[size] ;
    arr[0] = 0 ;
    arr[1] = 1 ;
    
    for(int i = 2 ; i < size ; i++){
        arr[i] = arr[i-1] + arr[i-2] ;
    } 

    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " " ;
    }
}

int main(){
   int size ;
   cout << "Enter your wanted Fibonacci series size : " ;
   cin >> size ;

   Fibonacci(size) ;
}