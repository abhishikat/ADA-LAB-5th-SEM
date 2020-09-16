
//Given a linked list of size N, write a program to reverse every k nodes (where k is an input to the function) in the linked list.
//Logic Applied
//Take the linked list and its position from where to reverse and afterwards
//In this post, we have used a stack which will store the nodes of the given linked list. 
//Firstly, push the k elements of the linked list in the stack. 
//Now pop elements one by one and keep track of the previously popped node. 
//Point the next pointer of prev node to top element of stack.
//Repeat this process, until NULL is reached


#include <bits/stdc++.h> 
using namespace std; 
  
/* Link list node */
struct Node { 
    int data; 
    struct Node* next; 
}; 
  
struct Node* Reverse(struct Node* head, int k) 
{ 
    stack<Node*> mystack; 
    struct Node* current = head; 
    struct Node* prev = NULL; 
  
    while (current != NULL) { 
  
        int count = 0; 
        while (current != NULL && count < k) { 
            mystack.push(current); 
            current = current->next; 
            count++; 
        } 
  
        while (mystack.size() > 0) { 
  
            if (prev == NULL) { 
                prev = mystack.top(); 
                head = prev; 
                mystack.pop(); 
            } else { 
                prev->next = mystack.top(); 
                prev = prev->next; 
                mystack.pop(); 
            } 
        } 
    } 
  
    prev->next = NULL; 
  
    return head; 
} 
  

void push(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node =  
          (struct Node*)malloc(sizeof(struct Node)); 
  
    new_node->data = new_data; 
  
    new_node->next = (*head_ref); 
  
    (*head_ref) = new_node; 
} 
  
void printList(struct Node* node) 
{ 
    while (node != NULL) { 
        printf("%d  ", node->data); 
        node = node->next; 
    } 
} 
  
int main(void) 
{ 
    struct Node* head = NULL; 
  int item,n;

	printf("Enter the number of item to be inserted\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&item);
push(&head,item);
}
int k;
scanf("%d",&k);







  
    printf("\nGiven linked list \n"); 
    printList(head); 
    head = Reverse(head, k); 
  
    printf("\nReversed Linked list \n"); 
    printList(head); 
  
    return 0; 
} 
/**/
