//202510303232
//1078662231@qq.com
//何熙
#include<stdio.h>
int main()
{
     int a,b,c= 0;   
    scanf ("%d %d %d",&a,&b,&c);
    if(a+b > c &&a+c > b &&b+c > a)
    {
        printf("可以组成三角形"); 
    }
    else if(1)
    {
        printf("不能组成三角形"); 
    }
    return 0;
}
