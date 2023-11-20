#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

vector <char> mystack;
char input[100];


void str_reverse(char* input){
    mystack.clear();
    while(*input != '\0'){ 
        mystack.push_back(*input);
        input++;
    }
    while(!mystack.empty()){
        printf("%c", mystack.back());
        mystack.pop_back();
    }
    printf("\n");
}

int main(){

    while(scanf("%s",input)){
        str_reverse(input);
    }
    return 0;
}
