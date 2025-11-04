#include <stdio.h>

int main()
{

    int i;
    int j;
    int num;

    printf("Please enter an upper limit (N): ");
    scanf("%d", &num);

    /*

    sum = 0;
    while(i <= num) {
        while (j < i){
         if (j == num)
            {
                return 0;
            }
            if (i % j == 0)
            {
                sum += j;
            }
        }
            if (sum < j)
        {
            printf("%d -> Deficient Number\n", i);
        }
        else if (sum == j)
        {
            printf("%d -> Perfect Number\n", i);
        }
        else
        {
            printf("%d -> Abundant Number\n", i);
        }
    }


    when 'sum = 0' line is before the loop, every time the loop turns, sum values are adding each other.
    we should reset the sum variable for each loop turn. Otherwise, most of the numbers will output as
    'Abundant Number'.

    */

    for (i = 1; i <= num; i++)
    {
        int sum = 0;
        for (j = 1; j < i; j++)
        {
            if (j == num)
            {
                return 0;
            }
            if (i % j == 0)
            {
                sum += j;
            }
        }

        if (sum < j)
        {
            printf("%d -> Deficient Number\n", i);
        }
        else if (sum == j)
        {
            printf("%d -> Perfect Number\n", i);
        }
        else
        {
            printf("%d -> Abundant Number\n", i);
        }
    }
}