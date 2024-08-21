#include <stdio.h>

int main(void)
{
    unsigned long prev = 1, curr = 2, temp;
    int count;

    printf("%lu, %lu", prev, curr);

    for (count = 3; count <= 98; count++)
    {
        temp = curr;
        curr += prev;
        prev = temp;

        printf(", %lu", curr);
    }
    
    printf("\n");
    
    return 0;
}
