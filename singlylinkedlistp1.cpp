#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *link;
    // create constructor
    node(int data)
    {
        this->data = data;
        this->link = NULL;
    }
    //deconstructor
    ~node(){
        int value = this->data;
        // memory free
        if (this->link != NULL)
        {
            delete link;
            this->link = NULL;
        }

        cout << " memory is free for node with data " << value << endl;
    }
};
void insert_at_head(node *&head)
{
    int data;
    cout << "enter the data";
    cin >> data;
    // create a new node
    node *temp = new node(data);
    temp->link = head;
    // now we shift head to the new node
    head = temp;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << "->" << temp->data;
        temp = temp->link;
    }
}
void insert_at_tail(node *&tail)
{
    int data;
    cout << "enter the data";
    cin >> data;
    // create a new node
    node *temp = new node(data);
    tail->link = temp;
    tail = temp;
}
void insert_at_position(node *&head, node *&tail)
{
    int position, data, cnt = 1;
    cout << "enter the position" << endl;
    cin >> position;
    if (position == 1)
    {
        insert_at_head(head);
        return;
    }

    node *node_to_insert = new node(data);
    node *temp = head;
cout << "enter the data";
    cin >> data;
    while (cnt < position - 1)
    {
        temp = temp->link;
        cnt++;
    }

    node_to_insert->link = temp->link;
    temp->link = node_to_insert;
    if (temp->link == NULL)
    {
        insert_at_tail(tail);
        return;
    }
    
}
void delete_at_position(node * &head)
{
    
    
    node *curr=head;
    node *prev=NULL;
    int position,cnt;
    cout<<"enter the position"<<endl;
    cin>>position;
    if (position==1)
    {
        //deleteing first node
        node *temp=head;
        head=head->link;
        temp->link=NULL;
        delete temp;

    }
    while (curr!=NULL)
    {
        prev=curr;
        curr=curr->link;
        cnt++;
    }
    prev->link=curr->link;
    curr->link=NULL;
    delete curr;
    

}
int main()
{
    int option, data;
    cout << "enter the data";
    cin >> data;
    // create a new node
    node *node1 = new node(data);
    // create a pointer to allocate head
    node *head = node1;
    node *tail = node1;
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

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
             delete_at_position(head);
             break;
        default:
            break;
        }
    } while (option != 6);

    return 0;
}