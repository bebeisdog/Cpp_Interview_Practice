/*
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Input: n = 1
Output: ["()"]
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;


void deal(string arr, int leftNum, int rightNum, vector<string>& allParent){
    if(!leftNum && !rightNum){
        allParent.push_back(arr);
        return;
    }

    if(leftNum == rightNum){
        arr.push_back('(');
        deal(arr, leftNum-1, rightNum, allParent);
    }
    else if(leftNum == 0){
        arr.push_back(')');
        deal(arr, leftNum, rightNum-1, allParent);
    }
    else{
        string arr1 = arr;
        string arr2 = arr;
        arr1.push_back('(');
        deal(arr1, leftNum-1, rightNum, allParent);
        arr2.push_back(')');
        deal(arr2, leftNum, rightNum-1, allParent);
    }
}

int main(){
    int n = 0;
    cin >> n;
    int leftNum = n, rightNum = n;
    string arr;
    vector<string> allParent;

    deal(arr, leftNum, rightNum, allParent);
    
    for(auto i: allParent){
        cout << i << " ";
    }


    return 0;
}

