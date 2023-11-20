/* leetcode 3
Given a string s, find the length of the longest substring without repeating characters.
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring. */
#include<string>
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string s="pwwkew";
    unordered_map <char, int> map;
    int left = 0, right = 0, maxSize = 0;
    int strLen = s.size();
    while(right != strLen){
        if(!map.count(s[right])){
            map[s[right++]] = 1;
            maxSize++;
        }
        else{
            map.erase(s[left++]);
        }
    }
    cout << map.size();
    return 0;
}