#include <iostream>
using namespace std;

int binarySearch(int arr[],int low, int high,int key){
    if(high>=low){
        int mid= (low + (high-low)/2);
            if(arr[mid]==key)
            return  mid;

            else if(arr[mid]>key)
            return binarySearch(arr,low,mid-1,key);

            else
            return binarySearch(arr,mid+1,high,key);


    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=7;
    int low=0;
    int high=n-1;
    cout<<"element found at index: "<<binarySearch(arr,low,high,key);
    return 0;
}
