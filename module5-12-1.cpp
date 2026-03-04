#include <iostream>
using namespace std;

void func(char* s);

int main(){

    char str[80];

    cout << "Enter a string: ";
    cin.getline(str, 80);

    cout << "reversed string: ";

    func(str);

    return 0;

}

void func (char* s) {

    if(*s){

        func(s + 1);
        s++;
    }

    else return;
    cout << *s;
}