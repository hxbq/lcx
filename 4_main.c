//202510303232
//1078662231@qq.com
//何熙
#include<stdio.h>
int one(int a1,int an,int step)
{
    int n;
    n = (an - a1) / step + 1;
    return (a1 + an) * n / 2;
}
int main()
{
    int result = one(1,100,1);
    printf("%d",result);
    return 0;
}
