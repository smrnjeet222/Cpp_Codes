#include <iostream>

using namespace std;

void sseq(char *in , char *out, int i, int j){

         if (in[i]=='\0'){
            out[j]='\0';
            cout<<out<<" ";
            return;
         }

         out[j]=in[i];
         sseq(in , out , i+1,j+1);
        out[j]='\0';
         sseq(in,out,i+1,j);

}

int main()
{
cout<<endl;cout<<endl;
    char in[100];
    cin>>in;
cout<<endl;cout<<endl;
    char out[100];
    sseq(in, out , 0, 0);
cout<<endl;cout<<endl;
    return 0;
}
