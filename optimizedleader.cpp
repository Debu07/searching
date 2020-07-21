#include <iostream>
using namespace std;

int optimizedLeaders(int arr[],int n){
    int ALWAYS_LEADER= arr[n-1];
    cout<<ALWAYS_LEADER<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i]>ALWAYS_LEADER)
        {
        ALWAYS_LEADER=arr[i];
        cout<<ALWAYS_LEADER<<" ";
        }
    }
}
int main()
{
    int arr[]={16,17,4,3,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    optimizedLeaders(arr,n);
    return 0;
}
