#include <iostream>
using namespace std;

bool isMultipleOf3(int n) {
    if (n == 0 || n == 3)
        return true;
    if (n < 3)
        return false;

    int Count = 0;

    while (n != 0) {
        if (n & 1)
            Count++;
        n >>= 1;  // Right shift by one bit
        if (n & 1)
            Count+=2;
        n >>= 1;  // Right shift by one bit
    }

    return isMultipleOf3(Count - 3);
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (isMultipleOf3(num))
        cout << num << " is a multiple of 3." << endl;
    else
        cout << num << " is not a multiple of 3." << endl;

    return 0;
}