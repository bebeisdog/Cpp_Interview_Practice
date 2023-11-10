// 旋轉矩陣 90度，不用額外的矩陣將其存起來
#include<iostream>
#include<vector>

using namespace std;

void rotate(vector<vector<int>>& matrix){
    int n = matrix.size(); // 3x3 ==> 3
    // 1. 對角線交換
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){  // 避免重複交換
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // 2. column 交換
    for(int k=0;k<n; k++){
        int left=0, right = matrix.size()-1;
        while(right > left)
            swap(matrix[k][left++], matrix[k][right--]);
    }

}

int main(){

    vector<vector<int>> matrix = {{1,2,3},
                                  {4,5,6},
                                  {7,8,9}};

    rotate(matrix);


    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix.size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}