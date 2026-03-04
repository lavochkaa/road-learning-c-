#include <iostream>
using namespace std;

int main(){
    int i;
    int nums[10];
    for (int k = 0; k <10; k++){
        i = rand() % 100;
        nums[i] = i;
        cout << nums[i] << "\n";
    }
    
    
    return 0;
}