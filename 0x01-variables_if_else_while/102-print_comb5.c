#include <stdio.h>

int main(void)
{
    int num1, num2;

    for (num1 = 0; num1 <= 99; num1++)
    {
        for (num2 = num1 + 1; num2 <= 99; num2++)
        {
            /* Print the first two digits */
            putchar((num1 / 10) + '0');
            putchar((num1 % 10) + '0');

            /* Print the separator */
            putchar(' ');

            /* Print the second two digits */
            putchar((num2 / 10) + '0');
            putchar((num2 % 10) + '0');

            /* Print the comma and space unless it's the last combination */
            if (num1 != 98 || num2 != 99)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return (0);
}

