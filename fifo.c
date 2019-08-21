#include<stdio.h>
int main()
{

    int a[30],n,e,fa=0,i,j,k,f=0;
    printf("enter no of elements");
    scanf("%d",&e);
    for(i=0;i<e;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter no of frames");
    scanf("%d",&n);
    int x[n];
    fa++;
    f++;
    for(i=1;i<e;i++)
    {

        int z=0;
        for(j=0;j<n;j++)
        {

            if(x[j]==a[i])
            {
                z=1;
            }
        }
        if(z==0)
        {

            fa++;
            if(f<n)
            {
                x[f]=a[i];
                f++;
            }
            else{
                for(k=0;k<n-1;k++)
                {

                    x[k]=x[k+1];
                }
                x[k]=a[i];
            }
        }
    }
    printf("no of page faults are %d",fa);

}
