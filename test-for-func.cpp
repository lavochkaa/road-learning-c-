#include <iostream>
using namespace std;

void func (int a, int b, int c);

int main(){

    cout << "enter 3 elements: ";
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    func(num1, num2, num3);

    return 0;

}

void func (int a, int b, int c){

    cout << "the sum is: " << a + b + c << '\n';
    cout << "the product is: " << a * b * c << '\n';
    cout << "the average is: " << (a + b + c) / 3.0 << '\n';

}