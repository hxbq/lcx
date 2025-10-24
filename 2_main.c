//202510303232
//1078662231@qq.com
//何熙
#include<stdio.h>
int main()
{
    int score = 0;
    scanf ("%d",&score);
    if(89 < score &&score < 100)
    {
        printf("A");
    }
    if(80 <= score &&score < 90)
    {
        printf("B");
    }
    if(70 <= score &&score < 80)
    {
        printf("C");
    }
    if(60 <= score &&score < 70)
    {
        printf("D");
    }
    if(score < 60)
    {
        printf("E");
    }
    return 0;
}
