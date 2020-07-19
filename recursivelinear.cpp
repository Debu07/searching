#include <iostream>
using namespace std;

int recursiveLinear(int arr[],int left,int right,int key){

    if(left>right) return -1;
    if(arr[left]==key) return left;
    if(arr[right]==key) return right;

    return recursiveLinear(arr,left+1,right-1,key);

}   
int main()
{
    int arr[]={1,3,5,7,9,2,4,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=10;
    int key2=9;
    cout<<"Element found at position:"<<recursiveLinear(arr,0,n-1,key)<<"\n";
    cout<<"Element found at position:"<<recursiveLinear(arr,0,n-1,key2);
    return 0;
}
