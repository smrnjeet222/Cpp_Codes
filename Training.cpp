#include <iostream>
#include <algorithm>



using namespace std;

int main()
{
    int test_case;
    cin>>test_case;
    while (test_case--){
        int n,p;
        cin>>n>>p;

        int skills[n];
        for(int i=0 ; i<n ;++i){
            cin>>skills[i];
        }
        sort (skills, skills + n);
        unsigned int min=99999999999;
        int x,y;
    for (int i=0; i <n; i++) { 
      for (int j=i+1 ; j<n; j++){ 
             int guess = skills[j+p-2] - skills[i];
             if (guess <= min) {
                 min=guess;
                 x=i;
                 y=j+p-2;
             }  
            
        } 
    } 
    int filtered[p];
    int it=0;
 for (int k=x; k<=y ;k++){
            filtered[it]=skills[k];    
            it++;
    } 
   
      for(int i=0 ; i<p ;++i){
           cout<<filtered[i]<<" ";
      }
        int max=filtered[p-1];
       cout<<endl<<endl;
        int sum=0;
       for(int i=0 ; i<p ;++i){
           int hour = max - filtered[i];
           sum += hour;
        }

      cout << sum <<endl;


    }
    return 0;
}
