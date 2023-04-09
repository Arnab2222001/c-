#include <iostream>
using namespace std;
class queue
{
public:
    int size;
    int *arr;
    int front;
    int rear;

    // create constructor
    queue(int size)
    {
        this->size = size;
        arr = new int(size);
        front = 0;
        rear = 0;
    }
    void push(int size)
    {
        int value;
        cout<<"enter the value"<<endl;
        cin>>value;
        if (size==rear)
        {
             cout<<"the queue is full"<<endl;
        }
        else
        {
           arr[rear]=value;
           rear++;

        }

    }
    int pop(int size)
    {
        if (front==rear)
        {
            return -1;
        }
        else{
            cout<<"the pop element is "<<arr[front]<<endl;
            arr[front]=-1;
            front++;
            if (front==rear)
            {
                front=0;rear=0;
            }
            
        }
        

    }
};
int main()
{
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    queue st(size);
    st.push(size);
    st.push(size);
    st.push(size);
     st.pop(size);
    st.push(size);
     st.pop(size);
    st.push(size);
    st.pop(size);

    return 0;

}
