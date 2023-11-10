#include<iostream>
#include<vector>
using namespace std;

int main(){
    int num = 0;
    int n   = 3; // 設定幾進制
    cin >> num;
    vector<int> myarr;

    while (num != 0)
    {
        myarr.push_back(num%n);
        num /= n;
    }
    
    while(myarr.empty() != true){
        cout << myarr.back();
        myarr.pop_back();    
    }
    

    return 0 ;
}