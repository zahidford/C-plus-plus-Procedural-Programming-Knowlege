#include <iostream>
#include <cctype>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    char str[80] {"Dark Silence"};
    strcpy (str, " Hello ");
    strcat(str, "there");
    cout << strlen(str);
    strcmp(str, "Another");
    
    
    return 0;
}