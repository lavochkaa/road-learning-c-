#include <iostream>
#include <cctype>
using namespace std;

int main (){
    char str[80];
    int i;
    int t = 0;


    cout << "enter your string " << '\n';
    cin.getline (str,80);

    for (i = 0; str[i]; i++){
        if (isupper(str[i])) t++;
    }
    cout << "thats value is ur str " << t << '\n';

    return 0;
}