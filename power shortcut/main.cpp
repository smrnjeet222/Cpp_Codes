#include <iostream>

using namespace std;

int pow(int a,int b){

if (b==1)
    return a;

int ans = pow(a,b/2);

if (b%2==1)
    return a*ans*ans;
else
    return ans*ans;

}

int main()
{
    cout<<pow(2,6);

    return 0;
}
