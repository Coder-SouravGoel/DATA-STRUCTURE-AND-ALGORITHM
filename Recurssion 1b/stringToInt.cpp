#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int stringToInt(char* arr,int answer=0){
    if(arr[0]=='\0'){
        return answer;
    }
    
    int character=arr[0]-48;
    answer=answer*10;
    answer=answer+character;
    return stringToInt(arr+1, answer);
    
}
int main()
{
    char s[100];
    int *ans;
    cin.getline(s, 100);

    cout << stringToInt(s);
    return 0;
}