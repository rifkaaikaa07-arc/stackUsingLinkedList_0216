#include <iostream>
using namespace std;

//node class respresentating a single node in the linked list
class node
 {
    public:
    int data;
    node* next;

    node()
    {
        next = NULL;
    }
};

//stack class 
class stack
{
    private:
    node* top; // pointer to the top node of the stack

    public:
    stack()
    {
        top = NULL;
    }
    int push(int value)
    {
        node*newnode = new node();
        newnode->data = value;
        newnode ->next = top;
        top = newnode;
        cout << "push value: " << value << endl;
        return value;
    }

    // pop operation: Remove the topmost element from the stuck
    void pop()
    {
    }
};
