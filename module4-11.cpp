#include <iostream>
#include <cctype>
using namespace std;

int main(){

    int i;
    char str[80];
    
    cout << "enter string" << '\n';
    cin.getline(str,80);

    cout << "started string is '" << str << "'"<< '\n' << '\n';

    for (i= 0; str[i]; i++){
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }

    
    cout << "changed string is '" << str << "'" << '\n';
    
    return 0;
}