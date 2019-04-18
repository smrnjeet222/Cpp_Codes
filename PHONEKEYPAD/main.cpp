#include <iostream>

using namespace std;

char keypad[][10]={" "," " ,"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void phone_pad(char *in, char*out, int i, int j){

      if (in[i]=='\0'){
         out[j]='\0';
         cout<<out<<"  "<<endl;
         return ;
      }
      int digit = in[i] - '0';
      if (digit==1||digit==0){
         phone_pad(in,out, i+1, j);
      }
      else
      for (int k=0;keypad[digit][k]!='\0';k++){
            out[j]=keypad[digit][k];

            phone_pad(in,out,i+1,j+1);
      }

}

int main()
{
   char in[100];
   cout<< "Enter the Digits to in the Keypad :-"<<endl;
   cout<<endl;

   cin>>in;

   char out[100];

   cout<<endl;
   phone_pad(in,out,0 , 0);
 cout<<endl;

    return 0;
}
