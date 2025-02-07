#include<iostream>
using namespace std;

void digit(int num){
    int count = 0 ;
    while( num > 0 ){
        num = num / 10 ;
        count++ ;

    }

    cout << "The number of digits in the given number is : " << count << endl ; 
}

int main(){
    int num ;
    cout << "Enter your positive number : " ;
    cin >> num ;
    
    if(num > 0 ){
        digit(num) ;
    }
    else if(num < 0){
        cout << "Negative number" << endl ;

    }
    else{
        cout << "zero" << endl ;
    }


}