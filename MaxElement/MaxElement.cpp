// MaxElement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::endl;

#include <vector>

int main()
{
    std::cout << "Max Element!\n";

    signed int arr[] = { 4, 500, 242, 11, 1000000, 999, 22, 51, 3, 17, 2400, 2042 };

    //int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int size = sizeof(arr)/sizeof(int);
    
    int max = -1;

    int n = 10;

    vector<int> vect(n, 10);

    for (int i = 0; i < size; i++) {
        cout << "arr[i]: " << arr[i] << endl;
        if (arr[i] > max) {
            max = arr[i];
            cout << "max: " << max << endl;
        }

    }

    cout << "The largest element in the array is " << max << "." << endl;
}