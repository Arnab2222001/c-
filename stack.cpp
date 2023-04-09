#include <iostream>
using namespace std;
class stack
{
    public:
    int size;
    int *arr;
    int top; // this is the property of the stack;
    stack(int size)
    {
        this->size = size;//thats are the behaviour of the stack 
        top = -1;
        arr = new int(size);
    }
    void push(int size,int value)
    {
        
     cout<<"enter thee value"<<endl;
     cin>>value;
        if (size-top>1)//that is imortent
        {
            top++;
            arr[top]=value;

        }
        else{
            cout<<"the stack is oveflow"<<endl;
        }
        

    }
    int pop(int size)
    {
        if (top>=0)
        {
           
           
            top--;
        }
        else{
            cout<<"the is underflow"<<endl;
        }

    }
    void print(int size)
    {
        if (top>=0)
        {
            for (int i = top; i >0; i--)
            {
                cout<<" "<<arr[i];
            }
            
        }
        else{
            cout<<"th stack is empty"<<endl;
        }
        

    }
    int peek(int size)
    {
        if (top>=0)
        {
            return arr[top];
        }
        else{
            cout<<"te stack is empty"<<endl;
        }

    }
};
int main(){
    int size,value;
    cout<<"enter the size of the stack"<<endl;
    cin>>size;
   
    stack st(size);
    st.push(size,value);
    st.push(size,value);
     st.push(size,value);
      cout<<"the peek is"<<st.peek(size)<<endl;
    st.push(size,value);
     cout<<"the peek is"<<st.peek(size)<<endl;
     st.push(size,value);
      cout<<"the peek is"<<st.peek(size)<<endl;
    st.push(size,value);
     cout<<"the peek is"<<st.peek(size)<<endl;
    
     cout<<"the peek is"<<st.peek(size)<<endl;
    st.pop(size);
    
     cout<<"the peek is"<<st.peek(size)<<endl;
    st.pop(size);
     
       cout<<"the peek is"<<st.peek(size)<<endl;
   


}