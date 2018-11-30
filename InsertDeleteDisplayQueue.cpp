//Write a program to implement the concept of queue with insert, delete, and display and exit operations.
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
//using namespace std;//remove this line....
class queue
{
    int queue1[5];
    int rear, front, i;

  public:
    queue()
    {
        rear = -1;
        front = -1;
    }
    void insert(int x)
    {
        if (rear > 4)
        {
            cout << "Queue overflow:";
            front = rear = -1;
            return;
        }
        queue1[++rear] = x;
        cout << "Inserted:" << x;
    }
    void delet()
    {
        if (front == rear)
        {
            cout << "Queue underflow:";
            return;
        }
        cout << "Deleted:" << queue1[++front];
    }
    void display()
    {
        if (rear == front)
        {
            cout << "Queue empty:";
            return;
        }
        for (i = front + 1; i <= rear; i++)
            cout << queue1[i] << " ";
    }
};
int main()
{
    clrscr();
    int ch;
    queue qu;
    while (true)
    {
        cout << "\n1.insert 2.delete 3.display 4.exit\n Enter your choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter a element:";
            cin >> ch;
            qu.insert(ch);
          
            break;
        case 2:
            qu.delet();
            break;
        case 3:
            qu.display();
            break;
        case 4:
            exit(0);
        }
        default:cout<<"That is a wrong choice.."<<endl;
    }
    return false;
}
