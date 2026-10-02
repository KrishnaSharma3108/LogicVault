class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy = new ListNode(0);

        ListNode* current = head;

        while (current != NULL) {
            ListNode* nextNode = current->next;

            ListNode* prev = dummy;

            while (prev->next != NULL && prev->next->val < current->val) {
                prev = prev->next;
            }

            current->next = prev->next;
            prev->next = current;

            current = nextNode;
        }

        return dummy->next;
    }
};




class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if (head == NULL || head->next == NULL || k == 0)
            return head;

        // Find length and last node
        int length = 1;
        ListNode* last = head;

        while (last->next != NULL) {
            last = last->next;
            length++;
        }

        // Reduce unnecessary rotations
        k = k % length;

        if (k == 0)
            return head;

        // Make circular list
        last->next = head;

        // Find new last node
        int steps = length - k;
        ListNode* newLast = head;

        for (int i = 1; i < steps; i++) {
            newLast = newLast->next;
        }

        // New head
        ListNode* newHead = newLast->next;

        // Break the circle
        newLast->next = NULL;

        return newHead;
    }
};