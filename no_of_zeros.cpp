#include <iostream>
using namespace std;

int zeros(int i){
    if (i==0){ return 0;}

    int zero;
    zero=i%10;
   
    if (zero==0){
        return 1+ zeros(i/10);
    }

    return zeros(i/10);


}
int main() {

int i,n;
cin>>i;

cout<<zeros(i);

return 0;

}






























































































































































































































































































































































