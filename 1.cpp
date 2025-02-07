#include<iostream>
using namespace std;

void opperation(double num1 , double num2 , char op){

    if( op == '+'){
        cout <<" your sum result : " <<  num1 + num2 << endl ;   
    }
    else if( op == '-'){
        cout <<" your minus result : " <<  num1 - num2 << endl ;   
    }

    else if( op == '*'){
        cout <<" your multipication result : " <<  num1 * num2 << endl ;   
    }
     else if( op == '/'){
        cout <<" your minus result : " <<  num1 / num2 << endl ;   
    }
     else if( op == '%'){

        int n1 = num1 ;
        int n2 = num2 ;
        cout <<" your % result : " <<  n1 % n2 << endl ;   
    }

    else{cout << "Invalid opperation" << endl ;}

}

int main(){

    double num1 , num2 ;
    char op ;

    cout << "Enter  number for opperation sample ( 5 + 5 ): ";
    cin >> num1 >> op >> num2 ;

    opperation(num1 , num2 , op);
    


    return 0 ;

}