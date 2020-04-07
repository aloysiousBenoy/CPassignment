#include <stdio.h>
void main()
{
    int array1[15];
    int searchElement, position = -1;
    int sizeOfArray, i;
    printf("Enter the size of the array : ");
    scanf("%d", &sizeOfArray);
    printf("Enter the elements in the array");
    for (i = 0; i < sizeOfArray; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("Enter the element to be searched :");
    scanf("%d", &searchElement);
    for (i = 0; (i < sizeOfArray) && (position == -1); i++)
    {
        if (searchElement == array1[i])
        {
            position = i;
            printf("Element found at position: %d and index : %d", position + 1, position);
        }
    }
    if (position == -1)
    {
        printf("Element is absent");
    }
}