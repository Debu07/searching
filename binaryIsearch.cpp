#include <iostream>
using namespace std;


int binarySearch(int arr[],int low,int high,int key){
    while(low<=high){
        int mid= low+ (high-low)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]>key)
        high=mid-1;
        else low=mid=1;
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int key=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"element found at index: "<<binarySearch(arr,0,n-1,key);
    
    return 0;
}
