#include <iostream>
using namespace std;

int Peak(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1])
            return arr[i];
    }
    return arr[n-1];

}

int main()
{
    int arr[]={5,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"peak: "<<Peak(arr,n);
    return 0;
}
