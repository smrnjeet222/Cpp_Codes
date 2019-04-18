#include <iostream>
#include <vector>
using namespace std;

int main() {
   unsigned int test;
	cin>>test;
   unsigned long long int n, b;
   vector<int> p(1000);
   unsigned long long int W;
   unsigned long long  int H;

         while (test-- && W>0&& H>0&& n>0&& b>0){
               cin >> n >> b;
                  vector<int>cbig(100);
                  int mbig = 0;
                  int price;

            for (int i =0; i<n;i++) {
                     cin>>W>>H;
                     cin>>p[i];
                        cbig [i] =W*H;
                        if (cbig[i]>=mbig && p[i]<=b){
                              mbig = cbig[i];
                              price=p[i];
                           }
            }
	         if (price<=b&&mbig!=0){
	             cout <<mbig<<endl;
            }
	        else if (mbig==0)
	           cout << "no tablet"<<endl;
         }

	return 0;
}



