#include <stdio.h>
int main()
    {
        int n, j;
        int even=0;
        scanf("%d",&n);
        int arr[n];

        for(j = 0; j < n; j++)
        {
            scanf("%d",&arr[j]);
        }
        for(j = 0; j < n; j++)
        {

            if(arr[j] % 2 == 0)
            even++;
        }
            if(even== n)
            {
                printf("True");
            }
            else
            {
                printf("False");
            }
    }
