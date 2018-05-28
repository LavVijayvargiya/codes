/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    if(A==NULL && B==NULL)
        return NULL;
    else if(A==NULL)
        return B;
    else if(B==NULL)
        return A;
    int a=0,b=0,ka=0,kb=0;
    while(A!=NULL){
        a += A->val*pow(10,ka);
        A = A->next;
        ka++;
    }
    while(B!=NULL){
        b += B->val*pow(10,kb);
        kb++;
        B = B->next;
    }
    int ans1 = a+b;
    ListNode* ans = NULL;
    ListNode* head;
    while(ans1>0){
        int rem = ans1%10;
        ans1 = ans1/10;
        ListNode * x = new ListNode(rem);
        if(ans==NULL){
            ans = x;
            head = ans;
        }
        else{
            ans->next = x;
            ans = x;
        }
    }
    return head;
}
