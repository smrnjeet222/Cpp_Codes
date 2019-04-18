#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

///randomisation

int shuffle(int *a,int s,int e){
             srand(time(0));
            int  i, j,temp;

            for (i =0; i<e;i++){
               j= rand()%(i+1);
               swap(a[i],a[j]);
            }
}

int partition (int *a,int s,int e){

            int i = s-1;
            int j=s;
            int pivot= a[e];
            for  ( ; j<e ;j++){
               if (a[j]<=pivot){
                  i++;
                  swap(a[i],a[j]);
               }
            }
            swap (a[i+1], a[e]);
            return (i+1);
}

void quicksort(int *a,int s, int e){
            if (s>=e) {
                  return;
            }

           int p=  partition(a,s,e);



           quicksort(a,s,p-1);
           quicksort(a,p+1,e);

           return;
}

int main()
{
      int a[] = {2,1,5,10,4,2,0,0,7,6,9,3,9};
         int n = sizeof(a)/sizeof(int);
   cout<<endl;   cout<<endl;
         shuffle(a, 0, n-1);
         cout<< "Shuffled array    ";
          for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
         }
         cout<<endl;   cout<<endl;

         quicksort(a,0,n-1);
         cout<< "Sorted array    ";

         for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
         }
            cout<<endl;   cout<<endl;

    return 0;
}
