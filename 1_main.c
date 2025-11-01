//202510303232
//1078662231@qq.com
//何熙
#include<stdio.h>
int isPrime(int num)
{
    if(num <= 1)
    {
        return 0;
    }
    if(num == 2)
    {
        return 1;
    }
    if(num % 2 == 0 )
    {
        return 0;
    }
    for(int i = 3; i*i <= num;i += 2 )
    {
        if(num % i == 0)
       {
            return 0;
        }
        return 1;
    }
}
int main()
{
    int n;
    scanf ("%d",&n);
    if(isPrime(n))
    {
        printf("密钥安全，密码设置成功");
    }
    else
    {
        printf("密钥不安全，请重新输入");
    }
    return 0;
}
