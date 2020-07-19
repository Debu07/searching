// find the point where a monotonically 
// increasing function becomes first time positive

// f(x)= x*x - 10*x-20
//f2(x)= x*x +2*x-10
int findFirstPositive(int low, int high);
int f(int x){
    return x*x +2*x-10;
}

int findPositive(){
    if(f(0)>0) return 0;
    
    int i=1;
    while(f(i)<=0)
    i=i*2;

return findFirstPositive((i/2),i);

}

int findFirstPositive(int low, int high){

    if(low<=high){
            int mid=low+ (high-low)/2;

            if(f(mid)>0 && (low==mid)|| f(mid-1)<=0)
            return mid;
            if(f(mid)>0) return findFirstPositive(low,mid-1);
            if(f(mid)<0) return findFirstPositive(mid+1,high);
            }

            return -1;
    }

    #include <iostream>
    using namespace std;

    int main()
    {
        cout<<"the value at which the function become first positive is: ";
        cout<<findPositive();
        
        
        
        return 0;
    }
    
