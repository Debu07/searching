#include <iostream>
using namespace std;

int fixedPoint(int arr[],int n){
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==mid) return mid;
        else if(arr[mid]>mid) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int main()
{
    int arr[]={-4,-2,0,1,3,5,6,7,9,13,17};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"fixed point is: "<<fixedPoint(arr,n)<<endl;    
    
    return 0;
}
