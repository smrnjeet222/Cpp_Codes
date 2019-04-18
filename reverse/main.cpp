#include <iostream>

using namespace std;

int main()
{
      unsigned int n;
        cin>> n;
        int a,b;
    for (int i=0 ; i<n;i++){
        a=n%10;
       b=n/10;
             n=b;
         cout << a;

    }
      if(n!=0){
        cout<< n;
      }
    return 0;
}
