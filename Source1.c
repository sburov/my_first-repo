#include <stdio.h>
#define N 5
int main()
{
    int A[N] = { 2,3,5,2,3 };
    for (int i = 0; i < N; i++)
    {
        int s = 0;
        for (int k = 0; k < N; k++)
        {
            if ((A[i] == A[k]) && (i != k))
            {
                s = 1;
            }
        }
        if (s == 0) {
            printf("%d", A[i]);
        }
    }
    return 0;

}