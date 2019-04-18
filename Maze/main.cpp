#include <iostream>
using namespace std;

int times =0;

bool MAZE(char maze[10][10],int  sol[][10] ,int i, int j, int m, int n){

         if (i==m && j==n ){
               times ++;
               sol[m][n]  = 1;

               //print cases
               for  (int i =0;i<=m;i++){
                  for (int j=0;j<=n;j++){
                     cout<<sol[i][j]<<" ";
                  }
                     cout<<endl;
               }
                     cout<<endl;
            return true;
      }

         if (i>m || j>n){
            return false;
         }
         if (maze[i][j] == 'X'){
            return false;
         }

         sol[i][j] = 1;
         bool rght = MAZE(maze, sol, i, j+1,m,n);
         bool down= MAZE(maze,sol,i+1,j,m,n);

         sol [i][j] =0;

         if (rght || down){
           return true;
         }
}

int main(){

         char  maze[10][10] = { "0000" ,
                                                "00X0",
                                                "X000",
                                                "00X0"
                                                };

             int sol [10][10] ={0};
             int m=4;
             int n =4;

         MAZE(maze,sol,0,0,m-1,n-1);

cout<<endl<<"No. of Possible Cases are : "<<times;
cout<<endl;cout<<endl;

    return 0;
}
