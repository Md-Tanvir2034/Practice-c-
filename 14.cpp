#include<iostream>
using namespace std;

int num(int a , int b){
    return a+ b ;
}

double num(double a , double b){
    return a+b ;
}

void printarray(int arr[] , int size){
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " " ;
    }
}

int main(){
    int main=num(10 , 5); 
    double num2= num(10.5 , 5.5);

    cout << "The integer sum is : " << main << endl ;
    cout << "The double sum is : " << num2 << endl ;

    int arr[5] = {1,2,3,4,5} ;
    printarray(arr , 5) ;


}