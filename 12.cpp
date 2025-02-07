#include <iostream>
using namespace std;

void Function1()
{

    static int i = 1 ;
cout << "This is my Function1  :" << i  << endl ;
 i++ ;

}

void Function2() ; // to call function2 before main function

int main(){
  Function1();
  cout << endl ;
  Function1();
  Function2();
  
 return 0;
}

void Function2(){ 
    cout << "This is my Function2" << endl ;
    
}

