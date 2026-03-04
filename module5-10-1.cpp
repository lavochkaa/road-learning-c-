#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {

    double a, b;

    if (argc != 3){
        cout << "Usage: " << argv[0] << " <string>" << endl;
        return 1;
    }

    a = atof(argv[1]);
    b = atof(argv[2]);

    cout << "num1 + num2 = " << a + b << '\n';

}