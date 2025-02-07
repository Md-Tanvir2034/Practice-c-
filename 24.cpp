#include<iostream>
using namespace std;

struct student{
   
    string name ;
    int id ;
    double mark[5];
};

void inputStudents(student students[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout << "Enter details for student " << i+1 << ": " << endl ;
        cout << "Name: " ;
        cin >> students[i].name ;
        cout << "ID: " ;
        cin >> students[i].id;

        cout << "Enter marks for 5 subject: " ;
        for(int j = 0 ; j < 5 ; j++){
            cin >> students[s].marks[j] ;
        }
    }

    void display(student students[], int n , int threshold){
        cout << "Studnets scoring above " << threshold << ": " << endl ;

        for(int i = 0 ; i < n ; i++){
            int sum = 0 ; 

            for(int j = 0 ; j < 5 ; j++){
                sum += students[i].marks[j] ;

            }

            if(sum / 5 > threshold ){
                cout << students[i].name << endl ;
            }
        }
    }

}

int main(){
    
    int n , threshold ;
    cout << "Enter number of studnets: " ;
    cin >> n ;

    student students[n] ;

    inputStudents(students , n) ;

    cout << "Enter threshold : " ;
    cin >> threshold ;
    
    display(students , n , threshold) ;

    return 0 ;
    
}