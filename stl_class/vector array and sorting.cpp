#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  vector<int> v;

  int x;

  cout << "enter the array"<<endl;
         for (int i=0; i<8; i++){
                   cin>>x;
                   v.push_back(x);
         }
         cout << v.size();
         cout<<endl;
//         for (int i=0;i<5; i++){
//            cout << v[i]<<" ";
//         }
//         cout<<endl;
   sort (v.begin(), v.begin()+8);
   for (int i=0;i<8; i++){
            cout << v[i]<<" ";
         }
         cout<< endl;
            int num=1;
            int j;
         for ( j=0; j<v.size();j++){
            if (v[j]==v[j+1]){
               num+=1;
            }
            else{
             cout << v[j];cout<< "is occuring ";cout<<  num ;cout<< "times"<<endl;
             num = 1;
            }
         }
//       cout << v[j] "is occuring " num "times";

    return 0;
}








