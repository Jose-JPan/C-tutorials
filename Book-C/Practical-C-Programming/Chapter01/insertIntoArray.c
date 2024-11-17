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
    scanf("%d", &n); // 5

    printf ("Enter %d elements of array \n", n);
    for(i=0; i<=n-1; i++)
        scanf("%d", &p[i]); // 1 2 3 4 5
    
    printf("\n The array is:\n");
    for(i=0; i<=n-1; i++)
        printf("%d\n", p[i]); // 1 2 3 4 5

    printf("\n Enter position where to insert:");
    scanf("%d", &k); // 3
    k--;            // The position is always one value higher than the subscript, so it is decremented by one
  
    for(j=n-1; j>=k; j--)
        p[j+1] = p[j]; // Shifting all the elements after the location of insertion [2] one position up.
                       //  p[5] = 5
                       //  p[4] = 4
                       //  p[3] = 3
                       //  p[2] = ?
    printf("\n Enter the value to insert:");
    scanf("%d", &p[k]); // p[2] = 25

    printf("\n Array after insertion of element: \n");
    for(i=0; i<=n; i++)
        printf("%d\n", p[i]);
}
