//202510303232
//1078662231@qq.com
//何熙
#include<stdio.h>
int main()
{
    int a,b = 0;
    char op;
    scanf ("%d,%d,%c",&a,&b,&op);
    if(op == '+')
    {
        int C = a+b;
        printf("%d",C);
    }
    if(op == '-')
    {
        int D = a-b;
        printf("%d",D);
    }
    if(op == '*')
    {
        int E = a*b;
        printf("%d",E); 
    } 
    if(op == '/')
    {
        int F = a/b;
        printf("%d",F);
    }
    return 0;
}
