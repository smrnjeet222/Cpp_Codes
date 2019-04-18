#include <iostream>
using namespace std;
int main() {
    
int n;
cin>>n;
    
    for (int i=1;i<=n;i++){
       
        int spaces;
           
           for (spaces=1;spaces<=n-i;spaces++){
                cout<<" ";
            }
            for (int num=1;num<=2*i-1;num++){
               cout<<num<<"";
           }
           cout<<" "<<endl;

        
    }
    
    return 0;
}
