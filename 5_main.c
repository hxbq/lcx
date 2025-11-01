//202510303232
//1078662231@qq.com
//何熙
#include<stdio.h>
int main()
{
    int arr[5];
    for(int i = 0;i < 4;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[4] = arr[0] + arr[1] + arr[2] + arr[3];
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
