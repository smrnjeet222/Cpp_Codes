#include <iostream>
using namespace std;

void bubblesort(int arr[] ,int n , int i){
    if (n==1) return;
    if (i==n-1) 
    return bubblesort(arr,n-1,0);

    if (arr[i]>arr[i+1]){

        swap(arr[i],arr[i+1]);
    }

    bubblesort(arr,n,i+1);

    return;

}

int main() {
    int n=6;
    int arr[n]={5,3,6,1,8,2};
    bubblesort(arr,n,0);
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }


}
