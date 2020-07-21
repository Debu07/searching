#include <iostream>
using namespace std;

int missingNumber(int arr[],int n){
    int low=arr[0],high=arr[n-1];
    int x2=arr[0];
    for(int i=0;i<n;i++){
        low=low^arr[i];   
    }
     for(int i=arr[0];i<=high;i++){
        x2=x2^i;   
    }
    return (low^x2);
}    
int main()
{
    int arr[]={4,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<missingNumber(arr,n)<<endl;
    
    return 0;
}
