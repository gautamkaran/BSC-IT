#include <iostream>
using namespace std;

void readMatrix(int mat[10][10], int &r, int &c)
{
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    cout << "Enter elements:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> mat[i][j];
}

void displayMatrix(int mat[10][10], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

void addMatrices(int a[10][10], int b[10][10], int r, int c)
{
    int sum[10][10];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];
    cout << "Result of Addition:\n";
    displayMatrix(sum, r, c);
}

void multiplyMatrices(int a[10][10], int b[10][10], int r1, int c1, int r2, int c2)
{
    int prod[10][10] = {0};
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                prod[i][j] += a[i][k] * b[k][j];
    cout << "Result of Multiplication:\n";
    displayMatrix(prod, r1, c2);
}

void transposeMatrix(int mat[10][10], int r, int c)
{
    int trans[10][10];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            trans[j][i] = mat[i][j];
    cout << "Transpose:\n";
    displayMatrix(trans, c, r);
}

int main()
{
    int mat1[10][10], mat2[10][10], r1, c1, r2, c2, choice;
    cout << "\n1. Addition\n2. Multiplication\n3. Transpose\n4. Exit\n";

    while (true)
    {
        cout << "Enter choice: ";
        cin >> choice;
        if (choice == 4)
            break;

        if (choice == 1)
        {
            readMatrix(mat1, r1, c1);
            readMatrix(mat2, r2, c2);
            if (r1 == r2 && c1 == c2)
                addMatrices(mat1, mat2, r1, c1);
            else
                cout << "Addition not possible\n";
        }
        else if (choice == 2)
        {
            readMatrix(mat1, r1, c1);
            readMatrix(mat2, r2, c2);
            if (c1 == r2)
                multiplyMatrices(mat1, mat2, r1, c1, r2, c2);
            else
                cout << "Multiplication not possible\n";
        }
        else if (choice == 3)
        {
            readMatrix(mat1, r1, c1);
            transposeMatrix(mat1, r1, c1);
        }
        else
            cout << "Invalid choice\n";
    }
    return 0;
}
