// QUEUE - LINKED LIST IMPLEMENTATION

#include<iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node* next;
};

Node* front = NULL;
Node* rear = NULL;

bool IsEmpty()
{
    if(front==NULL && rear==NULL)
        return true;
    return false;
}

void Enqueue(int x)
{
    Node* temp = new Node();

	temp->data = x;
	temp->next = NULL;

	if (IsEmpty())
	{
		front = rear = temp;
		return;
	}

	rear->next = temp;
	rear = temp;
}

void Dequeue()
{
    if(IsEmpty())
        return;

    if(front==rear)
        front = rear = NULL;
    else
    {
        Node* temp=front;
        front=front->next;
        delete temp;
    }
}

int Peek()
{
    return front->data;
}

void Print()
{
    cout << "\nThe queue: " << endl;
    if(IsEmpty())
        return;

    Node* temp = front;
    while(temp!=NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    cout << "Performing some queue operations..." << endl;
    Enqueue(33); Print();
    Enqueue(77); Print();
    Enqueue(111); Print();
    Enqueue(155); Print();
    cout << "\nFront element: " << Peek() << endl;

    Dequeue(); Print();
    cout << "\nFront element: " << Peek() << endl;

    Enqueue(199); Print();
    Enqueue(233); Print();
    cout << "\nFront element: " << Peek() << endl;

    Dequeue(); Print();
    Dequeue(); Print();

    if(IsEmpty())
        cout << "\nEmpty queue!" << endl;
    else
        cout << "\nQueue NOT empty yet!" << endl;

    Dequeue(); Print();
    Dequeue(); Print();
    cout << "\nFront element: " << Peek() << endl;

    Dequeue(); Print();

    if(IsEmpty())
        cout << "\nEmpty queue!" << endl;
    else
        cout << "\nQueue NOT empty yet!" << endl;
}
