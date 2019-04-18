#include <iostream>
using namespace std;

bool possible(int grid[][20],int i, int j, int n){
         for (int row =0 ; row<i;row++){
           if( grid [row][j]==1){
            return false;
           }
         }
         int x=i;    int y= j;
         while (x>=0 && y>=0){
            if (grid[x][y] == 1){
               return false;
            }
            x--;      y--;
         }
         x=i ;     y=j;
          while (x>=0 && y<n){
            if (grid[x][y] == 1){
               return false;
            }
            x--;       y++;
         }
   return true;
}

bool solve(int grid[][20],int i,int n){
      if (i==n) {
         ///print cases

         for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
               if (grid[i][j]==1){
                  cout<<" Q ";
               }else{
               cout<<" . ";
               }
            }
            cout<<endl;cout<<endl;
         }
         cout<<endl; cout<<endl;cout<<endl;
      return false;

      //for all cases return true
      }

      for (int j=0;j<n;j++){
           if( possible(grid,i, j ,n)){
           grid [i][j]=1;

          bool nextistrue = solve(grid, i+1,n);
          if (nextistrue){
          return true;
          }
         grid [i][j] =0;
       }
   }
    return false;
}

int main()
{
   int n;
   cin>>n;

   int grid[20][20]={0};
   solve(grid,0 , n);

    return 0;
}
