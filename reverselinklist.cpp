#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    // create a constrctor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insert_at_head(node *&head)
{
    int data;
    cout << "enter he data" << endl;
    cin >> data;
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
void print1(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << "->" << temp->data;
        temp = temp->next;
    }
}

node * reverse(node *&head)
{
    node *curr = head;
    node *prev = NULL;
    node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head= prev;
}
int main()
{
    int option, data;
    cout << "enter the data" << endl;
    cin >> data;
    node *node1 = new node(data);
    node *head = node1;
    do
    {
        cout << "\n1:insert at head\n2:display" << endl;
        cout << "enter your option" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            insert_at_head(head);
            break;
        case 2:
            print1(head);
            break;
        case 3:
            reverse(head);
            break;
       
        default:
            break;
        }

    } while (option != 4);
    return 0;
}