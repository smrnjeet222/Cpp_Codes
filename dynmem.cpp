#include <iostream>
using namespace std;

void printArray(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int *createArray(){
    //Static Allocation
    //int a[] = {1,2,3,4,5};
    int *a = new int[5];
    for(int i=0;i<5;i++){
        a[i] = i*i;
    }

    printArray(a,5);
    cout<<a<<endl;
    return a;
}


int main() {
    int *b = createArray();
    cout<<b<<endl;
     printArray(b,5);

}
