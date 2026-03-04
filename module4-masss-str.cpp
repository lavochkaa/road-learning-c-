#include <iostream>
#include <cstdio>
using namespace std;

int  main(){

    int i;
    char str[80];

    char numbers[10][80] = {
        "tom", "555-444-123",
        "ron", "123-456-789",
        "danil", "сын хуйни",
        "roma", "долбаеб",
        "hitler", "卐",
    };

    cout << "enter name" << "\n";
    cin >> str;

    for (i = 0; i < 10; i++){
        if (!strcmp(str,numbers[i])){
            cout << str  << " " << "have number" << " " << numbers[i+1] << "\n";
            break;
        }
    }

    if (i == 10) cout << "error not found 403";

    return 0;

}