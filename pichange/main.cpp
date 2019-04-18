#include<iostream>

using namespace std;

string pie_change(string in ,int i){

       if (i==10){
       cout  << in;
       return in;
       }
      int j=in.find("pi");
     if( j<=in.length()){
       in.replace(j,2,"3.14 ");
       }
      return pie_change(in,i+1);
}
int main()
{
      string in;
      cin>>in;
 cout<<endl;cout<<endl;cout<<endl;
      pie_change(in,0);
      cout<<endl;cout<<endl;cout<<endl;

return 0;
}
