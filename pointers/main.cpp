#include <iostream>

using namespace std;

void  funct(int*ptr){

int sum =0;
  for (int i=0;i<5;i++){
    sum+= *(ptr+i);
  }
    cout <<sum ;


}

int main()
{
   int arr[5]={1,2,3,4,5};

   funct(arr);

    return 0;
}
