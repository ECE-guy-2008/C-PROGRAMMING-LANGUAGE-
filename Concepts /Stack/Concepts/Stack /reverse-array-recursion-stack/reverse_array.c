#include <stdio.h>

void printArrayReverse(const int arr[], int n, int index)
{
    // Base case: stop when index reaches the array length.
    if (index == n)
    {
        return;
    }

    // Go deeper before printing the current element.
    printArrayReverse(arr, n, index + 1);

    // This line runs while recursive calls return.
    printf("%d ", arr[index]);
}

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = (int)(sizeof(arr) / sizeof(arr[0]));

    printf("Array in reverse order: ");
    printArrayReverse(arr, n, 0);
    printf("\n");

    return 0;
}
