#include <stdio.h>

int main(void)
{
    unsigned long prev = 1, curr = 2, temp;
    int count;

    printf("%lu", prev);
    for (count = 2; count <= 98; count++)
    {
        printf(", %lu", curr);
        temp = curr;
        curr += prev;
        prev = temp;
    }
    printf("\n");
    
    return 0;
}
