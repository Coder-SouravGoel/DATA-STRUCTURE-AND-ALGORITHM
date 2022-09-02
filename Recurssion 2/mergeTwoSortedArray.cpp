#include <iostream>
using namespace std;

int main(){
	int n, m, i=0, j=0, k=0;

	printf("ENTER THE LENGHT OF 1ST ARRAY\n");
	cin>>n;

	int *arr = new int[n];
	int *arr1 = new int[m];
	int *arr2 = new int[n+m];
	
	printf("ENTER THE ELEMENT IN FIRST ARRAY :-\n");
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	printf("ENTER THE LENGTH OF 2ND ARRAY\n");
	cin>>m;
	
	printf("ENTER THE ELEMENT IN THE SECOND ARRAY :-\n");
	for(int j=0; j<m; j++){
		cin>>arr1[j];
	}

	while (i<n && j<m){
		if (arr[i] < arr1[j]){
			arr2[k] = arr[i];
			i++;
			k++;
		}
		else{
			arr2[k] = arr1[j];
			j++;
			k++;
		}
	}

	while (i < n){
		arr2[k] = arr[i];
		i++;
	}

	while (j < n){
		arr2[k] = arr[j];
		j++;
	}

	for (int i=0; i<n+m; i++){
		printf("%d \n",arr2[i]);
	}

	return 0;
}
