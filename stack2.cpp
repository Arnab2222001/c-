#include <iostream>
using namespace std;
class stack
{
    // properties
public:
    int *arr;
    int top;
    int size;
    // behaviour
    stack(int size)
    {
        this->size = size;
        arr = new int(size);
        top = -1;
    }
    void push(int element)
    {
        if (size-top>1)
        {
            top++;
            arr[top]=element;
        }
        
    }
    void pop()
    {
        if (top>=0)
        {
            top--;
        }
        
        else{
            cout<<"stack is under flow"<<endl;
        }
    }
    int peek()
    {
        if (top>=0 )
        {
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
        }
    }
    bool isempty()
    {
        if (top==-1)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    stack st(5);
    st.push(22);
    st.push(55);
    st.push(790);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

}