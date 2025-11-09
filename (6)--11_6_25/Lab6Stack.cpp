#include<iostream>

using namespace std;

struct Node
{
    string data;
    Node* ptr;
};

struct Queue
{
    
    Node *front;
    Node *rear;
    int count;      
    int MAX_SIZE;

    Queue(int limit = 5)
    {
        front = nullptr;
        rear = nullptr;
        count = 0;
        MAX_SIZE = limit;
    }

    bool isEmpty()
    {
        return front == nullptr;
    }

    bool isFull()
    {
        return count >= MAX_SIZE;
    }

    void enqueue(string value)
    {

        if (isFull())
        {
            cout << "Queue Overflow! Cannot push: " << value << endl;
            return;
        }

        Node *newNode = new Node();
        newNode->data = value;
        newNode->ptr = nullptr;
        
        
        if (isEmpty())
        {
            front = rear = newNode;
        }
        else
        {
            rear->ptr = newNode;
            rear = newNode;
        }
        
        count++;
        cout << value << " enqueued.\n";
    }

    void dequeue()
    {
       if (isEmpty())
        {
            cout << "Queue Underflow! Nothing to dequeue.\n";
            return;
        }

        Node *temp = front;
        cout << temp->data << " dequeued.\n";

        front = front->ptr;
        delete temp;
        count--;

        if (front == nullptr)
        {
            rear = nullptr;
        }

    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty.\n";
            return;
        }

        Node* temp = front;
        cout << "Queue contents: ";
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->ptr;
        }
        cout << endl;
    }
  
};



int main()
{
     Queue q(3);

    q.enqueue("A");
    q.enqueue("B");
    q.enqueue("C");
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
    q.dequeue();
    q.dequeue();
    
}