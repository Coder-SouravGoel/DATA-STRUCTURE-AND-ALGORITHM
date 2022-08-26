#include<iostream>
#include<string.h>
using namespace std;

string pi_func(string s, int size){

    if (size == 0)
    {
        return " ";
    }

    else if (s[0] == 'p' && s[1] == 'i'){
        int k=size;
        for(int i=0; i<size; i++){
            s[k] = s[i];
            k++;
        }

        s[size+5] = '\0';
        s[0] = '3';
        s[1] = '.';
        s[2] = '1';
        s[3] = '4';

        return s + pi_func(s, size-1);
    }
    else{

        return s[0] + pi_func(s, size-1);
    }
     
}

int main()
{
    string s;
    cin>>s;

    int lenght = s.length();    

    cout<<pi_func(s, lenght);
    return 0;
}