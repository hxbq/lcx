//202510303232
//1078662231@qq.com
//何熙
#include<stdio.h>
void one(int *ptr_arr,int len)
{
    for(int i = len - 1;i > 0;i--)
    {
        *(ptr_arr + i) = *(ptr_arr + i - 1);
    }
    *ptr_arr = 0;
}
int main()
{
    int arr[5];
    for(int i = 0;i < 5;i++)
    {
        scanf("%d",&arr[i]);
    }
    one(arr,5);
    for(int i = 0;i < 5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
