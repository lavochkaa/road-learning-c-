#include <iostream>
using namespace std;

void myfunc();

int main(){

    cout << "in main()" << '\n';

    myfunc();

    cout << "back in main()" << '\n';
    
    return 0;
}

void myfunc(){

    cout << "in myfunc()" << '\n';

    cout << "exit myfunc()" << '\n';

}