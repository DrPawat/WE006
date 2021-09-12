#include <stdio.h>
int power(int x, int n)
{
    int pow = 1;
    int i;
    for (i = 1; i < n; i++)
        pow = pow * x;
    return pow;
}
int main()
{
int x;
printf("Enter number : ");
scanf_s("%d", &x);
int i = 1, j = 1;
float x0 = 1.0;
float xn = 1.0;
for (i = 1, j = 1; i < x; i = i * 10, j++)
    if (x / i == 0)
        i = x;
i = i / 10;
j = j - 1;
if (j > 1)
x0 = j * power(10, j / 2);
int a;
for (a = 1; a <= 10; a++)
{
    xn = 0.5 * (x0 + (x / x0));
    x0 = xn;
}
printf("\nSquare root of %d is  %f", x, xn);

    }