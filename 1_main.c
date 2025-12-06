//202510303232
//1078662231@qq.com
//何熙
#include<stdio.h>
int main()
{
    int a = 0;
    scanf("%d",&a);
    int *p = &a;
    *p += 10;
    printf("%d,%d",a,*p);
    return 0;
}
