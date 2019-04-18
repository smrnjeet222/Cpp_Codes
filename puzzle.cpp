/* Find a number less than 100
   that is increased by one-fifth of 
   its value when its digits are revesed.*/

#include <iostream>

using namespace std;

int main()
{
   int a=0,b=0,i=1,num;
     while(i<100)  
    { 
           b=i%10;
            a=i/10;
             num=10*b+a;


      if(num==(6*i/5))
      {
          cout<<i<<endl;
    
    }
       i++;
}
    return 0;
}
