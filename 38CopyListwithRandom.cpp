#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

void insertAtTail(LinkedListNode<int> *&head, LinkedListNode<int> *&tail, int value)

{

    LinkedListNode<int> *newNode=new LinkedListNode<int>(value);

    if(head==NULL)

    {

        head=newNode;

        tail=newNode;

    }

    else{

        tail->next=newNode;

        tail=newNode;

    }

}

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)

{

    if(head==NULL)

    {

        return head;

    }

    LinkedListNode<int> *cloneHead=NULL;

    LinkedListNode<int> *cloneTail=NULL;

    LinkedListNode<int> *temp=head;

    while(temp)

    {

        insertAtTail(cloneHead, cloneTail, temp->data);

        temp=temp->next;

    }

    LinkedListNode<int> *originalNode=head;

    LinkedListNode<int> *cloneNode=cloneHead;

    while(originalNode && cloneNode)

    {

        LinkedListNode<int> *forward1=originalNode->next;

        originalNode->next=cloneNode;

        originalNode=forward1;

        LinkedListNode<int> *forward2=cloneNode->next;

        cloneNode->next=originalNode;

        cloneNode=forward2;

    }

    temp=head;

    cloneNode=cloneHead;

    while(temp)

    {

        if(temp->next!=NULL)

        {

            if(temp->random!=NULL)

            {   

                temp->next->random=temp->random->next;

            }

            else

            {

                temp->next->random=temp->random;

            }

            temp=temp->next->next;

        }

    }

    originalNode=head;

    cloneNode=cloneHead;

    while(originalNode && cloneNode)

    {

        originalNode->next=cloneNode->next;

        originalNode=originalNode->next;

        if(originalNode!=NULL)

        {

            cloneNode->next=originalNode->next;

            cloneNode=cloneNode->next;

        }

    }

    return cloneHead;

}
