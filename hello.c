#include <stdio.h>

void power(int* base, int exp)
{
    int b = *base;
    for (int i = 0; i < exp; i++)
    {

        *base *= b;
    }

    
}

int main() {
    int n = 4;
    int e = 3;

    power(&n, e);
    printf("%i\n", n);
    printf("%i\n", n);

}
