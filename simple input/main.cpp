#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n;

        int arr [100];
        for (int i=0;i<n; i++){
            cin>>  arr[i];
    }
        int sum=0;
        for (int i=0;i<n ;i++){
            sum += arr[i];

            if (sum <=0){
                break;
            }
                cout << arr[i] << " ";
        }

    return 0;
}
