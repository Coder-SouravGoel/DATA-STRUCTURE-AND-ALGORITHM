#include <iostream>
using namespace std;

int find_index(int *arr, int size, int e){
    if (size == 0){
        return -1;
    }
    if (arr[0] == e){
        return size;
    }
    else{
        return find_index(arr+1, size-1, e);
    }
}

int main(){

    int n, e;
    cin>>n>>e;

    int * arr = new int [n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<n-find_index(arr, n, e);
    return 0;
}