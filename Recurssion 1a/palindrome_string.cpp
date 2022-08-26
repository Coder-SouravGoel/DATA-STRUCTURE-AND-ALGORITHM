#include<iostream>
#include<string.h>
using namespace std;
bool palin(char* s, int start, int end)
{
    if (end < start){
        return true;
    }
    else if (s[start] == s[end]){
        return (palin(s, start+1, end-1));
    }
    else{
        return false;
    }
}
int main()
{
    int c=0;
    char *s = new char[sizeof(char)];

    gets(s);

    for(int i=0; s[i] != '\0'; i++){
        c++;
    }
 //   cout<<s<<endl;
 //   cout<<c<<endl;

    cout<<palin(s, 0, c-1)<<endl;
    return 0;
}