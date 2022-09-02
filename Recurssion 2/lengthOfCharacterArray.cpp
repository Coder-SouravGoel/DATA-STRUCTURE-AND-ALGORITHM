#include <iostream>
using namespace std;

int size(char *s){

	if (s[0] == '\0'){
	
		return 0;
	
	}
	else{
	
		return 1 + size(s + 1);
	
	}

}

int main(){

	char s[100];
	cin>>s;

	int length = size(s);

	cout<<length;

	return 0;
}
