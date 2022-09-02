#include <iostream>
#include <string.h>

using namespace std;

void remove(char *c, char *r){

    if (c[0] == '\0'){
        return ;
    }

    if (c[0] != r){
        return remove(c+1, r)
    }

    for(int i=0; i<strlen(c); i++)
    {
        s[i] = s[i+1];
    }

}

int main(){

    char *c[50];
    cin>>c;
    char* r;
    cin>>r;

    remove(c, r);

    cout<<c;
    return 0;
}