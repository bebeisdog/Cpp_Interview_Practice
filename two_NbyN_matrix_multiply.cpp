#include<iostream>

using namespace std;

int a[3][3] = {1,1,1,
               1,1,1,
               1,1,1};

int b[3][3] = {1,2,3,
               4,5,6,
               7,8,9};

int main(){

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int temp =0;
            for(int k=0; k<3; k++){
                temp += a[i][k] * b[k][j] ;
            }
            cout << temp << " ";
        }
        cout << "\n";
    }

    return 0;
}
