#include <iostream>
using namespace std;

int findPeak(int arr[],int low,int high){
    while(high>=low){
        int mid=low+(high-low)/2;
        if(mid==low|| arr[mid-1]<arr[mid]&& mid==high||arr[mid+1]<arr[mid])
        return arr[mid];
        else if(mid>low && arr[mid-1]>arr[mid]) high=mid-1;
        else low=mid+1;
    }
    return -1;

}
int main()
{

    int arr[]={2,8,4,5};
    int n=sizeof(arr)/sizeof(arr[n]);
    int peak=findPeak(arr,0,n-1);
    if(peak>0) cout<<"peak element is: "<<peak;
    else cout<<"theres no peak in the array";
    
    return 0;
}
