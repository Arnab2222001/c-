#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;

    // create constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    
    ~node(){
        int value=this->data;
        if (next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"the element is deeted"<<endl;
        
    }
};
void insert_at_head(node *&head)
{
    int data;
    cout << "enter the data";
    cin >> data;
    node *temp = new node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insert_at_tail(node *&tail)
{
    int data;
    cout << "enter the data";
    cin >> data;
    node *temp = new node(data);
    tail->next = temp;
    tail->prev = temp;
    tail = temp;
}
void insert_at_position(node *&head, node *&tail)
{
    int position, data, cnt = 1;
    cout << "enter tha position" << endl;
    cin >> position;
    cout << "enter the value" << endl;
    cin >> data;
    node *temp = head;
    if (position == 1)
    {
        insert_at_head(head);
        return;
    }
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    node *node_to_insert = new node(data);
    node_to_insert->next = temp->next;
    temp->next->prev = node_to_insert;
    temp->next = node_to_insert;
    node_to_insert->prev = temp;
    if (temp->next == NULL)
    {
        insert_at_tail(tail);
        return;
    }
}
void delete_at_position(node *&head,node *&tail)
{
    int data,position,cnt=1;
    cout<<"enter the position"<<endl;
    cin>>position;
    
    
    if (position==1)
    {
        node *curr=head;
        curr->next->prev=NULL;
        head=curr->next;
        curr->next=NULL;
        delete curr;
    }

    node *curr=head;
    node *prev=NULL;
    while (cnt<position-1)
    {
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    curr->prev=NULL;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;


}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << "->" << temp->data;
        temp = temp->next;
    }
}

int main()
{
    int option, data;
    cout << "enter the data" << endl;
    cin >> data;
    node *node1 = new node(data);
    node *head = node1;
    node *tail = node1;
    do
    {
        cout << "\n1:inseret at head\n2:print\n3:insert at tail\n4:insert at specific position\n5:delete a node\n";
        cout << "enter  you option";
        cin >> option;
        switch (option)
        {
        case 1:
            insert_at_head(head);
           
            break;
        case 2:
            print(head);
          
            break;
        case 3:
            insert_at_tail(tail);
            break;
        case 4:
            insert_at_position(head, tail);

            break;
        case 5:
                 delete_at_position(head,tail);
                 break;

        default:
            break;
        }
    } while (option != 6);
}
