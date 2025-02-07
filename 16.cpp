#include<iostream>
using namespace std;


void fun(int *arr , int size){

    for(int i = size - 1 ; i>= 0 ; i--){
        cout << arr[i] << " " ;
    }
}


int main(){
    int size ; 
    cout << "Enter the size of the array : " ;
    cin>> size ; 

    int *arr = new int[size] ;
    cout << "Enter the elements of the array : ";
    

    for(int i = 0 ; i < size  ; i++) {
        cin >> arr[i] ;

    }

    fun(arr  , size) ;

    delete[] arr ;
}