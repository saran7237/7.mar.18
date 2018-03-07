#include<stdio.h>
void main()
{
    int a[10],n;
    scanf("%d",&n);
    printf("\n the array  is");
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf(" %d",&a[i]);
        printf("\n  %d",a[i]);
}
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            { int t;
                t=a[i];
                getch();
                }
                }
