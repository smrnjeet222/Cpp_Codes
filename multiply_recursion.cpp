#include <iostream>

using namespace std;



int multiply(int m, int n){


      // if (n==0 || m==0) return 0; 

        if (n==1) return m;    
  

    return (m+(multiply(m,n-1)));


}


int main() 
{


int m,n;
cin>>m>>n;



cout<< multiply(m,n);



return 0;



}






























































































































































































































































































































































