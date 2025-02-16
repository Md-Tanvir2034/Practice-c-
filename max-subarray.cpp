#include<iostream>

using namespace std;


int main(){
    int n = 5 ;
    int arr[n] = {1,2,3,4,5} ;

    int maxsum = 0 ;
    
    for(int st = 0 ; st < n ; st++){
        int currSum = 0 ; 
        for( int end = st ; end < n ; end ++ ){
            currSum += arr[end] ;
            maxsum = max(maxsum , currSum) ;
        }
    }

    cout << "max subarray sum = " << maxsum << endl ;
    

    return 0 ;
}