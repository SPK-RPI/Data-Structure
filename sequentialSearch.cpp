//write a program to search the element using sequential search
#include <iostream>
#include <conio.h>
//using namespace std; //remove this line
void main()          //remove int and place void
{
    clrscr();
    cout << "Enter the size of an array:";
    int size;
    cin >> size;
    int array[10], key, i;
    for (i = 0; i < size; i++)
    {
        cout << "Enter_" << i << "_Element:";
        cin >> array[i];
    }
    for (i = 0; i < size; i++)
    {
        cout << "array[" << i << "]=";
        cout << array[i] << endl;
    }
    cout << "Enter key to search an array:";
    cin >> key;
    for (i = 0; i < size; i++)
    {
        if (key == array[i])
        {
            cout << "key found at index number:" << i << endl;
            break;
        }
    }
    if (i != size)
    {
        cout << "key found at index:" << i;
    }
    else
    {
        cout << "key not found in array";
    }
    getch();
}
