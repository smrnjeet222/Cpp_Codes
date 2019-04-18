#include <iostream>

using namespace std;

int main()
{
   /*int n;
   cin>>n;
   int a[100];

   for(int i =0; i<n;i++){
    cin>>a[i];
   }*/
   int a[10]{-4,1,3,-2,6,2,-8,-9,4,0};

int  cursum=0;
int maxsum = 0;
int left ; int rght;

    for(int i=0;i<10;i++){
      for (int j=i;j<10;j++){
          cursum=0;

             for(int k=i;k<=j;k++){
                   // cout <<a[k]<<"  ";
                cursum += a[k];
             } 
            if(cursum>maxsum){
                maxsum=cursum;
                left=i;
                rght=j;
            }
           }   
     }

 cout << maxsum<< endl ;
for (int k=left; k<=rght ;k++){
    cout<<a[k]<<" ";
}
    return 0;
}
