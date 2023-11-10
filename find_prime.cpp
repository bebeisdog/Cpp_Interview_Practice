#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int prime[1001]={0};

    for(int i=2; i<sqrt(1000);i++){
        for(int j = i*i; j<1000; j = j+i){
            prime[j] = 1;
        }
    }
    for(int i=2; i<1000; i++){
        if(prime[i] == 0){
            cout << i << " ";
        }
    }

    return 0;
}