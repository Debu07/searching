#include <iostream>
using namespace std;

int missingNumber(int arr[],int n){
    int sum=0;
    int total=n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    return total-sum;
}    
int main()
{
    int arr[]={1,2,3,4,5,6,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<missingNumber(arr,n)<<endl;
    
    return 0;
}
