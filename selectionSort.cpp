//Write a program to implement selection sort.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    //clrscr();
    int size, arr[50], i, j, temp;
    cout << "Enter size of an array:";
    cin >> size;
    cout << "\nEnter the elements of an array:";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "\nSorting an array using selection sort:\n";
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "\nArray after selection sort:\n";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    getch();
}
