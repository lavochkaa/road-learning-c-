#include <iostream>
using namespace std;

int main (){

    int total;
    int *ptr;
    int val;
    
    total = 3200;

    ptr = &total;

    val = *ptr;

    cout << "adress is " << ptr << "\n";
    cout << "value is " << val  << "\n";

    return 0;
    
}