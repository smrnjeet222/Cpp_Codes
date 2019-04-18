#include <iostream>

using namespace std;

int maxx(int arr[],int size,int n){

    int ans = maxx(arr,size,n);
    return min(ans , arr[n]);
}
int main()
{
    int arr[8] = {1,3,4,3,6,7,4,9};

    cout<<maxx(arr,8,0);
    return 0;
}
