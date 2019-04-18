#include <iostream>

using namespace std;

int main() {


    
    int n;

    cin>>n;

    
    int val=1;

     int row =1;

        for(row=1;row<=n;row++){


            for(int i=1;i<=row;i++){

               cout<<val<<" ";


               val++;

               }
 
              cout<<endl;


        }
    

    return 0;
 
}
