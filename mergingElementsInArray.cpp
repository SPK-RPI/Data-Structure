//merging of elements in an array......
#include <iostream.h>
#include <conio.h>
//using namespace std; //remove this in terbo while compiling......
void main()           //add void people....
{
    clrscr();
    int arr1[50], arr2[50], size1, size2, size, i, j, k, merge[100];
    cout << "Enter Array 1 size:";
    cin >> size1;
    cout << "Enter Array 1 elements:";
    for (i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter Array 2 size:";
    cin >> size2;
    cout << "Enter Array 2 elements:";
    for (i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
    for (i = 0; i < size1; i++)
    {
        merge[i] = arr1[i];
    }
    size = size1 + size2;
    for (i = 0, k = size1; k < size && i < size2; i++, k++)
    {
        merge[k] = arr2[i];
    }

    cout << "Now the new array after merging is:\n";
    for (i = 0; i < size; i++)
    {
        cout << merge[i] << " ";
    }
    getch();
}
