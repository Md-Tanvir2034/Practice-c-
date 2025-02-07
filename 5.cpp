#include<iostream> 
using namespace std;

void highest( int arr[] ,  int size) {
    int max = arr[0] ;
    for(int i =  0 ; i < size ; i++){
        if(arr[i] > max){
            max = arr[i] ;
        }
    }

    cout << "The highest number in the array is : " << max << endl ;
}


int main(){
    int size ;
    cout << "Enter the size of the array : " ;
    cin >> size ;

    int *arr = new int[size] ;
    cout << "Enter the elements of the array : " ;
    for(int i =  0 ; i < size ;  i++){
        cin >> arr[i] ;
    }

    highest(arr , size) ;

    delete[] arr ;
    return 0 ;
}