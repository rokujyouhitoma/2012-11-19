#include <stdio.h>
#include <stdlib.h>

#define N 4000

void reverse_i(int arry[], int length)
{
  int i,temp;

  for(i = 0; i < length / 2; i++)
        {
                temp = arry[i];
                arry[i] = arry[length - i - 1];
                arry[length - i - 1] = temp;
        }
}

int main(void)
{
        int i, j, count = 1, **a = NULL;
        a = calloc(N, sizeof(int*));

        for(i = 0; i < N; i++)
        {
                a[i] = calloc(N, sizeof(int*));
                for(j = 0; j < N; j++)
                {
                        a[i][j] = count++;
                }
        }

        for(i = 0; i < N; i++)
        {
                reverse_i(a[i], N);
        }

        printf("%d\n",a[N - 1][N - 1]);

        for(i = 0; i < N; i++)
        {
                free(a[i]);
        }
        free(a);
}
