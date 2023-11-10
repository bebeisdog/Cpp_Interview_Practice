#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> nums = {-1, -2, -3, -4, -5};
    vector<int> outPut;
    int target = -8;
    int remain = 0;
    
    for(int idx=0; idx<nums.size(); idx++){
        remain = target - nums[idx];
        for (int jdx = nums.size()-1; jdx > idx; jdx--){
            if (remain != nums[jdx]){
                continue;
            }
            outPut.push_back(idx);
            outPut.push_back(jdx);
            break;
        }
        
    }
    cout << outPut[0] << " " << outPut[1];
    return 0;
}