//202510303232
//1078662231@qq.com
//何熙
#include<stdio.h>
void one(int *arr,int n)
{
    for(int i = 0;i < n - 1;i++)
    {
        for(int j = 0;j < n - 1 - i;j++)
        {
            if(*(arr + j) > *(arr + j + 1))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
int main()
{
    int nums[10];
    for(int i = 0;i < 10;i++)
    {
        scanf("%d",nums + i);
    }
    one(nums,10);
     for(int i = 0;i < 10;i++)
    {
        printf("%d ",*(nums + i));
    }
    printf("\n");
    return 0;
}
