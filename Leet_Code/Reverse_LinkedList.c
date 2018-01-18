/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {

    struct  ListNode* prev = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct  ListNode* current = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct  ListNode* nextnode = (struct ListNode*)malloc(sizeof(struct ListNode));

    prev=NULL;
    current =head;

    if(head==NULL || head->next==NULL)
        return head;


    while(current!=NULL )
    {
        nextnode = current->next;
        current->next = prev;
        prev= current;
        current=nextnode;
    }


    return prev;

}
