#include<stdio.h>
int main()
{
    int max,i,j;
    int a[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
           scanf("%d",&a[i][j]);
        }

    }
    max=a[0][0];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j)
            {
                if(max<a[i][j])
                {
                    max=a[i][j];
                }
            }

        }


    }
    printf("Max= %d ",max);

}

