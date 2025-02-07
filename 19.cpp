#include<iostream>
using namespace std;

void fun(string *word1 , string *word2){

    if((*word1)==(*word2)){
        cout << "Strings are equal" << endl ;
    }
    else{
        cout << "Strings are not equal" << endl ;
    }
}

int main(){
    string word1 , word2 ;
    cout << "Enter the first word : " ;
    cin >> word1 ;
    cout << "Enter the second word : " ;
    cin >> word2 ;

    fun(&word1 , &word2) ;
}