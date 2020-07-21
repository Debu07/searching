#include <iostream>
using namespace std;

int main()
{
    // int arr[]={7,4,8,3,9};
    int arr[]={2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int SUN=arr[0],count=1;
    for(int i=1;i<n;i++){
        if(arr[i]>SUN){
            SUN=arr[i];
            count++;
        }
    }
    cout<<"number of buildings that can see the sun are: ";
        cout<<count<<endl;
    return 0;
}
