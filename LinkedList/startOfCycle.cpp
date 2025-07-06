class solution
{
public:
    ListNode *startNode(ListNode *head)
    {
        ListNOde *slow = head, fast = head;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                slow = head;
                while (slow != fast)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow; // start of cycle
            }
        }
        return nullptr;
    }
}