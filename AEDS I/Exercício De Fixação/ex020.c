#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, count;
    for (count = 1; count <= 10; count++)
    {
        printf("(%d,", count);
        for (i = 1; i <= 10; i++)
        {
            if (i == 10)
            {
                printf("%d)\n", i);
            }
            else{
                printf("%d,", i);
            }
            

        }
    }

    return 0;
}