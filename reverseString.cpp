#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    string s="hello";
    int left=0, right=s.size()-1;

    while(right > left){
        swap(s[left++], s[right--]);
    }

    for(int i=0; i<s.size(); i++){
        cout << s[i];
    }

    return 0;
}