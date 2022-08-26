#include <iostream>
using namespace std;

int sumArray(int * arr, int size){
    if (size == 0){
        return 0;
    }
    return sumArray(arr+1, size-1)+arr[0];
}

int main(){
    int n, c=0;
    cin>>n;

    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
        c++;
    }

    cout<<sumArray(arr, c)<<endl;
    return 0;
}