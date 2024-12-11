#include<stdio.h>
int main()

{

    int i, j, cur, lastDigit, m, n;

    long fact, sum;

    printf("Enter lower and upper limit: ");

    scanf("%d%d", &m,&n);

    printf("Armstrong numbers between %d to %d are:\n", m,n);

    for(i=m; i<=n; i++)

    {

        cur = i;

        sum = 0;

        while(cur > 0)

        {

            fact = 1;

            lastDigit = cur % 10;

            for( j=1; j<=3; j++)

            {

                fact = fact * lastDigit;

            }

            sum += fact;

            cur /= 10;

        }

       if(sum == i)

        {

            printf("%d, ", i);

        }

    }

    return 0;

}

