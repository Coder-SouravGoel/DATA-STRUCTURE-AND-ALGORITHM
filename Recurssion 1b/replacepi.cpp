#include <iostream>
#include <string.h>
using namespace std;

void pi_func(char *s)
{

    if (s[0] == '\0')
    {
        return;
    }

    if (s[0] == 'p' && s[1] == 'i')
    {
        s[0] = '3';
        s[1] = '.';
        for (int i = strlen(s); i > 1; i--)
        {
            s[i + 2] = s[i];
            printf("THE VALUE OF S[i] :- %c\n", s[i]);
            printf("THE VALUE OF STRLEN :- %d\n", strlen(s));
        }
        s[2] = '1';
        s[3] = '4';
    }
    return pi_func(s + 1);
}

int main()
{
    char s[100];
    cin.getline(s, 100);

    // cout<<s;

    pi_func(s);
    cout << s;
    return 0;
}