#include <iostream>
int main()
{
        const unsigned char N = 12;
        unsigned char X[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
        int res = 0;
        for (unsigned char i = 0; i < N; i++)                                                            {
                res = res + X[i] * X[i];
        }
        printf("%d\n", res);
}