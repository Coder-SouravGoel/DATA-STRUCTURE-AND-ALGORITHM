#include <iostream>
using namespace std;

bool isSorted(int *arr, int size){
    if (size == 0 || size == 1){
        return true;
    }
    else if (arr[0] > arr[1]){
        return false;
    }
    else{
        return isSorted(arr+1, size-1);
    }
}

int main(){
    int n, c=0;
    cin>>n;

    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
        c++;
    }

    cout<<isSorted(arr, c)<<endl;
    return 0;
}