//202510303232
//1078662231@qq.com
//何熙
#include<stdio.h>
int main()
{
    int num,a,b,c;
    int count = 0;
    num = 100;
    while(num <= 999)
    {
        a = num / 100;
        b = (num / 10) % 10;
        c = num % 10;
        if(a*a*a + b*b*b + c*c*c == num)
        {
            if(count > 0)
            {
            printf(" ");
            }
            printf("%d",num);
            count++;
        }
        num++;
    }
    return 0;
}
