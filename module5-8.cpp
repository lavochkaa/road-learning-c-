#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

void invert (char *str);

int main() {

    char str[80];

    cout << "Enter a string: ";
    cin.getline(str, 80);

    invert(str);

    cout << "Inverted string: " << str << endl;

    return 0;

}

void invert (char *str) {

    while (*str){
        if (isupper(*str)) *str = tolower(*str);
        else if (islower(*str)) *str = toupper(*str);

        str++;

    }

}

// I HATE NEGGE