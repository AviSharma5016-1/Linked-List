# EXPERIMENT - LINKED LISTS IN C++

## Aim: To study and implement the concepts of linked lists data structure in C++.

## Apparatus: VS Code or Online C++ Compiler

## Theory:

**Linked Lists** are fundamental linear data structures in computer science where elements are stored in nodes, and each node contains data and a pointer/reference to the next node in the sequence. Unlike arrays, linked lists don't store elements in contiguous memory locations, making them dynamic and flexible for memory allocation.

### Key Concepts:

1. **Node**: The basic unit of a linked list containing data and a pointer to the next node.
   ```cpp
   class Node {
   public:
       int data;
       Node* next;
       
       Node(int value) {
           data = value;
           next = NULL;
       }
   };
   ```

2. **Head Pointer**: A pointer that points to the first node of the linked list. If the list is empty, head points to NULL.
   ```cpp
   Node* head = NULL;  // Empty list
   ```

3. **Next Pointer**: Each node contains a pointer that points to the next node in the sequence. The last node's next pointer is NULL.
   ```cpp
   node->next = nextNode;  // Linking nodes
   ```

4. **Traversal**: The process of visiting each node in the linked list sequentially using the next pointers.
   ```cpp
   Node* temp = head;
   while (temp != NULL) {
       cout << temp->data << " ";
       temp = temp->next;
   }
   ```

### Basic Linked List Structure:

```
[Data|Next] -> [Data|Next] -> [Data|Next] -> NULL
    Node1         Node2         Node3
```

### Types of Linked Lists:

1. **Singly Linked List**: Each node points to the next node (implemented in this experiment)
2. **Doubly Linked List**: Each node has pointers to both next and previous nodes
3. **Circular Linked List**: The last node points back to the first node
4. **Doubly Circular Linked List**: Combination of doubly and circular linked lists

### Advantages of Linked Lists:

- **Dynamic Size**: Can grow or shrink during runtime
- **Memory Efficiency**: Allocates memory as needed
- **Insertion/Deletion**: Efficient insertion and deletion at any position
- **No Memory Waste**: Uses exactly the memory required
- **Flexible Structure**: Can easily modify the structure during execution

### Disadvantages of Linked Lists:

- **Random Access**: No direct access to elements (must traverse from head)
- **Extra Memory**: Additional memory required for storing pointers
- **Cache Performance**: Poor cache locality compared to arrays
- **Sequential Access**: Must traverse sequentially to reach any element

## Programs:

### 1. Basic Node Creation and Access

---

**File:** `nodes.cpp`  
**Experiment ID:** LL-01

**Description:** Demonstrates the fundamental concept of creating a single node in a linked list, showing how to access node data and pointer values.

**Algorithm:**
1. Define a Node class with integer data and a next pointer
2. Create a constructor to initialise the node with the given data value
3. Set the next pointer to NULL by default
4. Create a single node object with value 1
5. Display the node's data value
6. Display the next pointer value (should be NULL/0)
7. Demonstrate basic node structure and memory allocation

**Key Learning:** Understanding the basic building block of linked lists - the node structure with data and pointer components.

---

### 2. Node Linking and Traversal

---

**File:** `links.cpp`  
**Experiment ID:** LL-02

**Description:** Implements multiple node creation and linking to form a simple linked list with character data, demonstrating basic traversal techniques.

**Algorithm:**
1. Define the Node class with a character data type and a next pointer
2. Create three separate nodes with values 'A', 'B', and 'C'
3. Manually link the nodes: n1->next = n2, n2->next = n3
4. Set the last node's next pointer to NULL
5. Implement traversal using a temporary pointer starting from the first node
6. Display each node's data while moving to the next node
7. Continue until reaching NULL (end of list)
8. Print each character on a new line

**Key Learning:** Understanding how to connect multiple nodes and traverse through the entire linked list structure using pointer manipulation.

---

### 3. Dynamic Linked List with Head Insertion

---

**File:** `linked_lists.cpp`  
**Experiment ID:** LL-03

**Description:** Demonstrates advanced linked list operations, including dynamic head insertion and complete list traversal with a more comprehensive implementation.

**Algorithm:**
1. Define the Link class with integer data and a next pointer
2. Create a constructor for proper node initialisation
3. Implement the insert_head() function for adding nodes at the beginning
4. Create a new node with the given data value
5. Set the new node's next pointer to the current head
6. Update the head pointer to point to the new node
7. Implement disp() function for formatted list display
8. Use a temporary pointer for traversal without modifying the head
9. Display data with arrows showing link connections
10. Demonstrate multiple insertions (30, 32, 35)
11. Show how the list grows with each insertion at the head position

**Key Learning:** Implementing dynamic insertion operations and understanding how head insertion affects the order of elements in the linked list.

---

## Key Learning Outcomes:

1. **Node Structure**: Understanding the fundamental building block of linked lists
2. **Memory Management**: Learning dynamic memory allocation for nodes
3. **Pointer Manipulation**: Working with pointers to create links between nodes
4. **Traversal Algorithms**: Implementing sequential access to list elements
5. **Insertion Operations**: Adding new nodes at different positions
6. **List Display**: Creating formatted output to visualise list structure
7. **Dynamic Data Structures**: Understanding how linked lists grow and shrink
8. **Object-Oriented Implementation**: Using classes to encapsulate node behavior

