#include <iostream>
using namespace std;

int findMajorityElement(int arr[],int n){
    int majority_element=arr[0],count=1;
    for(int i=1;i<n;i++){
        if(arr[i] == majority_element){
            count++;
        }
        else count--;

        if(count==0){
            count=1;
            majority_element=arr[i];

        }
    }
    return majority_element;

}

int verifyMajorityElement(int arr[],int major,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==major){
            count++;
        }
    }
    if(count>n/2) return major;
    
    return -1;

}

int main()
{
    int arr[]={7,2,7,3,7,2,7,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int find=findMajorityElement(arr,n);
    cout<<"majority element is: "<<verifyMajorityElement(arr,find,n);
    return 0;
}
