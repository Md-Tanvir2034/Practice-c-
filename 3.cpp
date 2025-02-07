#include<iostream>
using namespace std;

void leap(int year){

    if( (year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0) {
        cout << "leap year " << endl ;
    }
    else{
        cout << " your givern year is not leap year " << endl ;
    }
}

int main(){
    int year ;
    cout << " Enter your year : " ;
    cin >> year ;
    
    leap(year) ;
    return 0 ; 
}