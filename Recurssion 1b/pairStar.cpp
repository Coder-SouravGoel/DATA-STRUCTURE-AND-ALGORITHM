#include<iostream>
#include<string.h>
using namespace std;

void pairstar(char *s){

    if (s[0] == '\0'){
        return ;
    }

    if (s[0] == s[1]){
        s[1] = '*';

        for(int i = strlen(s); i>1 ; i--){

            s[i+1] = s[i];
        }
        s[2] = s[0];
    }
    return pairstar(s+1);

}
int main()
{
    char s[50];
    cin.getline(s, 50);

    pairstar(s);

    cout<<s;
    return 0;
}