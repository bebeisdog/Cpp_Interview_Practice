// �U������ֳt�g�k //
#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    stack <int> stk;
    string s = ")";
    char check ;
    for(int i=0; i<s.length();i++){
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stk.push(s[i]);
        }else{
            if(stk.empty()){stk.push(s[i]);}
            check = stk.top();
            if ((check == '(' && s[i] == ')') || (check == '[' && s[i] == ']') || (check == '{' && s[i] == '}')) {
                stk.pop();
                continue;
            }
            else{
                break;
            }
        }
    }
    if(stk.empty()){
        cout << "true";
    }else{
        cout << "false";
    }


    return 0;
}



/// ��ֳt���g�k ///

// stack <char> stk;
// for(char check: s){
//     if (check == '[' || check == '{' || check == '('){
//         stk.push(check);
//     }else{
//         if(stk.empty() ||
//             (check ==')' && stk.top() != '(') ||
//             (check ==']' && stk.top() != '[') ||
//             (check =='}' && stk.top() != '{') ){
//                 return false;
//             }
//         stk.pop();
//     }
// }
// return stk.empty();
    