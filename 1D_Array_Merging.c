#include <stdio.h>
int main()
{
    int a[100], b[100], n, m, i;

    printf("Enter size of first array: ");
    scanf("%d", &n);
    printf("Enter first array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter size of second array: ");
    scanf("%d",&m);
    printf("Enter second array: ");
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);

    printf("Merged array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    for(i=0;i<m;i++)
        printf("%d ",b[i]);
    return 0;
}