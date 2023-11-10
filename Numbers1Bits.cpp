#include<iostream>
using namespace std;

int main(){

    uint32_t n = 000000000000000000100001011;
    int count = 0;
    while (n>0)
    {
        n = n & (n-1);
        count ++;
    }
    cout << count;
    return 0;
}
