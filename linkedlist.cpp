#include <iostream>

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x): val(x), next(nullptr) {}
};

class LinkedList
{
    public:
        ListNode *head;

        LinkedList(): head(nullptr) {}

        void Append(int x)
        {
            ListNode *temp = new ListNode(x);
            ListNode *trav = head;

            if(trav == NULL)
            {
                head = temp;
            }
            else{
                while(trav->next != NULL)
                {
                    trav = trav->next;
                }
                trav->next = temp;
            }
        }

        void InsertFront(int x)
        {
            ListNode *temp = new ListNode(x);

            temp->next = head;
            head = temp;
        }


        void display()
        {
            ListNode *trav= head;
            while(trav != NULL)
            {
                std::cout << trav->val << std::endl;
                trav = trav->next;
            }
        }

        void deletelist()
        {
            delete head;
        }
};


int main()
{
    LinkedList lst;

    for(int i = 0; i < 6; i++)
    {
        lst.InsertFront(i + 1);
    }

    lst.display();

    lst.deletelist();
}