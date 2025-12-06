//202510303232
//1078662231@qq.com
//何熙
#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    for(i = 0;i < 5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p = arr;
    for(i = 0;i < 5;i++)
    {
        *p *= 2;
        *p++;
    }
     for(i = 0;i < 5;i++)
     {
        if(i == 0)
        {
            printf("%d",arr[i]);
        }
        else{
            printf(" %d",arr[i]);
        }
     }
     return 0;
}
