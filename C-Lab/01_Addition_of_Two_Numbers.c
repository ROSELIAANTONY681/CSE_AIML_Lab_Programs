/*
Algorithm:
1. Start.
2. Read two numbers from user a and b.
3. Add a & b and store the result in sum.
4. Display the sum.
5. Stop.
*/

#include <stdio.h>

int main()
{
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum = %d\n", sum);

    return 0;
}

/*
Enter two numbers: 10 20
Sum = 30
*/
