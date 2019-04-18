#include <iostream>
using namespace std;

int setbits(int *arr, int i){
    if (arr[i]=='\0') {return 0;}

int ans=0;
int n=arr[i];

    for ( ;n>0;n=n>>1){
        ans=(ans+(n&1));
      }
      cout<<ans<<endl;


 setbits(arr, i+1);

}

int main() {
    int n;
    cin>> n;
    int arr[10];
    for (int i =0 ; i<n ;i++){
        cin>>arr[i];
    } 

    setbits(arr, 0);
    return 0;
}
