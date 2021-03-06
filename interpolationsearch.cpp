#include <iostream>
using namespace std;

int interpolationSearch(int arr[],int n,int key){
    int low=0,high=n-1;
    while(low<=high && key>=arr[low] && key<=arr[high]){
        if(low==high){
            if(arr[low]==key) return low;
            return -1;
        }
int pos = low + (((double)(high - low) / 
            (arr[high] - arr[low])) * (key - arr[low])); 
        if(arr[pos]==key);
        return pos;

        if(arr[pos]>key) high=pos-1;
        else low=pos+1;

    }
    return -1;
}
int main()
{
    int arr[]={10,12,13,16,18,19,20,21,22,23,24,33,35,42,47};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=10;
    cout<<"element found at position: "<<interpolationSearch(arr,n,key);
    
    
    return 0;
}
