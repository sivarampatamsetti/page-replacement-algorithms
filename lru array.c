#include<stdio.h>
int main()
{
    int n,i,e=0,fr,fault=0,a[50],s,j,k;
    printf("enter the no.of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the no.of frames");
    scanf("%d",&fr);
    int x[fr];
    x[0]=a[0];
    e++;
    fault++;
    for(i=1;i<n;i++)
    {
        int y=0;
        for(j=0;j<e;j++)
        {
            if(x[j]==a[i])
            {
                y=1;
                break;
            }
        }
        if(y==0)
        {
            fault++;
            if(e<fr)
            {
                x[e]=a[i];
                e++;
            }
            else
            {
                for(s=0;s<e;s++)
                {
                       x[s]=x[s+1];
                }
                x[s]=a[i];
            }
        }
        else
        {
            for(k=j;k<e;k++)
            {
                x[k]=x[k+1];
            }
            x[k]=a[i];
        }
    }
    printf("no.of faults is %d",fault);
return 0;
}
