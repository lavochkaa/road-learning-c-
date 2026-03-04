#include <iostream>
using namespace std;

void rever(char* s, int i = 0, int maxstr = 10);
void error(){
    cout << "time out" <<'\n';
}

int main() {
    cout << "Enter value to reverse:\n";
    char str[80];
    cin.getline(str, 80);

    rever(str);
    return 0;
}

void rever(char* s, int i, int maxstr) { 
    if (i >= maxstr) return ;
    if (*s == '\0') return;

    rever(s + 1, i + 1, maxstr);
    if (i >= maxstr) return error();
    cout << *s;
    
}
