#include <iostream>
#include <string.h>
using namespace std;

void replace (char *str, char a, char b){

	if (str[0] == '\0'){
		return;
	}
	else if (str[0] != a){
		return 	replace(str+1, a, b);
	}
	else{
		str[0] = b;
		//for(int i=1; i<=strlen(str); i++){
		//	str[i-1] = str[i];
		//}
		//str[0] = b;
		return replace(str+1, a, b);
	}

}

int main(){
	char str[50];
	char a, b;
	cin >> str;
	cin >> a >> b;

	replace(str, a, b);

	cout << str;

return 0;
}
