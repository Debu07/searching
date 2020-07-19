#include <iostream>
using namespace std;


int linearsearch(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        return i;
    }
    return -1;

}
int main()
{

int arr[]={3,5,7,9,1,2,4};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"element found at index: "<<linearsearch(arr,n,9);


    return 0;
}
