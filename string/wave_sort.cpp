#include <iostream>
using namespace std;
int main() {
    int a[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

        for (int i=0;i<n;i+=2){
            if (i>0 && a[i]<a[i-1]){
                swap (a[i],a[i-1]);
            }
            if (i<n-1 && a[i+1]>a[i]){
                swap (a[i+1],a[i]);
            }
        }

     for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
  return 0;
}
