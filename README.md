# Advance Data Structure Lab Programs
## Program 1:
Write a program to implement the following list: An ordinary Doubly Linked List requires space for two address fields to store the addresses of previous and next nodes. A memory efficient version of Doubly Linked List can be created using only one space for address field with every node. This memory efficient Doubly Linked List is called XOR Linked List or Memory Efficient as the list uses bitwise XOR operation to save space for one address. In the XOR linked list, instead of storing actual memory addresses, every node stores the XOR of addresses of previous and next nodes.
Implement a function to insert a new node at the beginning and at the end of the list. 
## Program 2:
Write a program to perform insertion, deletion and searching operations on a skip list.
consider the maximum number of levels to be log n where 'n' is the number of nodes in the list
## Program 3:
Given a boolean 2D matrix, find the number of islands. A group of connected 1's forms an island. 
For example, the below matrix contains 5 islands
{1, 1, 0, 0, 0}, {0, 1, 0, 0, 1}, {1, 0, 0, 1, 1}, {0, 0, 0, 0, 0}, {1, 0, 1, 0, 1}.
 A cell in the 2D matrix can be connected to 8 neighbours. Use disjoint sets to implement the above scenario.
## Program 4:
Write a program to perform insertion and deletion operations on AVL trees
## Program 5:
Write a program to perform insertion and deletion operations on an 2-3 tree
## Program 6:
Write a program to implement insertion operation on a B-tree.
## Program 7:
Write a program to implement insertion operation on a red black tree. During insertion, appropriately show how recolouring or rotation operation is used
## Program 8:
Write a program to to implement functions of Dictionary using Hashing.
## Program 9:
Write a program to implement the following functions on a Binomial heap:
(1) insert(H, k): Inserts a key ‘k’ to Binomial Heap ‘H’. This operation first creates a Binomial Heap with single key ‘k’, then calls union on H and the new Binomial heap.
(2) getMin(H): A simple way to getMin() is to traverse the list of root of Binomial Trees and return the minimum key. 
(3) extractMin(H): This operation also uses union(). We first call getMin() to find the minimum key Binomial Tree, then we remove the node and create a new Binomial Heap by connecting all subtrees of the removed minimum node. Finally we call union() on H and the newly created Binomial Heap.
## Program 10:
Write a program to implement the following functions on a Binomial heap:
1.	delete(H): Like Binary Heap, delete operation first reduces the key to minus infinite, then calls extractMin().
2.	decreaseKey(H): decreaseKey() is also similar to Binary Heap. We compare the decreases key with it parent and if parent’s key is more, we swap keys and recur for parent. We stop when we either reach a node whose parent has smaller key or we hit the root node.
