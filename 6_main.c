//202510303232
//1078662231@qq.com
//何熙
#include<stdio.h>
int main()
{
    int arr[5];
    int count = 0;
    while(count < 5)
    {
        int num;
        printf("请输入第%d个数字:",count + 1);
        scanf("%d",&num);
        if(num % 2 == 0)
        {
            arr[count] = num;
            count++;
        }
        else
        {
            printf("输入为奇数，请重新输入\n");
        }
    }
    for(int i = 0;i < 5;i++)
    {
        printf("%d",arr[i]);
        if(i != 4)
        {
            printf(" ");
        }
    }
    return 0;
}    
