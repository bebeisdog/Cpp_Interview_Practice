#include<iostream>

using namespace std;

struct temp{
    int x;
    double y;
} GG;

int main(){

    // struct temp GG;

    GG.x = 1;
    GG.y = 22.22;

    cout << GG.x << endl;
    cout << GG.y << endl;

    return 0;
}