/* In this recipe, we will learn how to insert an element in-between an array.
 * You can define the length of the array and also specify the location where
 * you want the new value to be inserted. The program will display the array
 * after the value has been inserted. */

#include<stdio.h>
#define max 100 // Define a macro called max and initialize it to a value of 100:
int main()
{
    int p[max], n,i,k,j;

    printf("Enter length of array:");

    scanf("%d", &n);

    printf ("Enter %d elements of array \n", n);

    for(i=0; i<=n-1; i++)

        scanf("%d",&p[i]);

    printf("\n The array is:\n");



    for(i=0; i<=n-1; i++)
        printf("%d\n", p[i]);
    printf("\n Enter position where to insert:");
    scanf("%d", &k);
    k--; // The position is always one value higher than the subscript, so it is decremented by one
    for(j=n-1; j>=k; j--)
        p[j+1] = p[j]; // Shifting all the elements of the array one position down from the location of insertion
    printf("\n Enter the value to insert:");
    scanf("%d", &p[k]);
    printf("\n Array after insertion of element: \n");
    for(i=0; i<=n; i++)
        printf("%d\n", p[i]);
}
