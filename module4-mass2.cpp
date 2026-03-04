#include <iostream>
using namespace std;

int main(){

    int nums[10];
    int a, b, t;

    int size = 10;

    for (t = 0; t < size; t++) {
        nums [t] = rand() % 100;
    }

    cout << "thats the unsorted array \n";
    for (t = 0; t < size; t++) {
        cout << nums[t] << " ";
    }
    
    for (a = 0; a < size - 1; a++) {
        for (b = size - 1; b >= a ; b--) {
            if (nums[b-1] > nums[b]){

                t = nums[b-1];
                nums[b-1] = nums[b];
                nums[b] = t; 
            }
        }
    }
    cout << "\n";
    cout << "thats the sorted array \n";
    for (t = 0; t < size; t++) {
        cout << nums[t] << " ";
    }

    return 0;
}