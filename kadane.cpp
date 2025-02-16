#include<iostream>
#include<vector>
#include<climits>

using namespace std;



int maxSubArray(vector<int> &nums){

    int maxsum = INT_MIN ;
    int currSum = 0 ;
    
    for(int val : nums){
        currSum += val ;
        maxsum = max(currSum , maxsum);

        if(currSum < 0){
            currSum = 0 ;
        }
    }
    

    return maxsum ;
}

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4} ;

    cout << maxSubArray(nums) << endl ;

    return 0 ;
}