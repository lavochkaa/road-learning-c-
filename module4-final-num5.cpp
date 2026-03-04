#include <iostream>
#include <cctype>
using namespace std;

int main (){
    char str1[80];
    char str2[80];
    char *p1,*p2;

    cout << "enter the first string" << '\n';
    cin.getline(str1,80);

    cout << "enter the second string" << '\n';
    cin.getline(str2,80);

    p1 = str1;
    p2 = str2;

    while (*p1 && *p2){
        if (tolower(*p1) != tolower(*p2)) break;
        else {
            p1++;
            p2++;

            cout << p1 << "\n";
            cout << p2 << "\n";
        }
    }
    
    if (!*p1 && !*p2){
        cout << "string "<< "' " << str1 <<" '" << " are the same for " <<"' " << str2 << " '" << '\n';
    }

    else{
        cout << "this strings not the same" << '\n';
    }
    return 0;
    
}
