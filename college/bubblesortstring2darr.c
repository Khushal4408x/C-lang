#include <stdio.h>
#include <string.h>

#define ROWS 3
#define COLS 20

void bubbleSort2D(char arr[ROWS][COLS]);

int main()
{
    // Sample 2D array of strings
    char arr[ROWS][COLS] = {
        "banana",
        "apple",
        "grape"};

    // Print original array
    printf("Original Array:\n");
    for (int i = 0; i < ROWS; i++)
    {
        printf("%s\n", arr[i]);
    }

    // Perform bubble sort on the 2D array
    bubbleSort2D(arr);

    // Print sorted array
    printf("\nSorted Array:\n");
    for (int i = 0; i < ROWS; i++)
    {
        printf("%s\n", arr[i]);
    }

    return 0;
}

void bubbleSort2D(char arr[ROWS][COLS])
{
    int i, j;
    char temp[COLS];

    for (i = 0; i < ROWS - 1; i++)
    {
        for (j = 0; j < ROWS - i - 1; j++)
        {
            // Compare adjacent strings
            if (strcmp(arr[j], arr[j + 1]) > 0)
            {
                // Swap strings if they are in the wrong order
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}
