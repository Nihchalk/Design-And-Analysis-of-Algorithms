//q4. You are given a 1D array that may contain both positive and negative integers, and find the sum of a contiguous subarray of numbers which has the largest sum. For example, if the given array is
// {-2, -5, 6, -2, -3, 1, 5, -6}, then the maximum subarray sum is 7. 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//brute force solution
// int maxSubarraySum(vector<int> &arr ){
//     int result=arr[0];
//     for(int i=0; i< arr.size(); i++){
//         int currSum=0;
//         for(int j=i; j< arr.size(); j++){
//             currSum=currSum+arr[j];

//             result= max(result,currSum);
//         }
//     }
//     return result;

// }


int maxSubarraySum(vector<int>& arr) {

    int maxSum = INT_MIN;   
   int currSum = 0;         

    for (int i = 0; i < arr.size(); i++) {
        currSum += arr[i];          
        if (currSum > maxSum) {
            maxSum = currSum;       
        }
        if (currSum < 0) {
            currSum = 0;           
        }
    }
    return maxSum;
}

int main() {
    vector<int> arr = {-2, -5, 6, -2, -3, 1, 5, -6};
    cout << maxSubarraySum(arr);
    return 0;
}
