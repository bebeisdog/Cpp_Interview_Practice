#include<iostream>
using namespace std;

int main(){
    uint32_t n = 1100;
    uint32_t ans = 0;
    int bitcount = 31;
    while(n>0){
        ans |= (n & 1) << bitcount ;
        n >>= 1;
        bitcount --;
    }
    cout << ans;
    return 0;
}
