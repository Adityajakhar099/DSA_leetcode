class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return nullptr;

        ListNode* one = head;
        ListNode* sec = head;
        ListNode* prev = nullptr;

        while (one != nullptr && one->next != nullptr) {
            prev = sec;
            sec = sec->next;
            one = one->next->next;
        }

        prev->next = sec->next;
        delete sec;

        return head;
    }
};