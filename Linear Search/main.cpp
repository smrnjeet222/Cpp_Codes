#include <iostream>

using namespace std;

int main()
{
    int i, n;
    cin>>n;

    int a[10];

    for(  i=0;i<n;i++){
        cin>>a[i] ;
}
      for (i=0;i<n;i++){
         cout<<a[i];
      }
              int key;
                cin>>key;
                    for (int i=1; i<=n ; i++){
                        if(key==a[i]){
                            cout <<i;
                                break;
    }
    if (i==n){
        cout<<"no. is not present";
    }
    }s
    return 0;
}
