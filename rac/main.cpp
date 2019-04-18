#include <iostream>

using namespace std;

int maxx(int arr[],int size,int n){

    if(n==0){
        return arr[n];
    }

    int ans = maxx(arr,size,n-1);
    return min(ans , arr[n]);
}
int main()
{
    int arr[5] = {7,6,4,3,9};

    cout<<maxx(arr,5,4);
    return 0;
}
