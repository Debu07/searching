#include <iostream>
using namespace std;

int binarySearch(int arr[],int low,int high,int key){

if(high>=low){
    int mid=low+(high-low)/2;
    if(arr[mid]==key) return mid;
    if(arr[mid]>key) return binarySearch(arr,low,mid-1,key);
    return binarySearch(arr,mid+1,high,key);
}
return -1;
}

int findUpperlimit(int arr[],int key){
    int val=arr[0];
    int l=0,h=1;
    while(val<key){
        l=h;
        h=2*h;
        val=arr[h];
    }
    return binarySearch(arr,l,h,key);

}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    int key=7;
    int ans=findUpperlimit(arr,key);
    if(ans==-1) cout<<"not found";
    else cout<<"element is present at index: "<<ans;
    return 0;
}
