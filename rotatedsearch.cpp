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

int findPivot(int arr[],int n, int key){
    int low=0,high=n-1;
    int mid=low+(high-low)/2;
    if(low>high) return -1;
    if(arr[mid]>arr[mid+1]) return mid+1;
    if(arr[mid]<arr[mid-1]) return mid;
    if(arr[0]>arr[mid]) return findPivot(arr,0,mid-1);
    return findPivot(arr,mid+1,high);
}

int findKey(int arr[],int n,int key){
    int pivot=findPivot(arr,n,key);
    if(pivot==-1) return binarySearch(arr,0,n-1,key);
    if(arr[pivot]==key) return pivot;
    if(arr[0]>arr[pivot]) return binarySearch(arr,0,pivot-1,key);
    if(arr[0]<arr[pivot]) return binarySearch(arr,pivot+1,n-1,key);
}

int main()
{
    int arr[]={5,6,7,8,9,1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Element found at index: "<<findKey(arr,n,8);
    return 0;
}
