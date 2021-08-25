#include <stdio.h>

int main ()
{   // ANSWER = 4613732

    int first = 1;
    int second = 2;
    int sum = 0;
    int total = 2;  // total starts at 2 because it's not included in the if statement at the start
    const int fourMillion = 4000000; 

    while (total <= fourMillion)
    {
        sum = first + second;
        if (sum % 2 == 0)
        {
            // missing the # 2
            total = total + sum;
        }
        //printf("sum: %d\n", sum);
        first = second;
        second = sum;
    }

    printf("Sum: %d", total);

    return 0;
}