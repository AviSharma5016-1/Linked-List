#include <iostream>
using namespace std;

class Node {
public:
    char val;
    Node* next;

    Node(char data) {
        val = data;
        next = NULL;
    }
};

int main() {
    Node* n1 = new Node('A');
    Node* n2 = new Node('B');
    Node* n3 = new Node('C');

    // Linking nodes
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    // Traversing and printing
    Node* temp = n1;
    while (temp != NULL) {
        cout << temp->val << "\n";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}

/*OUTPUT

A
B
C
*/
