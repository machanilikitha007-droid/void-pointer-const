#include <stdio.h>

void displayValue(const void *data)
{
    const int *number = (const int *)data;

    printf("Value: %d\n", *number);
}

int main()
{
    int number = 500;

    displayValue(&number);

    return 0;
}
