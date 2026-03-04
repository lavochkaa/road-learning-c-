#include <iostream>
using namespace std;

void box(int a, int b, int c);
void myfunc(int value1, int value2);

int main(){

    int n, t;

    cout << "enter value 1" << '\n';
    cin >> n;
    cout << "enter value 2" << '\n';
    cin >> t;

    box (1, 4, 5);
    box (23, 44 ,5);
    
    myfunc (t, n);

}

void box(int a, int b, int c){

    cout << "box value : " << a*b*c << '\n';

}
void myfunc(int value1, int value2){

    cout << value1 << " + " << value2 << " = " << value1 + value2 << '\n';

}