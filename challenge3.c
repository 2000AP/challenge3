#include <stdio.h>
int common(int n1, int n2);
int main()
{
    int n1, n2, result;
    printf("\n\n\t\tWelcome! to LCM calculator\n\n");
    printf("Input First Number: ");
    scanf("%d", &n1);
    printf("Input Second Number: ");
    scanf("%d", &n2);
    result = common(n1, n2);
    printf("LCM of %d and %d = %d", n1, n2, result);
    return 0;
}

int common(int n1, int n2)
{
    static int n = 1;
    if (n % n1 == 0 && n % n2 == 0) // when both the modulus become 0 then only it gives the correct answer .
    {
        return n;
    }
    else
    {
        n++;
        common(n1, n2);
        return n;
    }
}
