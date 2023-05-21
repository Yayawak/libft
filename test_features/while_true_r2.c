#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    clock_t start_time;

    start_time = clock();

    while (1)
    {
        if (clock() % 2000000 == 0)
        {
            /* printf() */
            float f = rand();
            printf("random %f\n", f);
            // start_time = clock() - start_time;
        }
    }
    return (0);
}
