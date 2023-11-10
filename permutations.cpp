#include <iostream>
#include <vector>
using namespace std;


void permutation(string &arr, int begin, int end, vector<vector<int>>& allPermu){
    if(begin == end){
        vector<int> temp;
        for(int i=0; i<=end; i++){
            // cout << arr[i] << " ";
            temp.push_back(arr[i]); // leetcode �榡
        }
        // cout << endl;
        allPermu.push_back(temp);   // leetcode �榡
    }else
    {   // ex: a b c d
        for(int i=begin; i<=end; i++){
            swap(arr[begin], arr[i]);       // ��է�ƦC�զX (ex: b a c d)
            permutation(arr, begin+1, end); // �T�w�e���A��᭱�~��m�� (a c d)
            swap(arr[begin], arr[i]);       // ���^�ӥH�K�᭱�~���աA���^ a b c d
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