#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char *p;
    char str[80] = "Hello World";
    p = str;

    cout << " this string is not changed " << str << '\n';

    while (*p) { 
        if(isupper(*p)){
            *p = tolower(*p);
        }
        else if (islower(*p)) {
            *p = toupper(*p);
        }
        p++;
    }
    cout << " this string was changed " << str << '\n';
    return 0;
    
}