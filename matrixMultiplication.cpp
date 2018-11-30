//matrix multiplication....
#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int i, j, mat1[3][3], mat2[3][3], mat3[3][3], k, sum = 0;
    cout << "Enter matrix 1 element:";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter matrix2 element:";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> mat2[i][j];
        }
    }
    cout << "multiplying two matrix:";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = 0;
            for (k = 0; k < 3; k++)
            {
                sum = +mat1[i][k] * mat2[k][j];
            }
            mat3[i][j] = sum;
        }
    }
    cout << "The new matrix will be:\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << mat3[i][j] << " ";
        }
        cout << "\n";
    }
    getch();
}
