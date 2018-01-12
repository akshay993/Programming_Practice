/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.

*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

      int value;
      struct  ListNode* l3;
      struct ListNode* temp;
      int r=0;
      int i=1;
      temp=l3;

        while(l1!=NULL || l2!=NULL)
        {
            if(l1==NULL)
               value=l2->val;
            else if(l2==NULL)
                value=l1->val;
            else
                value=l1->val+l2->val;

           struct ListNode* newnode= (struct ListNode*)malloc(sizeof(struct ListNode));

            if(value+r>9)
            {
                value=value%10;
                if(value+r>9)
                {
                    value=(value+r)%2;
                    newnode->val=value;
                }
                else
                 newnode->val=value+r;
                r=1;
            }
            else
            {
                newnode->val=value+r;
                r=0;
            }

            newnode->next=NULL;

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

            if(l1!=NULL)
                l1=l1->next;
            if(l2!=NULL)
                l2=l2->next;
            i++;
            value=0;

            if(l1==NULL && l2==NULL)
            {
                if(r==1)
                {
                    struct ListNode* newnode= (struct ListNode*)malloc(sizeof(struct ListNode));
                    newnode->val=r;
                    newnode->next=NULL;

                    while(temp->next!=NULL)
                    {
                    temp=temp->next;
                    }

                    temp->next=newnode;

                }

            }


        }

            return l3;

        }
