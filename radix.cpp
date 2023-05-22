#include "radix.h"
#include <iostream>
#include<list>
#include<cmath>

using namespace std;

radix::radix() {
}

radix::radix(const radix& orig) {
}

radix::~radix() {
}

/**
 * Receiving as parameters the array, the number of elements (optional) and the maximum number of digits for each element.
*/
int* radix::sort(int *arr, int n, int max){
    int i, j, m, p = 1, index, temp, count = 0; // Auxiliary variables
    list<int> pocket[10]; // Defining a linked list to work with decimal numbers
    for(i = 0; i < max; i++) {
        /**
         * Two of the auxiliary variables are used to calculate the result of one number raised to another (a simple power 
         * calculation to work with the remaining digits).
        */
        m = pow(10, i+1);
        p = pow(10, i);

        for(j = 0; j<n; j++) {
            temp = arr[j]%m;
            index = temp/p;
            pocket[index].push_back(arr[j]);
        }

        count = 0;

        // Transferring items from linked list to array
        for(j = 0; j<10; j++) {
            while(!pocket[j].empty()) {
                arr[count] = *(pocket[j].begin());
                pocket[j].erase(pocket[j].begin());
                count++;
            }
        }
    }

    return arr;
}

void radix::present(int *array, int size){
    for(int i = 0; i<size; i++)
        cout << array[i] << " ";
    
    cout << endl;
}