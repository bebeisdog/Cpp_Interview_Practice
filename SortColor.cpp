/* Leetcode 75
Ref: https://cloud.tencent.com/developer/article/1624933*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={2,0,2,1,1,0};
    int left=0, current=0, right=nums.size()-1;
    while(right>=current){
        if(nums[current] == 0){
            swap(nums[current], nums[left]);
            current++;
            left++;
        }
        else if (nums[current] == 2){
            // current begin in left, so in this swap donot add current index
            swap(nums[current], nums[right]);
            right--;
        }
        else{
            current++;
        }
    }

    for(int i=0;i<nums.size(); i++){
        cout << nums[i] << " ";
    }

    return 0;
}