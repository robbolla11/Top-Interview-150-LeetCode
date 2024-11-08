/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head || !head->next)
            return false; //vacia o un nodo

        ListNode *slow = head;     //AVANZA UNO
        ListNode *fast = head->next; //avanza 2
        
        //algortimo conejo y tortuga porque un pinche cuento provoco un algoritmo
        while (slow != fast) //mientras no esten en el mismo
        {
            if (!fast || !fast->next) //si llega al final de la linkedlist
                return false;
            slow = slow->next; //avanza 1
            fast = fast->next->next; //avanza 2
        }
        
        return true;
    }
};
