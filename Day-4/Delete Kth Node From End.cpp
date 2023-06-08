/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    // 1 2 3 4 5 6
    // k = 3
    Node *start = head;
    int len =0;
    while(start){
        start = start->next;
        len++;
    }
    //len = 6

int prevCount = 0;
if(len==K){
    head = head->next;
    return head;
}
prevCount = len-K-1; // 3
    // cout<<prevCount<<endl;
    Node *startSecond = head;
    while(prevCount--){
        // cout<<startSecond->data<<" "<<prevCount<<endl;
        startSecond = startSecond->next;
    }
    // cout<<startSecond->data<<endl;
    Node* temp = startSecond->next;
    startSecond->next = startSecond->next->next;
    temp->next = NULL;
    // delete temp;
    return head;

}
