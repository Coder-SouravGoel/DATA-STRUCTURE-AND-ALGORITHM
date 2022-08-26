#include <iostream>
using namespace std;

bool find(int * arr, int e, int n){
    if(n == 0){
        return false;
    }   
    if(arr[0] == e){
        return true;
    }
    else{
        return find(arr+1, e, n-1);
    }
}

int main(){

    int e, n;
    cin>>e>>n;

    int* arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<find(arr, e, n);
    return 0;
}