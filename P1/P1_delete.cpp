/*Program 1:
Write a program to implement the following list: An ordinary Doubly Linked List requires space for two address fields to store the addresses of previous and next nodes. A memory efficient version of Doubly Linked List can be created using only one space for address field with every node. This memory efficient Doubly Linked List is called XOR Linked List or Memory Efficient as the list uses bitwise XOR operation to save space for one address. In the XOR linked list, instead of storing actual memory addresses, every node stores the XOR of addresses of previous and next nodes.
Implement a function to insert a new node at the beginning and at the end of the list. */

#include<iostream>
#include<string>
#include<inttypes.h>

using namespace std;

class Node{
    public:
        int data;
        Node* npx;
};

Node* XOR(Node* a, Node* b){
    return (Node*) ((uintptr_t) (a) ^ (uintptr_t) (b));
}

Node* insertBeginning(Node* head, int data){
    Node* newNode = new Node();
    newNode->data = data;

    newNode->npx = head;

    if(head != NULL){
        head->npx = XOR(newNode, head->npx);
    }

    head = newNode;

    return head;
}

Node* insertEnd(Node* head, int data){
    Node* newNode = new Node();
    newNode->data = data;

    Node* curr = head;
    Node* prev = NULL;
    Node* next;

    if(curr == NULL){
        head = insertBeginning(head, data);
    }
    else{
        while(curr->npx != prev){
            next = XOR(prev, curr->npx);
            prev = curr;
            curr = next;
        }
        newNode->npx = curr;
        curr->npx = XOR(newNode, curr->npx);
    }

    return head;
}

void display(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* next;

    if(curr == NULL){
        cout<<"Empty List."<<endl;
    }   

    else{
        while(curr != NULL){
            cout<<curr->data<<" -> ";
            next = XOR(prev, curr->npx);
            prev = curr;
            curr = next;
        }
        cout<<endl;
    }
}

Node* deleteEnd(Node* head) {
  if (!head) return NULL;
  Node* prev = NULL, *curr = head, *next = XOR(prev, curr -> npx);

  while (next) {
    prev = curr;
    curr = next;
    next = XOR(prev, curr->npx);
  }

  prev -> npx = XOR(prev -> npx, curr);
  delete curr;
  return head;
}

Node* deleteBeg(Node* head) {
  if (!head) return NULL;
  Node* next = XOR(head -> npx, NULL);
  next->npx = XOR(head, next -> npx);
  delete head;
  return next;
}

int main(){
    Node* head = NULL;
    int select, value;
    bool isRunning = true;
    while(isRunning == true){
        cout<<"Select the Operation :"<<endl;
        cout<<"1 insert at beginning"<<endl;
        cout<<"2 insert at end"<<endl;
        cout<<"3 display"<<endl;
        cout<<"4 end"<<endl<<endl;
	cout<<"5 delete at beginning"<<endl;
	cout<<"6 delete at end"<<endl;
        cin>>select;
        switch(select){
            case 1:
                cout<<"Enter Value to be Inserted :"<<endl;
                cin>>value;
                head = insertBeginning(head, value);
                break;

            case 2:
                cout<<"Enter Value to be Inserted :"<<endl;
                cin>>value;
                head = insertEnd(head, value);
                break;

            case 3:
                display(head);
                break;

            case 4:
                isRunning = false;
                break;
	    case 5:
               deleteBeg(head);
                break;
            case 6:
                deleteEnd(head);
                break;

            default:
                cout<<"Error"<<endl;
        }
    }
    return 0;
}
