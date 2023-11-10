// ����x�} 90�סA�����B�~���x�}�N��s�_��
#include<iostream>
#include<vector>

using namespace std;

void rotate(vector<vector<int>>& matrix){
    int n = matrix.size(); // 3x3 ==> 3
    // 1. �﨤�u�洫
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){  // �קK���ƥ洫
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // 2. column �洫
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