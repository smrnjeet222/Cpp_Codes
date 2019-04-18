#include <iostream>
using namespace std;
int main()
 {

   char ch;
   ch = cin.get();

   int x=0,y=0;

   while(ch!='\n'){

       switch(ch){
           case 'E': x++;break;
           case 'N': y++;break;
           case 'S': y--;break;
           case 'W': x--;break;
       }
    ch = cin.get();
   }
   cout << "("<<x<<","<<y<<")"<<endl;

          if (x>=0  &&  y>=0){
                 for (int i=0;i<x;i++){
                    cout<<'E';
                 }
                 for (int i=0;i<y;i++){
                     cout<<'N';
                 }
                 return 0;
}
          if(x>=0  &&  y<=0){
            for (int i=0;i<x;i++){
                cout<<'E';
            }
             for (int i=0;i>y;i--){
                     cout<<'S';
                 }
                 return 0;
}

            if (x<=0  &&  y>=0){
                 for (int i=0;i<y;i++){
                     cout<<'N';
                 }
                 for (int i=0;i>x;i--){
                    cout<<'W';
                 }
                 return 0;

}
              if (x<=0  &&  y<=0){
                  for (int i=0;i<y;i--){
                     cout<<'S';
                 }
                 for (int i=0;i>x;i--){
                    cout<<'W';
                 }

}
return 0;
}
