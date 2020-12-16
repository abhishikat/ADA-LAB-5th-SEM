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
## Open-Ended Question-1:
Given an array of N distinct elements, the task is to find all elements in array except two greatest elements.

### Input:
The first line of input contains an integer T denoting the number of test cases. Each test case contains two lines. The first line of input contains an integer N denoting the size of the array. Then in the next line are N space separated array elements.

### Output:
For each test case in a new line print the space separated sorted values denoting the elements in array which have at-least two greater elements than themselves.

Constraints:
1<=T<=100
3<=N<=100
1<=A[]<=100

#### Example:
##### Input:
2
5
2 8 7 1 5
6
7 -2 3 4 9 -1

##### Output:
1 2 5
-2 -1 3 4

##### Explanation:
Test case 1: Largest two elements are 7 and 8. So array left is 1 2 5.
## Open-Ended Question-2:
In the given range [L, R], print all numbers having unique digits. e.g. In range 10 to 20 should print all numbers except 11.

##### Example 1:

##### Input:
L = 10
R = 20

##### Output:
10 12 13 14 15 16 17 18 19 20

##### Explanation:
The number 11 has two 1 therefore
11 is not a unique number.

##### Example 2:

##### Input:
L = 1
R = 9

##### Output:
1 2 3 4 5 6 7 8 9

##### Explanation:
All the Numbers are unique.
Your Task:  
You don't need to read input or print anything. Your task is to complete the function uniqueNumbers() which takes two integers L and R as an input parameter and returns the list/vector of all the unique numbers present between L to R.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= L <= R <= 10^4
