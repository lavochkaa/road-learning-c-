#include <iostream>
#include <cctype>
using namespace std;

void func(int* str);

int main() {

    char str[80];

    cout << "Enter a string: ";
    cin.getline(str, 80);

    func((int*)str);

    cout << "Inverted string: " << str << endl;

    return 0;
}

void func (int* str) {

    while (*str){

        if (isupper(*str)) *str = tolower(*str);
        else if (islower(*str)) *str = toupper(*str);

        str++;

    }
}