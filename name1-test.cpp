#include <iostream>
using namespace std;


int main() {
    int sum = 0;
    int fact = 1;

    for (int i = 1; i <= 10; ++i) {
        sum += 2;
        fact *= i;
    }
    
    cout << "sum is " << sum << "\n";
    
    cout << "factorial is " << fact << "\n";

    return 0;
}