#include <iostream>
using namespace std;

double func(double i, double b);

int main() {

    double num1, num2;

    cout << "enter 2 values" << '\n';
    cin >> num1 >> num2;

    func(num1, num2);
}

double func(double i, double b){

    cout << "sum is: " << i + b << '\n';

    return i + b;

}