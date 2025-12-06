//202510303232
//1078662231@qq.com
//何熙
#include<stdio.h>
void one(int *arr,int len)
{
    int *p = arr;
    for(int i = 0;i < len;i++)
    {
        (*p)++;
        p++;
    }
}
int main()
{
    int arr[5];
    int i;
    for(i = 0;i < 5;i++)
    {
        scanf("%d",&arr[i]);
    }
    one(arr,5);
    for(i = 0;i < 5;i++)
    {
        if(i == 0)
        {
            printf("%d",arr[i]);
        }
        else
        {
            printf(" %d",arr[i]);
        }
    }
    return 0;
}
