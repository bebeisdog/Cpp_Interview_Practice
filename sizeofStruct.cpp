#include<iostream>
using namespace std;

struct A{
    int a;
    double b;
    char c;
};

struct B{
    double b;
    char c;
    int a;
};

struct C{
    int a;
    char c;
    double b;    
};

struct D
{
	char a;
	double b;
	int c;
	char d;
};

struct  E
{
        char a;
        struct  D  d;
        int  c;
};

int main(){
    /* Ref: https://www.twblogs.net/a/5b8cad052b71771883347a35 */
    A aa;
    B bb;
    C cc;
    D dd;
    E ee;
    cout << "A struct size: " << sizeof(aa) << endl;  // 24
    cout << "B struct size: " << sizeof(bb) << endl;  // 16
    cout << "C struct size: " << sizeof(cc) << endl;  // 16
    cout << "D struct size: " << sizeof(dd) << endl;  // 24
    cout << "E struct size: " << sizeof(ee) << endl;  // 40
    return 0;
}
