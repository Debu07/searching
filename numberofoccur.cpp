#include <iostream>
using namespace std;

int leftMostOccurence(int arr[],int n,int key){
    int low=0,high=n-1; 
    int lowest=-1;
    while(high>=low){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            lowest=mid;
            high=mid-1;
        }
        else if(arr[mid]>key) high=mid-1;
        else low=mid+1;
    }
    return lowest;
}

int rightMostOccurence(int arr[],int n,int key){
    int low=0,high=n-1; 
    int highest=-1;
    while(high>=low){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            highest=mid;
            low=mid+1;
        }
        else if(arr[mid]>key) high=mid-1;
        else low=mid+1;
    }
    return highest;
}
int main()
{
    int arr[]={2,4,10,10,10,10,18,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=10;
    int lowest=leftMostOccurence(arr,n,key);
    int highest=rightMostOccurence(arr,n,key);
    cout<<"number of occurence of 10 are: "<<endl;
    int count=highest-lowest+1;
    cout<<count<<endl;
    return 0;
}
