/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */

Node* merge(Node* head1, Node* head2)

{

    if(head1 == nullptr)

    {

        return head2;

    }

    if(head2 == nullptr)

    {

        return head1;

    }

 

    Node* ans = nullptr;

 

    if(head1->data <= head2->data)

    {

        ans = head1;

        ans->child = merge(head1->child , head2);

    }

    else

    {

        ans = head2;

        ans->child = merge(head1,head2->child);

    }

 

    return ans;

}

 

Node* flattenLinkedList(Node* head)

{

    if(head==nullptr || head->next == nullptr)

    {

        return head;

    }

 

          Node *newLL = flattenLinkedList(head->next);

 

          head->next = nullptr;

 

          Node *newHead = merge(newLL, head);

        

 

        return newHead;

}

