#include <iostream>
#include <cmath>

using namespace std;

   bool ifvalid(int mat[][25], int i, int j, int n, int number){
              // check possibility for rows and column
                  for (int x=0; x<n ;x++){
                     if (mat[x][j]==number || mat[i][x]==number){
                        return false;
                     }
                  }
                  // check possibility for submatrix
                  int rn = sqrt(n);
                  int sx = (i/rn)*rn;
                  int sy = (j/rn)*rn ;
                  for (int x=sx; x<sx+rn; x++){
                     for (int y=sy; y<sy+rn; y++){
                        if (mat[x][y]==number){
                           return  false;
                        }
                     }
                  }
                  return true;
}

bool solvesudoku(int mat[][25], int i, int j, int n){
          //base case
            if (i==n) {
               // print cases
               cout<<"        ";
               for (int i=0;i<n;i++){
                  for (int j=0;j<n;j++){
                     cout<< mat[i][j]<<" ";
                  }

                  cout<<endl;
                  cout<<"        ";
               }

               return true;
            }
            //shifting to new row
            if (j==n){
               return solvesudoku(mat, i+1 , 0 , n);
            }
            //skip the given no.
            if (mat[i][j]!=0){
                  return solvesudoku(mat,i,j+1,n);
            }
            //try various nos.
            for (int number=1; number<=n;number++){
               if(ifvalid(mat, i ,j , n , number)){

                     mat[i][j] = number;

                     bool  didwesolve = solvesudoku(mat,i , j +1,n);
                        if (didwesolve==true){
                           return true;
                        }
                 }
            }
	 	           	 //backtracking
            	   	mat[i][j] =0;
            return false;

}

int main()
{  int n;
cout<<"Enter Size: ";
cin >>n;
cout<<endl;
   int mat[25][25] ;
   cout<< "Enter the grid's values :  "<<endl<<endl<<endl;

   for (int i=0; i<n;i++)
   for (int j=0;j<n;j++){
      cin>>mat[i][j];
   }
/*  eg:
          9

            8 0 0 0 0 0 0 0 0
            0 0 3 6 0 0 0 0 0
            0 7 0 0 9 0 2 0 0
            0 5 0 0 0 7 0 0 0
            0 0 0 0 4 5 7 0 0
            0 0 0 1 0 0 0 3 0
            0 0 1 0 0 0 0 6 8
            0 0 8 5 0 0 0 1 0
            0 9 0 0 0 0 4 0 0

*/
   cout<<endl;cout<<endl;cout<<endl;cout<<endl;

   solvesudoku(mat, 0, 0, n);



    return 0;
}
