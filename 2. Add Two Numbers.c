/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 #include <stdlib.h>
typedef struct ListNode ListNode;
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sahte = (ListNode *)malloc(sizeof(ListNode));// I have created a node to store their sums.
        ListNode * cur = sahte; // It was for itareting over loop.
        int now1 = 0;
        while(l1 != NULL || l2 != NULL || now1 != 0){ // Until both of nodes reach the end(NULL) it won't stop.
            int sum = now1;
            if(l1 != NULL){
                sum += l1 -> val;
                l1 = l1 -> next;
            }
            if(l2 != NULL){
                sum += l2 -> val;
                l2 = l2 -> next;
            }
            now1 = sum / 10; // If it is greater than 10 now1 equals to 1.
            ListNode* newNode = (ListNode *)malloc(sizeof(ListNode)); // I kept the result in a temporary newNode.
            newNode -> val = sum % 10;
            newNode -> next = NULL;
            cur -> next = newNode;
            cur = cur -> next;
        }
    return sahte -> next;
}
