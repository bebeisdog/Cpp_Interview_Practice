#include<iostream>
using namespace std;

int main(){
    char s[]= "0113256";
    char* p = s;

    printf("%c\n", *p++);  // 0
    printf("%c\n", *(p++)); // 1
    printf("%c\n", (*p)++); // 1
    printf("%c\n", *++p); // 3
    printf("%c\n", *(++p)); // 2
    printf("%c\n", ++*p); //  3
    printf("%c\n", ++(*p)); // 4

    return 0;
}