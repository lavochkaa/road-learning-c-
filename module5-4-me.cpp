#include <iostream> 
using namespace std;

void func(int a, int b, int c);

int main() {

    int num1, num2, num3;

    cout << "enter thee numbers :" << '\n';
    cin >> num1 >> num2 >> num3;

    func(num1, num2, num3);

}

void func(int a, int b, int c) {

    cout << "summation is :" << a + b + c << '\n';

}

