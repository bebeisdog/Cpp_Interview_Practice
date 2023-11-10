#include<iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x),  next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
            return list2;
        if(list2 == NULL)
            return list1;

        ListNode* firstPtr = list1;
        if ((list1 -> val) > (list2 -> val))
        {
            firstPtr = list2;
            list2    = list2 -> next;
        }
        else
        {
            list1  = list1 -> next;
        }

        ListNode* tempCurrPtr = firstPtr;
        while(list1 && list2){
            if ((list1 -> val) > (list2 -> val))
            {
                tempCurrPtr -> next = list2;
                list2 = list2 -> next;
            }
            else
            {
                tempCurrPtr -> next = list1;
                list1 = list1 -> next;
            }
            tempCurrPtr = tempCurrPtr -> next;
        }

        if(!list1)
        {
            tempCurrPtr -> next = list2;
        }
        else
        {
            tempCurrPtr -> next = list1;
        }
    return firstPtr;
    }
};


