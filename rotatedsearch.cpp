#include <iostream>
using namespace std;

int binarySearch(int arr[],int low,int high,int key){
    if(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key) return mid;
        if(arr[mid]>key) return binarySearch(arr,0,mid-1,key);
        return binarySearch(arr,mid+1,high,key);
    }
    return -1;
}

int findPivot(int arr[],int low, int high){
    if(high>low){ 
    int mid=low+(high-low)/2;
    if(arr[mid]>arr[mid+1]) return mid+1;
    if(arr[mid]<arr[mid-1]) return mid;
    if(arr[0]>arr[mid]) return findPivot(arr,0,mid-1);
    return findPivot(arr,mid+1,high);
    }
    return -1;
}

int findKey(int arr[],int n,int key){
    int pivot=findPivot(arr,n,key);
    if(pivot==-1) return binarySearch(arr,0,n-1,key);
    if(arr[pivot]==key) return pivot;
    if(arr[0]<key) return binarySearch(arr,0,pivot-1,key);
    return binarySearch(arr,pivot+1,n-1,key);
}

int main()
{
    int arr[]={2,3,4,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Element found at index: "<<findKey(arr,n,4);
    return 0;
}
