#include <stdio.h>
int main()
{
    int salary[5],i,hour[5],j,n,bonus[5];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&salary[i]);
        scanf("%d",&hour[i]);
    }
    for (i=0;i<n;++i)
    {
        if (salary[i]>15000)
        {
            if (hour[i]>=5)
            {
                bonus[i]=salary[i]*0.08;
                printf("%d\n",salary[i]);
                printf("%d\n",hour[i]);
                printf("%d\n",bonus[i]);
            }
            else if (3<hour[i]<5)
            {
                bonus[i]=salary[i]*0.06;
                printf("%d\n",salary[i]);
                printf("%d\n",hour[i]);
                printf("%d\n",bonus[i]);
            }
            else
            {
                printf("%d\n",salary[i]);
                printf("%d\n",hour[i]);
                printf("no bonus\n");
            }    
        }
        else
        {
            if (hour[i]>3)
            {
                bonus[i]=1000;
                printf("%d\n",salary[i]);
                printf("%d\n",hour[i]);
                printf("%d\n",bonus[i]);
            }
            else
            {
                printf("%d\n",salary[i]);
                printf("%d\n",hour[i]);
                printf("no bonus\n");
            }
        }
    }
    return 0;
}