class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* one = headA;

        while (one != nullptr) {
            ListNode* sec = headB;

            while (sec != nullptr) {
                if (one == sec) {
                    return one;
                }
                sec = sec->next;
            }

            one = one->next;
        }

        return nullptr;
    }
};