#include <iostream>
int mulsum (int RES, unsigned char plus)
{
        asm volatile (
                "mov %2, %%eax\n\t"
                "mov %1, %%ebx\n\t"
                "mulw %%ax\n\t"
                "add %%eax, %%ebx\n\t"
                "mov %%ebx, %0\n\t"
                :"=r"(RES)
                :"g"(RES), "g"(plus)
                :"%eax", "%ebx"
                );
        return RES;
}
int main()
{
        const unsigned char N = 12;
        unsigned char X[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
        int res = 0;
        for (unsigned char i = 0; i < N; i++)
        {
                res = mulsum(res, X[i]);
        }
        printf("%d\n", res);
}