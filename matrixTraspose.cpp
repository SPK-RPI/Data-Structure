//matrix transpose
#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int arr[3][3], i, j, arrt[3][3];
    cout << "Enter 3*3 array elemnts:";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Transposing an array:\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            arrt[i][j] = arr[j][i];
        }
    }
    cout << "Transpose of matrix is:\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << arrt[i][j] << "\t";
        }
        cout << "\n";
    }
    getch();
}
