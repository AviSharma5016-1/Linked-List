#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
};

int main() {
    Node* n1 = new Node(1);

    cout << "Node value: " << n1->val << endl;
    cout << "Next value: " << n1->next << endl;

    return 0;
}

/*OUTPUT

Node value: 1
Next value: 0
*/
