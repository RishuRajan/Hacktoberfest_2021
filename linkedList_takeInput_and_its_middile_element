#include<iostream>
using namespace std;

class node {
public:
    int data;
    node *next;
    node(int data) {
        this->data = data;
        next = NULL;
    }

};
node *takeinput() {
    int data;
    cin >> data;
    node *head = NULL;
    while (data != -1) {
        node *newnode = new node(data);
        if (head == NULL) {
            head = newnode;
        } else {
            node *temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cin >> data;
    }
    return head;
}
void print(node *head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}
node *middile(node * head) {
    node * slow = head;
    node *fast = head;
    while ( fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main() {
    node *head = takeinput();
    print(head);
    node * temp = middile(head);
    cout << endl << temp->data;
}
