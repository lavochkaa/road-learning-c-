#include <iostream>
using namespace std;

void call();

int main() {

    cout << "call was started !" << '\n';

    call();

    cout << "call was ended !" << '\n';

    return 0;

}

void call() {

    cout << "call waitnig..." << '\n';

    return;

    cout << "completed ! " << '\n';
}

