#include <iostream>
using namespace std;

void func1();
void func2();


int main(){

    int i, count;

    for (i =0; i <3; i++){
        count = i + 1;
        
        cout << "try num: " << count << '\n';
        cout << '\n';


        func1();

    }
}

void func1(){

    int count = 5;
    cout << "this is function 1" << '\n';

    cout << "count in func1 is: " << count << '\n';
    cout << '\n';

    func2();

}


void func2(){

    int count = 0;
    cout << "this is function 2" << '\n';

    for (count = 0; count < 3; count++){
        cout << ".";
    }

    cout << "count in func2 is: " << count << '\n';
    cout << '\n';

}