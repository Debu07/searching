#include <iostream>
using namespace std;

int calculateRotations(int arr[],int n){
    int low=0,high=n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]>arr[mid+1]) return mid+1;
        if(arr[mid-1]>arr[mid]) return mid;
        if(arr[low]>arr[mid]) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int main()
{
    int arr[]={3,5,8,11,12,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int rotations = calculateRotations(arr,n);
    if(rotations==n){
        cout<<"number of rotations: 0";
    }
    else cout<<"number of rotations:"<<rotations;

    return 0;
}
