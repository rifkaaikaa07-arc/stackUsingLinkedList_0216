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
        if (isEmpty())
        {
            cout << "Stack is Empty." << endl;
        }

        node *temp = top;
        top = top->next;
        cout << "Popped value : " << top->data << endl;
    }

     // peel/top operation: Retrive the value of the topset element witchout removing
    void peek()
    {
        if (top == NULL)
        {
            cout << "List is empty." << endl;
        }
        else
        {
            node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    } // return the value of the top node

    // isEmpty operation: check of the stack is empty
    bool isEmpty()
    {
        return top == NULL; //Return true if the top pointer is NULL, indicating an empty stack.
    }
};

int main()
{
    stack stack;

    int  choice = 0;
    int value;

    while (choice !=5)
    {
        cout << "1.push\n";
        cout << "2.pop\n";
        cout << "3.peek\n";
        cout << "4.exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            stack.push(value); // push the entered value into the stack
            break;
        }
    }
};