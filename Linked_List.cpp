#include <iostream>
using namespace std;

class Link {
public:
    int data;
    Link* next;

    Link(int num) {
        data = num;
        next = NULL;
    }
};

// Function to insert a new node at the head
void insert_head(Link* &head, int num) {
    Link* new_node = new Link(num);
    new_node->next = head;
    head = new_node;
}

// Function to display the linked list
void disp(Link* head) {
    Link* temp = head;

    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Link* head = NULL;

    insert_head(head, 30);
    disp(head);

    insert_head(head, 32);
    disp(head);

    insert_head(head, 35);
    disp(head);

    return 0;
}

/*OUTPUT

30->NULL
32->30->NULL
35->32->30->NULL
*/
