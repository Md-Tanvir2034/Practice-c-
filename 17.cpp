#include<iostream> 
using namespace std; 

void fun(int *arr , int size ){

    int sum = 0 ;

    for(int i = 0 ; i < size ; i++){
        sum += arr[i] ;
    }

    int average = sum / size ; 
    cout << "The average of the array is :" << average << endl ;
}
int main(){
    
    int size ;
    cout << "Enter the size of the array : " ;  
    cin >> size ;

    int *arr = new int[size] ;
    cout << "Enter the elements of the array : " ;
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i] ;
    }
    
    fun(arr , size ) ;


    return 0 ;
}