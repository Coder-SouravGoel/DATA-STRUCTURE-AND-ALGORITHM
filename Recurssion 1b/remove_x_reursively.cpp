#include<iostream>
#include<string.h>
using namespace std;

string remove_char(string s, char s1, int c){
    if (c == 0){
        return " ";
    }
    if (s[0] != s1){
        return s[0] + remove_char(s.substr(1), s1, c-1);
    }
    else{
        return remove_char(s.substr(1), s1, c-1);
    }
}
int main()
{
    int c=0;

    string s;
    cin>>s;

    char s1;
    cin>>s1;

    for(int i=0; s[i] != '\0'; i++){
        c++;
    }

    cout<<remove_char(s, s1, c);
    return 0;
}