// q1 Consider an array arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91} and use Binary Search to find the target 23.
#include <iostream>
using namespace std;

int binarySearch(int arr[],int low , int high,int target){
    if(low>high)
    return -1;
    int mid=(low+high)/2;
    if(arr[mid]==target)
    return mid;

    if(arr[mid]>target)
    return binarySearch(arr,low,mid-1,target);
    else
    return binarySearch(arr,mid+1,high,target);

}


int main(){
    int n=10;
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int low=0;
    int high=9;
    int target=23;
    int result =binarySearch(arr,low,high,target);
    if(result==-1)
    cout<<"Element not found"<<endl;
    else
    cout<<"Element found at index "<<result<<endl;

    return 0;


}

