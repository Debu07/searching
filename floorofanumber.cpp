#include <iostream>
using namespace std;
  
int floorNumber(int arr[],int n,int k){
    int low=0,high=n-1;
    while(low<=high){
        if(k>arr[high]) return high;
        int mid=low+(high-low)/2;
        if(arr[mid]==k) return mid;
        if(arr[mid]>k && arr[mid-1]<k) return mid-1;
        if(arr[mid]>k) high=mid-1;
        else low=mid+1;
        }
    return -1;
}
int main()
{
  int arr[]={1,2,8,10,11,12,19};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"floor is at index : "<<floorNumber(arr,n,18);  
  return 0;
}
