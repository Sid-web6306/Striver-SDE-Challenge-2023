#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first==NULL && second==NULL){
        return NULL;
    }
    if(first==NULL){
        return second;
    } else if (second==NULL){
        return first;
    }
    Node<int>* head= NULL;
    Node<int>* start = first;
    Node<int>* start2 = second;
    if(start->data<=start2->data){
        head = start;
        start = start->next;
    } else {
        head = start2;
        start2 = start2->next;
    }
    Node<int>* headStart = head;
    while(start && start2){
        if(start->data<=start2->data){
            headStart->next = start;
            start = start->next;
        } else {
            headStart->next = start2;
            start2 = start2->next;
        }
        headStart = headStart->next;
    }

    while(start){
        headStart->next = start;
        start = start->next;
        headStart = headStart->next;
    }
    while(start2){
        headStart->next = start2;
        start2 = start2->next;
        headStart = headStart->next;
    }
    return head;
}
