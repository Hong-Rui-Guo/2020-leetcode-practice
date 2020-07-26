/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
        struct ListNode* output = (struct ListNode*) malloc (sizeof(struct ListNode));
        struct ListNode* p = (struct ListNode*) malloc (sizeof(struct ListNode));
        struct ListNode* list1 = (struct ListNode*) malloc (sizeof(struct ListNode));
        struct ListNode* list2 = (struct ListNode*) malloc (sizeof(struct ListNode));
        //bool list1_finish_check = false;
        //bool list2_finish_check = false;

        p = output;
        list1 = l1;
        list2 = l2;

        if(list1 != NULL || list2 != NULL)
        {
            if(list1 == NULL)
            {
                p->val = list2->val;
                list2 = list2->next;
            }
            else if(list2 == NULL)
            {
                p->val = list1->val;
                list1 = list1->next;
            }
            else
            {
                if(list1->val <= list2->val)
                {
                    p->val = list1->val;
                    list1 = list1->next;
                }
                else
                {
                    p->val = list2->val; 
                    list2 = list2->next;                   
                }
            }
            printf("value:%d\n",p->val);
        }
        else
        {
            output = NULL;
            return output;
        }
        



        while(list1 != NULL || list2 != NULL)
        {
            printf("list1:%p\n",list1);
            printf("list2:%p\n",list2);

            struct ListNode* q = (struct ListNode*) malloc (sizeof(struct ListNode));

            if(list1 == NULL)
            {
                printf("list1 finish\n");
                q->val = list2->val;
                list2 = list2->next;   
            }
            else if(list2 == NULL)
            {
                q->val = list1->val;
                list1 = list1->next;   
                printf("list2 finish\n");
            }
            else
            {
                if(list1->val <= list2->val)
                {
                    q->val = list1->val;
                    list1 = list1->next;   
                }
                else
                {
                    q->val = list2->val; 
                    list2 = list2->next;   
                }
            }

            p->next = q;
            p = p->next;
            printf("%d\n",p->val);

        }

        p->next = NULL;
        //free(q);
        printf("list1:%p\n",list1);
        printf("list2:%p\n",list2);
        printf("output->val:%d\n",output->val);
        printf("output:%p\n",output);
        return output;
}
