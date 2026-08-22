#include <stdio.h>
int main()
{
    int a[100], n, i, pos, value, choice;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("1. Insertion\n2. Deletion\n3. Traversal\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    if(choice == 1)
    {
        printf("Enter position and value: ");
        scanf("%d%d", &pos, &value);
        for(i = n; i >= pos; i--)
            a[i] = a[i - 1];
        a[pos - 1] = value;
        n++;
    }
    else if(choice == 2)
    {
        printf("Enter position: ");
        scanf("%d", &pos);
        for(i = pos - 1; i < n - 1; i++)
            a[i] = a[i + 1];

        n--;
    }
    printf("Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}