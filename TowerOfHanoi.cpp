//Write a program to implement tower of Hanoi problem..
#include <iostream.h>
#include <conio.h>
//using namespace std;
void towers(int, char, char, char);
void main()
{
    int num;
    //clrscr();// decomment this...
    cout << "Enter the number of disks:";
    cin >> num;
    cout << "The sequence of moves involved in the tower of hanoi are:\n";
    towers(num, 'A', 'C', 'B');
    return 0;
}
void towers(int num, char frompeg, char topeg, char auxpeg)
{
    if (num == 1)
    {
        cout << "\nMove disk 1 from peg: " << frompeg << " to peg: " << topeg;
        return;
    }
    else
    {
        towers(num - 1, frompeg, auxpeg, topeg);
        cout << "\n move disk: " << num << " frompeg: " << frompeg << "to peg: " << topeg;
        towers(num - 1, auxpeg, topeg, frompeg);
    }
    getch();
}
