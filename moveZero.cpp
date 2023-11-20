/* leetcode 283. Move Zeros
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {0,1,0,3,12};
    int zeroCount = 0;
    // move all the nonzero elements advance
    for(int i=0; i < arr.size(); i++){
        if(arr[i]!=0){
            arr[zeroCount++] = arr[i];
        }
    }

    for(; zeroCount < arr.size(); zeroCount++){
        arr[zeroCount] = 0;
    }

    for(int i=0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;
}




/*  in Leetcode next code will runtime error*/
// int main(){
//     vector<int> arr = {0,1,0,3,12};
//     int nextNonZeroLoc = 0, nowLoc = 0;
//     int arrLen = arr.size();

//     while (nowLoc < arrLen-1 && nextNonZeroLoc < arrLen-1){   
//         while (!arr[nextNonZeroLoc]){nextNonZeroLoc++;}
//         if (!arr[nowLoc]){
//             swap(arr[nowLoc], arr[nextNonZeroLoc]);
//             cout << nowLoc <<  " " << nextNonZeroLoc << endl;
//             nowLoc++;
//         }        
//     }
    

//     for(int i=0; i<arrLen; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }