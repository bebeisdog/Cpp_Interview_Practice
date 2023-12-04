#include <iostream>
using namespace std;

bool ispow2(int n){
    return (n & -n)  == n;
}

int main(){
    int num = 1, ans = 0;
    ans = ispow2(num);
    cout << ans ;
    return 0;
}
