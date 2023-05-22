#include <cstdlib>
#include <iostream>
#include "radix.h"

using namespace std;

int main(int argc, char *argv[]){
    radix obj;

    cout << "** Radix Sort **" << "\n\n";

    int max;
    cout << "Enter the maximum digit of elements: ";
    cin >> max;

    int arr[7]; //create an array with given number of elements
    cout << "Enter elements:" << endl;

    for(int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    cout << "Data before: ";
    obj.present(arr, 7);

    obj.sort(arr, 7, max);
    cout << "Data after Radix Sorting: ";
    obj.present(arr, 7);

    return 0;
}
