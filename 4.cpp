#include<iostream>
using namespace std;

void triangle(int angle1 , int angle2 , int angle3){
    if(angle1 < 90 && angle2 < 90 && angle3 < 90) {
        cout << "All angles less than 90 degrees: Acute" << endl ;
    }

    else if(angle1 == 90 || angle2 == 90 || angle3 == 90) {
        cout << "one angle is  90 degree: Right" << endl ;
    }

    else if(angle1 > 90 || angle2 > 90 || angle3 > 90) {
        cout << "one angle is greater then 90 degree: obtuse" << endl ;
    }
    
}

int main(){
    int angle1 , angle2 , angle3 ;
    cout << "Enter the angles of the triangle : " ;
    cin >> angle1 >> angle2 >> angle3 ;

    if(angle1 + angle2 + angle3 == 180) {
        cout << "The given anngles are of a triangle " << endl ; 
        triangle(angle1 , angle2 , angle3) ;
    }
        
    else{ 
        cout << "The given anngles aren't of a triangle " << endl ; 

     }
}