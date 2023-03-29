/* Three ways of accessing a 2-D array */
#include <stdio.h>
void display(int *q, int, int);
void show(int (*q)[4], int, int);
void print(int q[][4], int, int);
int main()
{
    int a[3][4] = {
        1, 2, 3, 4,
        5, 6, 7, 8,
        9, 0, 1, 6};
    display(a, 3, 4);
    show(a, 3, 4);
    print(a, 3, 4);
    return 0;
}

void display(int *q, int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%d ", *(q + i * col + j));
            //Basic logic of multiplying column to integer pointer and adding row for proper value.
        printf("\n");
    }
    printf("\n");
}

void show(int (*q)[4], int row, int col)
{
    int i, j;
    int *p;
    for (i = 0; i < row; i++)
    {
        p = q + i; 
        //q is an array pointer so increasing by one will give the address of next array in q so we declared a int pointer named p and first giving the address of the first value of array to that pointer and then increment to the int pointer will give the address of next integer.
        for (j = 0; j < col; j++)
            printf("%d ", *(p + j));
        printf("\n");
    }
    printf("\n");
}

void print(int q[][4], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%d ", q[i][j]);
        printf("\n");
    }
    printf("\n");
}