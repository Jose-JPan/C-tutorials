#include <stdio.h>
int main()
{
    int p[100], i, n, a;
    
    printf("Enter the length of the array: \n");
    scanf("%d", &n);
    
    printf("Enter %d elements of the array:\n", n);
    for(i=0; i<=n-1; i++)
        scanf("%d", &p[i]);
    
    printf("\n The array is: \n");
    for(i=0; i<=n-1; i++)
        printf("%d\n", p[i]);

    printf("Enter the position/location to delete \n");
    scanf("%d", &a); // 3
    a--; // 2
    for(i=a; i<=n-2; i++) // until i <= 3
        p[i] = p[i+1];

    printf("Array after deleting the element is\n");
    for(i=0; i<=n-2; i++)
        printf("%d\n", p[i]);


}
