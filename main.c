#include <stdio.h>
#include <stdlib.h>
float fun(float x,float y)
{
    return x+y;
}
int main()
{
    int x,x0,y0,n;
    printf("enter the value of x0 and y0:\n");
    scanf("%d %d",&x0,&y0);
    printf("enter the value of x:");
    scanf("%d",&x);
    printf("enter the value of n:");
    scanf("%d",&n);
    float h;
    h=(float)(x-x0)/n;
    float arr[n];
    float arr1[n];
    arr[0]=x0;
    arr1[0]=y0;
    for(int i=1;i<n;i++)
    {
        arr1[i]=arr1[i-1]+h*fun(arr[i-1],arr1[i-1]);
        arr[i]=arr[i-1]+h;
    }
    for (int i=0;i<=n;i++)
    {
        printf("X%d:%f  Y%d:%f",i,arr[i],i,arr1[i]);
        printf("\n");
    }
    return 0;
}
