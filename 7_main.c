//202510303232
//1078662231@qq.com
//何熙
#include<stdio.h>
int main()
{
    int arr[5];
    for(int i = 0;i < 4;i++)
    {
        int num;
        num = i + 1;
        scanf("%d+1",&arr[num]);
    }
    arr[0] = 0;
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
