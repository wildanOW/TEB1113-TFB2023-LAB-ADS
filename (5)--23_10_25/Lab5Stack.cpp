#include<iostream>

using namespace std;

struct Node
{
    string data;
    Node* ptr;
};

struct Stack
{
    
    Node *top;
    int count;      
    int MAX_SIZE;

    Stack(int limit = 5)
    {
        top = nullptr;
        count = 0;
        MAX_SIZE = limit;
    }

    bool isEmpty()
    {
        return top == nullptr;
    }

    bool isFull()
    {
        return count >= MAX_SIZE;
    }

    void push(string value)
    {

        if (isFull())
        {
            cout << "Stack Overflow! Cannot push: " << value << endl;
            return;
        }

        Node *newNode = new Node();
        newNode->data = value;
        newNode->ptr = top;
        top = newNode;
        count++;

        cout << value << " pushed to stack. \n";
    }

    void pop()
    {
        if (top == nullptr)
        {
            cout << "Stack Underflow. \n";
        }
        cout << top->data << " popped from stack. \n";

        Node* temp = top;
        top = top->ptr;
        delete temp;
        count--;

    }

    void peek()
    {
        if (top == nullptr)
        {
            cout << "Stack is empty.\n";
        }
        else
        {
            cout << "Top element: " << top->data << endl;
        }
    }

};



int main()
{
    Stack s(3); 

    s.push("A");
    s.push("B");
    s.push("C");
    s.push("D"); 

    s.peek();
    
}