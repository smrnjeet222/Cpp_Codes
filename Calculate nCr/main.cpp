#include <iostream>

using namespace std;
int factr(int n){
     int f=1;
    for (int num=1;num<=n;++num){
        f=f*num;
}
      return f;
}

int main(){
    int n,r;
    cin>>n>>r;
     int valn =factr(n);
     int valr=factr(r);
     int valnr=factr(n-r);

     int  value=valn/(valr*valnr);
     cout<< value;

    return 0;
}
