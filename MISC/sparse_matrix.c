//C program that coverts a matrix to Sparse form and find its sum,Transpose
#include <stdio.h>
#include<stdlib.h>
//function to read the matrices
void read(int mat[10][10], int r, int c)
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
}
//fuction to convert the matrices to sparse form
void conv(int mat[10][10], int sp[20][3], int r, int c, int *t)
{
    *t = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] != 0) //if the element in the matrix is not zero
            {
                *t += 1;
                sp[*t][0] = i;
                sp[*t][1] = j;
                sp[*t][2] = mat[i][j];
            }
        }
    }
    sp[0][0] = r;  // total rows
    sp[0][1] = c;  // total columns
    sp[0][2] = *t; // total non zero terms
}
//function to print the sparce matrix
void print(int sp[20][3], int r)
{
    int i, j;
    for (i = 0; i <= r; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t ", sp[i][j]);
        }
        printf("\n");
    }
}
//Function to find the transose of the matrices
void trans(int mat[20][3], int sp[20][3], int t)
{
    int l = 0, i, j;
    sp[0][0] = mat[0][1];
    sp[0][1] = mat[0][0];
    sp[0][2] = mat[0][2];
    for (i = 0; i <= t; i++)
    {
        for (j = 0; j <= t; j++)
        {
            if (mat[j][1] == i) //to check if coloumn position is equal to row position
            {
                l++;
                sp[l][0] = mat[j][1];
                sp[l][1] = mat[j][0];
                sp[l][2] = mat[j][2];
            }
        }
    }
}
//funtion to find sum of the two sparce matrices
void spsum(int spa[20][3], int spb[20][3], int sum[20][3])
{
    int i, j, k, t1, t2, temp;
    i = j = k = 1;
    sum[0][0] = spa[0][0];
    sum[0][1] = spa[0][1];

    while (spa[i][0] <= spa[0][0] || spb[j][0] <= spb[0][0]) // while rowand coloumn index is smaller than the total rows and coloumn repectively
    {
        if (spa[i][0] > spb[j][0] || (spa[i][0] == spa[j][0] && spa[i][1] > spb[j][1])) // check if row index is lower or row index same and coloumn index is lower for second matrix
        {                                                                               // since 0 + value = value, we dont need to add elemnts with value zero
            sum[k][0] = spb[j][0];
            sum[k][1] = spb[j][1];
            sum[k][2] = spb[j][2];
            j++;
            k++;
        }
        else if (spa[i][0] < spb[j][0] || (spa[i][0] == spa[j][0] && spa[i][1] < spb[j][1])) // check if row index is lower or row index same and coloumn index is lower for first matrix
        {
            sum[k][0] = spa[i][0];
            sum[k][1] = spa[i][1];
            sum[k][2] = spa[i][2];
            i++;
            k++;
        }
        else // if row and coloumn index is same add the two elements
        {
            sum[k][0] = spa[i][0];
            sum[k][1] = spa[i][1];
            sum[k][2] = spa[i][2] + spb[j][2];
            j++;
            i++;
            k++;
        }
    }
    sum[0][2] = k - 1;
}
void main()
{
    int a[10][10], b[10][10], spa[20][3], spb[20][3], tra[20][3], trb[20][3], sum[20][3];
    int r1, c1, r2, c2, t1, t2;
    printf("enter the dimension of first matrix:");
    scanf("%d%d", &r1, &c1);
    printf("start entering to the first matrix: \n");
    read(a, r1, c1);
    printf("enter the dimension of second matrix:");
    scanf("%d%d", &r2, &c2);
    printf("start entering to the second matrix: \n");
    read(b, r2, c2);
    conv(a, spa, r1, c1, &t1);
    conv(b, spb, r2, c2, &t2);
    printf("Matrix A in sparse form is:\n\n");
    print(spa, t1);
    printf("Matrix B in sparse form is:S\n\n");
    print(spb, t2);
    trans(spa, tra, t1);
    trans(spb, trb, t2);
    printf("transpose of first matrix:\n\n");
    print(tra, t1);
    printf("transpose of second matrix:\n\n");
    print(trb, t2);
    //check if matrices are compatible for addition
    if (r1 == r2 || c1 == c2)
    {
        spsum(spa, spb, sum);
        printf("the sum of two matrices is:\n\n");
        print(sum, sum[0][2]);
    }
    else
        printf("Error sum not defined!!!");
}