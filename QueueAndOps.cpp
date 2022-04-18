#include <iostream>
#define size 5
using namespace std;

class Queue
{
public:
    int front, rear, *arr;

    Queue()
    {
        arr = new int[size];
        rear = -1;
        front = 0;
        front = arr[front];
    }

    void push(int element)
    {
        if (rear == size - 1 && front != size - 1)
        {
            cout << "\nQueue is Full, can't push";
            return;
        }
        else if (front == size - 1)
        {
            front = 0;
            rear = -1;
        }
        rear++;
        arr[rear] = element;
    }

    void pop()
    {
        if (rear == (front))
        {
            cout << "\nQueue is Empty, can't pop.";
            return;
        }
        front++;
    }

    int frnt()
    {
        if (rear == (front - 1))
        {
            cout << "\nQueue is Empty -> ";
            return -1;
        }
        cout << endl;
        return arr[front];
    }

    bool isEmpty()
    {
        cout << endl;
        return rear == front - 1;
    }

    void printQ()
    {
        int count = front;

        if (rear == front - 1)
        {
            cout << "\nQueue: Empty !";
            return;
        }

        cout << endl
             << "Queue: ";
        while (rear != count - 1)
        {
            cout << arr[count] << " ";
            count++;
        }
    }
};

int main()
{
    Queue q1;
    q1.push(3);
    q1.push(6);
    q1.push(7);
    q1.push(8);
    q1.push(2);

    q1.pop();
    q1.pop();
    q1.pop();
    q1.pop();
    q1.pop();
    q1.printQ();

    cout << endl
         << "Rear: " << q1.rear << " Front: " << q1.front;

    q1.push(23);
    q1.push(34);
    q1.printQ();

    cout << endl
         << "Rear: " << q1.rear << " Front: " << q1.front;

    cout << endl;
    return 0;
}