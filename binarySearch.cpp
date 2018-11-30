//Write a program to search element using binary search.
#include <iostream.h>
#include <conio.h>
//using namespace std;

void  main()
{
    clrscr();
    int n, arr[50], search, first, last, middle, i;
    cout << "Enter the total number of elements:";
    cin >> n;
    cout << "Enter_" << n << "_Number:";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter a number to find:";
    cin >> search;
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;
    while (first <= last)
    {
        if (arr[middle] < search)
        {
            first = middle + 1;
        }
        else if (arr[middle] == search)
        {
            cout << search << "_found at location:" << middle + 1 << "\n";
            break;
        }
        else
        {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }
    if (first > last)
    {
        cout << "Not found!_" << search << "_is not present in the list";
    }
    getch();
}
