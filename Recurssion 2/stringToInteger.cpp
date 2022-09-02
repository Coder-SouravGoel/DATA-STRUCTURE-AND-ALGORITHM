#include <iostream>
#include <string.h>
using namespace std;

void stringToInt(char *str, int arr){
	if (str[0] == '\0'){
		return 0;
	}
	else{
		*arr = ((int)str[0])*10;
		return arr + stringToInt(str + 1, arr)
	}

}

int main(){
	char str[100];
	int arr;

	cout<<stringToInt(str, arr);

	return 0;
}
