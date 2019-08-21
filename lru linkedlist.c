#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node*link;
};
struct node*root=NULL;
int search(int);
void insert(int);
void ex(int);
void display();
int main()
{
    int a[50],f=0,n,e,i,fault=0,t;
    printf("enter no.of elements");
    scanf("%d",&e);
    for(i=0;i<e;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the no.of frames");
    scanf("%d",&n);
    struct node*x;
    x=(struct node*)malloc(sizeof(struct node));
    x->data=a[0];
    x->link=NULL;
    root=x;
    printf("%d-->%d\n",x->data,root);
    fault++;
    f++;
    for(i=1;i<e;i++)
    {
        t=search(a[i]);
        if(t==0)
        {
            fault++;
            if(f<n)
            {
                insert(a[i]);
                f++;
                display();
            }
            else
            {
                root=root->link;
                insert(a[i]);
                display()
;            }
        }
        else
        {
            ex(a[i]);
            display();
        }
    }
       printf("no.of page faults are %d",fault);
}
int search(int a)
{
    int z=0;
    struct node*t=root;
    while(t->link!=NULL)
    {
        if(t->data==a)
        {
            z=1;
        }
        t=t->link;
    }
    if(z==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void insert(int a)
{
    struct node*t,*x;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=a;
    t->link=NULL;
    x=root;
    while(x->link!=NULL)
    {
        x=x->link;
    }
    x->link=t;
}
void ex(int a)
{
    struct node*x=root,*p=root;
    if(x->data==a)
    {
        p=p->link;
        root=p;
        insert(a);
    }
    else
    {
    while(x->data!=a)
    {
        p=x;
        x=x->link;
    }
    p->link=x->link;
    x->link=NULL;
    insert(a);
    }
}
void display()
{
       struct node*x=root;
       printf("root[%d]-->",x);
       while(x->link!=NULL)
       {
              printf("[%d,%d]\t",x->data,x->link);
              x=x->link;
       }
       printf("\n\n");
}
