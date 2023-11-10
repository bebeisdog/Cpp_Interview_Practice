#include <iostream>
#include <vector>
using namespace std;



int main(){
    int numRows=0;
    cin >> numRows;
    vector <vector <int>> arr(numRows);
    
    for(int i=0 ; i<numRows; i++){
        arr[i].resize(i+1);        // �� i �C�� i+1 �Ӥ���
        arr[i][0] = arr[i][i] = 1; // �̥��̥k���O 1
        for(int j=1; j<i; j++){
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
}



// int factorial(const int n){
//     int sum = 1;
//     for(int i=1; i<=n; i++){
//         sum *= i;
//     }
//     return sum;
// }

// int Combinations(int n, int k){
//     // �զX (C_n �� k ��)
//     if (n == 0 || n == 1) return 1;
//     else
//         return factorial(n) / (factorial(k) * factorial(n-k));
// }

// int main(){
//     int numRows=0;
//     vector <vector <int>> arr;
//     cin >> numRows;
//     for(int i = 0; i<numRows; i++){
//         vector <int> temp;
//         for(int j = 0; j <= i; j++){
//             cout << Combinations(i,j) << " ";
//             // temp.push_back(Combinations(i,j));
//         }
//         cout << "\n";
//         // arr.push_back(temp);
//     }
//     return 0;
// }