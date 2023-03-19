#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    //  printf("%d",t);
    int hi;
    int H, D, N;

    for (int i = 0; i < t; i++)
    {
        hi = 0;
        scanf("%d %d %d", &N, &D, &H);
        //  printf("%d %d %d",N,D,H);
        int rain[N];
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &rain[j]);

            if (rain[j] > 0)
                
                    hi += rain[j];
            else if (rain[j] == 0)
            {
                if (hi >= D)
                    hi -= D;
                else
                    hi = 0;
            }

            if (hi > H)
            {
                printf("YES\n");
                break;
            }
        }

        //  for( int j)
        if (hi < H)
            printf("NO\n");
    }

    return 0;
}