#include <stdio.h>

int main()
{
    int A[2][2],B[2][2],AB[2][2]={{0,0},{0,0}};
    int ii,row,col;
    printf("Enter a 2*2 matrix A row wise.");

    for (ii = 0; ii < 2; ii++)
    {
        printf("\nRow %d >>> ",ii + 1);
        scanf("%d %d",(*(A + ii)+0),(*(A + ii)+1),(*(A +ii)+2));
    }
    printf("The matrix is A =\n\n");
    for (ii = 0;ii < 2; ii++)
        printf("\t%d\t%d\n",*(*(A + ii)+0),*(*(A + ii)+1),*(*(A +ii)+2));
    printf("Enter a 2*2 matrix B row wise.");

    for (ii = 0; ii < 2; ii++)
    {
        printf("\nRow %d >>> ",ii + 1);
        scanf("%d %d",(*(B + ii)+0),(*(B + ii)+1));
    }
    printf("The matrix is B =\n\n");
    for (ii = 0;ii < 2; ii++)
        printf("\t%d\t%d\n",*(*(B + ii)+0),*(*(B + ii)+1));

    for (row=0;row<2;row++)
    {
        for (col=0;col<2;col++)
        {
            for (ii=0;ii<2;ii++)
            {
                *(*(AB+row)+col) += *(*(A+row)+ii) * *(*(B+ii)+col);
            }
        }
    }
    printf("The matrix is AB =\n\n");
    for (ii = 0;ii < 2; ii++)
        printf("\t%d\t%d\n",*(*(AB + ii)+0),*(*(AB + ii)+1));
}
