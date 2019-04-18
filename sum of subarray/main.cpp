#include <iostream>

using namespace std;

int sum (int *arr,int n){
   int val;
     if (n==0) return val;
       val=arr[n-1]+sum(arr,n-1);
   return val;
}

//int func(int *arr, int k, int p){
//        for (int i=0;i<n;i++){
//              for (int j=i;j<n;j++){
//                     for (int k=i;k<=j;k++){
//              //    cout<<arr[k]<<" ";
//        }
//    }
// }
// }


int main()
{
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int arr[20];
    cout<<"enter array";
    for (int i=0;i<n; i++){
      cin>>arr[i];
    }
    sum(arr, n);
    cout << sum;
    return 0;
}
