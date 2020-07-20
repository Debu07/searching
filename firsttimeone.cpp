// find the index of first occurence of 1 in the given array 
// if 1 is not found at any index return -1;


#include <iostream>
using namespace std;

int binarySearch(int arr[],int start,int end){
    if(end>start){
        int mid= start+ (end-start)/2;
        if(arr[mid]==1 && arr[mid-1]==0) return mid;
        if(arr[mid]==1 && arr[mid-1]==1) return binarySearch(arr,start,mid-1);
        if(arr[mid]==0 && arr[mid+1]==1) return mid+1;
        if(arr[mid]==0 && arr[mid+1]==0) return binarySearch(arr,mid+1,end);

    }
    return -1;
}
int main()
{
    int arr[]={0,0,0,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"First occurence of 1 is at index: "<<binarySearch(arr,0,n-1);
    return 0;
}
