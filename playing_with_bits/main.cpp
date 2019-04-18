#include<iostream>
using namespace std;

int setbits(int a, int b){
   if (a>b) {return 0;}

 int ans =0;
 int x=a;
  while (x>0){
     ans++;
    x = x&(x-1);
  }
  int value = ans + setbits(a+1, b) ;

}

int main() {

  int q ,a ,b;
  cin>>q;

  int k=q;
  while(k>0){

    cin>>a>>b;

      if (a<=b){
         cout<< setbits(a, b)<<endl;
      }
         if (a>b){
            cout<< setbits(b,a)<<endl;
      }

      k--;
  }

	return 0;
}












