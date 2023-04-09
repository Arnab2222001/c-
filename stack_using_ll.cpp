#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    // crate the constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class stack
{
public:
    node *head;
    int size;
    // create the constructor;
    stack(int size)
    {
        this->size = size;
        this->head = NULL;
    }
    void push()
    {
        int data,cnt=0;
        cout << "enterthe data" << endl;
        cin >> data;
        node *temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            cnt++;
        }
        if (cnt<size)
        {
            //insert at head
            node *node1=new node(data);
            if (head==NULL)
            {
                head=node1;
                return;
            }
            else{
                node1->next=head;
                head=node1;
            }
            
        }
        
    }
    void pop()
    {
       if (head==NULL)
       {
            cout<<"stack is underflow"<<endl;
       }
       else
       { node *temp=head;
        cout<<"the pop element is"<<temp->data<<endl;
        head=head->next;
        delete temp;

        

       }
    }
    void peek()
    {
        if (head==NULL)
        {
            cout<<"the stack is underflow"<<endl;

        }
        else{
            node *temp=head;
            cout<<"the peek is "<<temp->data<<endl;

        }
        
           
    }
};
int main(){
     int size;
       cout<<" enter the size"<<endl;
       cin>>size;
       stack st(size);
        st.push();
        st.push();
        st.push();
        st.push();
        st.push();
        st.push();
        st.pop();
        st.push();
        st.peek();
        st.pop();
        st.peek();
    


}