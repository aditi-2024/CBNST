#include <stdio.h>
#include <stdlib.h>
float fun(float x,float y)
{
    return x+y;
}
float function(float x,float y,float h)
{
    return h*fun(x,y);
}
int main()
{
    float x0,y0,k1,k2,k3,k4,x,h;
    printf("enter the value of x0 and y0:\n");
    scanf("%f %f",&x0,&y0);
    printf("enter the value of x:");
    scanf("%f",&x);
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    h=(float)(x-x0)/n;
    float arr[n];
    float arr1[n];
    arr[0]=x0;
    arr1[0]=y0;
    for (int i=0;i<n;i++)
    {
        k1=function(arr[i],arr1[i],h);
        k2=function(arr[i]+(h/2),arr1[i]+(k1/2),h);
        k3=function(arr[i]+(h/2),arr1[i]+(k2/2),h);
        k4=function(arr[i]+(h),arr1[i]+(k3),h);
        arr[i+1]=arr[i]+h;
        arr1[i+1]=arr1[i]+(float)(k1+2*k2+2*k3+k4)/6;
    }
    for(int i=0;i<=n;i++)
    {
        printf("\nX%d:%f    Y%d:%f",i,arr[i],i,arr1[i]);
        printf("\n");
    }
    return 0;
}
