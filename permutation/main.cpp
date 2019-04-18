#include <iostream>

using namespace std;

void permu(char *in, int i){
      if (in[i]=='\0'){
          cout<<in<<" ";
          return ;
      }

      for (int j=i;in[j]!='\0';j++){

         swap(in[i],in[j]);
         permu(in,i+1);
         swap(in[i],in[j]);

}
 }
int main()
{
   char in [100];
   cin>>in;

permu(in,0);
    return 0;
}
