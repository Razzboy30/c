// #include<stdio.h>
// #include<stdlib.h>
// #include<conio.h.>
// #include<math.h>

// int main(){
//     int a[3][3], i,j, size=0,k=0;


//   return 0;
// }
#include <stdio.h>
//  #include<conio.h>
// #include <curses.h>
int main()
{
    int a[3][3], i, j, size=0, k=0;
    printf("Enter matrix elements \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]!=0)
            {
                size++;
            }
        }
    }
    int b[i][j];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]!=0)
            {
                b[0][k]=i;
                b[1][k]=j;
                b[2][k]=a[i][j];
                k++;

            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d",b[i][j]);
        } printf("\n");
        }
        //  getch();
    printf("Ritkaar Singh AI-DS 00213211921");

}