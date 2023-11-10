#include<iostream>
#include<string>
#include <map>

using namespace std;

int main(){
    map<char, int> romanToDecimal = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    string s ="XXIV";
    int temp =0, sum=0;

    for(int i=0; i<s.size() ;i++){
        if(i==s.size()-1){
            sum += romanToDecimal[s[i]];
            break;
        } 
        if(romanToDecimal[s[i]] < romanToDecimal[s[i+1]])
            sum += -romanToDecimal[s[i]];
        else
            sum += romanToDecimal[s[i]];
    }
    cout << sum;

    return 0;
}

