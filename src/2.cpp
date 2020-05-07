// CIRCULAR QUEUE - ARRAY IMPLEMENTATION

#include<iostream>

using namespace std;

#define MAX_SIZE 11
int A[MAX_SIZE];
int front = -1;
int rear = -1;

bool IsFull()
{
    if((front==0 && rear==MAX_SIZE-1) || ((rear+1)%MAX_SIZE==front))
        return true;
    else
        return false;
}

bool IsEmpty()
{
    if((front==-1) || (front>rear))
        return true;
    else
        return false;
}

void Enqueue(int x)
{
    if(IsFull())
        return;

    if(IsEmpty())
        front = rear = 0;
    else
        rear = (rear + 1)%MAX_SIZE;

    A[rear] = x;
}

void Dequeue()
{
    if(IsEmpty())
        return;

    if(front==rear)
        front = rear = -1;
    else
        front = (front + 1)%MAX_SIZE;
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
    Enqueue(3); Print();
    Enqueue(7); Print();
    Enqueue(11); Print();
    Enqueue(15); Print();
    cout << "\nFront element: " << Peek() << endl;

    Dequeue(); Print();
    cout << "\nFront element: " << Peek() << endl;

    Enqueue(19); Print();
    Enqueue(23); Print();
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