## Applications:

- **Memory Management**: Implementing memory allocators and garbage collectors
- **Undo Operations**: Maintaining history of operations in text editors and applications
- **Music Playlists**: Managing sequential playback of songs with next/previous functionality
- **Browser History**: Storing and navigating through visited web pages
- **Symbol Tables**: Implementing hash tables with chaining for collision resolution
- **Polynomial Arithmetic**: Representing and manipulating polynomial expressions
- **Queue Implementation**: Using linked lists to implement dynamic queues
- **Stack Implementation**: Creating stacks with dynamic memory allocation

## Advantages of Linked Lists:

- **Dynamic Memory Allocation**: Memory is allocated at runtime as needed
- **Efficient Insertion/Deletion**: O(1) time complexity for insertion at head
- **Memory Utilisation**: No memory is wasted as only required nodes are created
- **Flexibility**: Easy to modify the structure and implement various list operations
- **No Size Limitations**: Can grow as large as available memory allows
- **Easy Implementation**: Simple to understand and implement basic operations
- **Modular Design**: Each node is independent, making debugging easier

## Important Concepts:

- **Head Pointer**: Critical reference point for accessing the entire list
- **NULL Termination**: Last node's next pointer must be NULL to indicate the end
- **Memory Leaks**: Proper deallocation of nodes when deleting or destroying lists
- **Pointer Arithmetic**: Understanding how pointers navigate through nodes
- **Pass by Reference**: Using reference parameters for functions that modify the list
- **Temporary Pointers**: Using auxiliary pointers for traversal without losing head reference
- **Node Construction**: Proper initialisation of data and pointer members

## Best Practices:

- **Initialise Pointers**: Always initialise next pointers to NULL in constructors
- **Check NULL Pointers**: Validate pointers before dereferencing to avoid crashes
- **Use Temporary Pointers**: Preserve head pointer during traversal operations
- **Memory Management**: Delete allocated nodes when removing from the list
- **Consistent Naming**: Use descriptive names for node classes and pointer variables
- **Error Handling**: Check for empty lists and invalid operations
- **Code Documentation**: Comment complex pointer manipulations for clarity

## Common Linked List Operations:

- **Creation**: Allocating memory and initialising the first node
- **Insertion**: Adding nodes at head, tail, or specific positions
- **Deletion**: Removing nodes from various positions in the list
- **Traversal**: Visiting each node sequentially from head to tail
- **Search**: Finding nodes with specific data values
- **Length Calculation**: Counting the total number of nodes
- **Reversal**: Changing the direction of links to reverse the list

## Memory Considerations:

```cpp
// Proper memory allocation
Node* newNode = new Node(data);

// Proper memory deallocation
delete nodeToRemove;

// Avoiding memory leaks
while (head != NULL) {
    Node* temp = head;
    head = head->next;
    delete temp;
}
```

## Time Complexity Analysis:

| Operation | Time Complexity | Space Complexity |
|-----------|----------------|------------------|
| Insertion at Head | O(1) | O(1) |
| Insertion at Tail | O(n) | O(1) |
| Deletion at Head | O(1) | O(1) |
| Deletion at Tail | O(n) | O(1) |
| Search | O(n) | O(1) |
| Traversal | O(n) | O(1) |

## Comparison with Arrays:

| Aspect | Linked List | Array |
|--------|------------|-------|
| Memory Allocation | Dynamic | Static |
| Access Time | O(n) | O(1) |
| Insertion at Beginning | O(1) | O(n) |
| Memory Overhead | High (pointers) | Low |
| Cache Performance | Poor | Good |
| Memory Layout | Non-contiguous | Contiguous |

## Common Pitfalls and Solutions:

- **Dangling Pointers**: Always set deleted node pointers to NULL
- **Memory Leaks**: Implement proper destructors or cleanup functions
- **Infinite Loops**: Ensure proper termination conditions in traversal
- **Lost Head Reference**: Use temporary pointers for operations
- **Uninitialized Pointers**: Initialize all pointers in constructors
- **Null Pointer Dereferencing**: Check for NULL before accessing node data

## Advanced Concepts:

- **Circular Linked Lists**: Last node points back to first node
- **Doubly Linked Lists**: Each node has both next and previous pointers
- **Skip Lists**: Probabilistic data structure with multiple levels
- **XOR Linked Lists**: Memory-efficient doubly linked lists using XOR operations
- **Self-Organising Lists**: Lists that rearrange based on access patterns
- **Persistent Linked Lists**: Immutable versions that support multiple versions

## Testing Strategies:

- **Empty List Testing**: Test operations on empty lists
- **Single Node Testing**: Verify operations with only one node
- **Multiple Node Testing**: Test with various list sizes
- **Boundary Testing**: Test first and last node operations
- **Memory Testing**: Verify proper allocation and deallocation
- **Performance Testing**: Measure time complexity of operations
- **Stress Testing**: Test with large datasets and edge cases

## Conclusion  

Linked lists provide dynamic memory management with efficient insertion and deletion. This experiment demonstrated node creation, linking, traversal, and head insertion, highlighting their flexibility, advantages, and practical applications despite extra pointer overhead.
