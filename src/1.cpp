// QUEUE - ARRAY IMPLEMENTATION

#include<iostream>

using namespace std;

#define MAX_SIZE 11
int A[MAX_SIZE];
int front = -1;
int rear = -1;

bool IsFull()
{
    if(rear == MAX_SIZE - 1)
        return true;
    else
        return false;
}

bool IsEmpty()
{
    if(front == -1)
        return true;
    else
        return false;
}

void Enqueue(int x)
{
    if(IsFull())
        return;
    else if(IsEmpty())
        front = rear = 0;
    else
        rear = rear + 1;

    A[rear] = x;
}

void Dequeue()
{
    if(IsEmpty())
        return;

    if(front == rear)
        front = rear = -1;
    else
        front = front + 1;
}

int Peek()
{
    return A[front];
}

void Print()
{
    cout << "\nThe queue: " << endl;
    if(IsEmpty())
        return;
    for(int i=front; i<=rear; i++)
    {
        cout << A[i] << endl;
    }
}

int main()
{
    cout << "Performing some queue operations..." << endl;
    Enqueue(1); Print();
    Enqueue(2); Print();
    Enqueue(4); Print();
    Enqueue(6); Print();
    cout << "\nFront element: " << Peek() << endl;

    Dequeue(); Print();
    cout << "\nFront element: " << Peek() << endl;

    Enqueue(10); Print();
    Enqueue(12); Print();
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
