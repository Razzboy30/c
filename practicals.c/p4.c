#include <stdio.h>
#include <stdlib.h>

struct value_type
    {
      int input;
    };

void assignmentToZero(int ARR[][50], int n)
{
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            ARR[i][j] = 0;
        }
    }
}

void input(int ARR[][50], int n, int m, struct value_type inkr[])
{
    int i, row, column;
    for(i=0;i<m;i++){
        row = -1;
        column = -1;
        printf("Enter the elements you want to store: ");
        scanf("%d", &inkr[i].input);
        printf("Enter on which row you wanna store(from 0 to %d): ", n-1);
        scanf("%d", &row);
        printf("Enter on which column you wanna store(from 0 to %d): ", n-1);
        scanf("%d", &column);
        ARR[row][column] = inkr[i].input;
        printf("\n");
    }
}

void disp(int ARR[][50], int n)
{
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t", ARR[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int ARR[50][50], n, m;
    struct value_type inkr[50];
    printf("READING DATA\n");
    printf("---------------------------\n");
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    assignmentToZero(ARR, n);
    printf("Enter how many elements you want to store: ");
    scanf("%d", &m);
    printf("\n");
    printf("ENTERING DATA\n");
    printf("---------------------------\n");
    input(ARR,n,m,inkr);
    printf("DISPLAYING SPARSE MATRIX\n");
    printf("---------------------------\n");
    disp(ARR,n);
    printf("\n");
    printf("Ritkaar Singh AI-DS Enrol_No.00213211921");
}