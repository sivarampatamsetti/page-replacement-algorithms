#include<stdio.h>
int main()
{
       int a[20],n,e,i,j,k,f=0,fault=0,max,s;
       printf("enter the no.of elements");
       scanf("%d",&e);
       for(i=0;i<e;i++)
       {
              scanf("%d",&a[i]);
       }
       printf("enter the no.of frames");
       scanf("%d",&n);
       int x[n],p[n];
       x[0]=a[0];
       f++;fault++;
       for(i=1;i<e;i++)
       {
              int z=0;
              for(j=0;j<f;j++)
              {
                     if(x[j]==a[i])
                     {
                            z=1;
                            break;
                     }
              }
              if(z==0)
              {
                     fault++;
                     if(f<n)
                     {
                            x[f]=a[i];
                            f++;
                     }
                     else
                     {
                            for(k=0;k<f;k++)
                            {
                                   p[k]=e+1;
                            }
                    for(k=0;k<f;k++)
                    {
                           for(s=i+1;s<e;s++)
                           {
                                  if(a[s]==x[k])
                                  {
                                         p[k]=s;
                                         break;
                                  }
                           }
                    }
                    max=-1;
                    for(k=0;k<f;k++)
                    {
                          if(p[k]>max)
                          {
                                 max=k;
                          }
                    }
                    x[max]=a[i];
                     }
              }
       }
       printf(" no.of page faults are %d",fault);
}
