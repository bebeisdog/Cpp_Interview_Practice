#include<stdio.h>

int gcd(int a, int b){
    return a%b==0 ? b: gcd(b, a%b);
}

int main(){
    int a=0, b=0;
    while(scanf("%d%d", &a, &b)){
        if(gcd(a,b) == 1){
            printf("が処\n");
        }else{
            printf("ぃが処\n");
        }
    }

}