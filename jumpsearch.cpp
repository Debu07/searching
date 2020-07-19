#include <iostream>
#include<math.h>
using namespace std;

int jumpSearch(int arr[],int n,int key){
    int jump=floor(sqrt(n));
    int prev=0;
    while(arr[jump]<=key && jump<n){
        prev=jump;
        jump+=floor(sqrt(n));
        if(jump > n-1) return -1;
    }

    //linear search from previous jump to nextjump
    for(int i=prev;i<jump;i++){
        if(arr[i]==key) return i;
    }
    return -1;
}
int main()
{
    int arr[]={0,1,1,2,3,5,8,13,21,38,55,89,144,233,377,610};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=55;
    cout<<"element found at index: "<<jumpSearch(arr,n,key);
    return 0;
}
