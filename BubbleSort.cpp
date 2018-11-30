//Write a program to implement bubble sort.
#include <iostream.h>
#include <conio.h>
//using namespace std;
void main()
{
    clrscr();
    int a[50], n, i, j, temp;
    cout << "Enter the size of array:";
    cin >> n;
    cout << "\nEnter the elements in the array:";
    for (i = 0; i < n; ++i)
        cin >> a[i];
    for (i = 1; i < n; ++i)
    {
        for (j = 0; j < (n - 1); ++j)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    }
    cout << "\nArray after bubble sort:";
    for (i = 0; i < n; ++i)
        cout << "\n"
             << a[i];
    getch();
}
