/*
Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

Example:

Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4

*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {

    struct ListNode* l3;
    struct ListNode* temp;
    int i=1;


    while(l1!=NULL || l2!=NULL)
    {
        struct ListNode* newnode= (struct ListNode*)malloc(sizeof(struct ListNode));

        if(l1!=NULL && l2!=NULL)
        {
            if(l1->val < l2->val)
            {
                newnode->val=l1->val;
                l1=l1->next;
            }
            else if(l2->val < l1->val)
            {
                newnode->val=l2->val;
                l2=l2->next;
            }
            else
            {
                newnode->val=l1->val;
                l1=l1->next;
            }

            newnode->next=NULL;
        }
        else
        {
            if(l1==NULL)
            {
                newnode->val=l2->val;
            }
            else
                newnode->val=l1->val;

            if(l1!=NULL)
                l1=l1->next;
            if(l2!=NULL)
                l2=l2->next;

            newnode->next=NULL;

        }


        if(i==1)
        {
            temp=newnode;
            l3=temp;
        }
        else
        {
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
        temp=l3;
        i++;


    }

    return l3;

}
