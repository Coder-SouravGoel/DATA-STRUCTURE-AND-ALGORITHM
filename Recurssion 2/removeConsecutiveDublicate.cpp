#include <iostream>
#include <string.h>
using namespace std;

void removeConsecutive(char* str){
	if (str[0] == '\0'){
		return ;
	}
	else if (str[0] == str[1]){
		for (int i=1; i<=strlen(str); i++){
			str[i-1] = str[i];
		}
		return removeConsecutive(str+1);
	}
	else{
		return removeConsecutive(str+1);
	}
}

int main(){
	char str[100];
	cin >> str;

	removeConsecutive(str);

	cout << str;
	return 0;
}


