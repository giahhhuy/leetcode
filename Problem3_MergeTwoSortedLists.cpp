// Link: https://leetcode.com/problems/merge-two-sorted-lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* res = NULL;
        ListNode* curResNode = NULL;
        if(list1==NULL)
           {
                return list2;
           }
        if(list2==NULL)
           {
                return list1;
           }
        
        while(list1 != NULL && list2 != NULL){
            ListNode* newNode = NULL;
            if(list1->val <= list2->val)
            {
                newNode = list1;
                list1 = list1->next;
            }
            else
            {
                newNode = list2;
                list2 = list2->next;
            }
            if(res == NULL)
            {
                res = newNode;
                curResNode = res;
            }
            else
            {
                curResNode->next = newNode;
                curResNode = newNode;
            }
        }
        if(list1!=NULL)
        {
            curResNode->next = list1;

        }
        if(list2!=NULL)
        {
            curResNode->next = list2;
        }
        return res;
    }
};
