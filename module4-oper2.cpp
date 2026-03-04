#include <iostream>
using namespace std;

int main(){

    int *p;
    int nums;

    p = &nums;

    *p = 100;

    cout << nums << ' ';

    (*p)++;

    cout << nums << ' ';

    (*p)--;

    cout << nums << '\n';

    return 0;


}