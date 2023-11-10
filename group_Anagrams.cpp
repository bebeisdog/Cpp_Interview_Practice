#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include <algorithm>

using namespace std;

int main(){
    unordered_map<string, vector<string>> hashMP;
    vector<vector<string>> ans;
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    for(const string text: strs){
        string temp = text;
        sort(temp.begin(), temp.end());
        hashMP[temp].push_back(text);
    }
    // 遍歷這個 hash map
    for (const auto& n : hashMP) {
        vector<string> temp;
        for(const string& vectorVal : n.second){ // sector 代表 hashmap 的 value
            temp.push_back(vectorVal);
        }
        ans.push_back(temp);
    }


    // 遍歷這個 hash map
    // for (const auto& n : hashMP) {
    //     cout << "name: " << n.first << " ";
    //     for(const string& vectorVal : n.second){
    //         cout << "Value: " << vectorVal << " ";
    //     }
    //     cout << "\n";
    // }

    return 0;
}