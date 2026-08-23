#include <stdio.h>
int main()
{
    int a[10][10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &a[i][j]);

    printf("Transpose:\n");
    for(j=0; j<c; j++)
    {
        for(i=0; i<r; i++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}