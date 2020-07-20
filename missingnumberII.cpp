#include <iostream>
using namespace std;

int missingNumber(int arr[],int n){
    
    int x1=arr[0],x2=1;
    for(int i=0;i<n;i++){
        x1=x1^arr[i];   
    }
     for(int i=2;i<n;i++){
        x2=x2^i;   
    }
    return (x1^x2);
}    
int main()
{
    int arr[]={1,2,3,4,5,6,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<missingNumber(arr,n)<<endl;
    
    return 0;
}
