#include <iostream>
#include <vector>
using namespace std;

int main() {
   unsigned int test;
   int arr[100000];
	cin>>test;
	 int n;

         while (test-- && n<1000000){
                  cin>>n;
                  int countno=0;
                  for (int i=1;i<=n;i++){
                     cin >>arr[i-1];
                     if (i<arr[i-1] || arr[i-1]==0){
                        countno++;
                     }
                     else break;
                  }
                  cout<<countno;
         }

	return 0;
}



