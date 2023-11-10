#include <iostream>
#include <vector>
using namespace std;


void permutation(string &arr, int begin, int end, vector<vector<int>>& allPermu){
    if(begin == end){
        vector<int> temp;
        for(int i=0; i<=end; i++){
            // cout << arr[i] << " ";
            temp.push_back(arr[i]); // leetcode 格式
        }
        // cout << endl;
        allPermu.push_back(temp);   // leetcode 格式
    }else
    {   // ex: a b c d
        for(int i=begin; i<=end; i++){
            swap(arr[begin], arr[i]);       // 對調找排列組合 (ex: b a c d)
            permutation(arr, begin+1, end); // 固定前面，把後面繼續置換 (a c d)
            swap(arr[begin], arr[i]);       // 換回來以便後面繼續對調，換回 a b c d
        }
    }
}

int main(){
    vector<vector<int>> allPermu;
    string str = "ABC";
    int endNum = str.size()-1;
    permutation(str, 0, endNum, allPermu);
    return 0;
}