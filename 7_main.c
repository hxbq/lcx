//202510303232
//1078662231@qq.com
//何熙
#include<stdio.h>
void arrayone(int arr[],int len)
{
    for(int i = 0;i < len / 2;i++)
    {
    int temp = arr[i];
    arr[i] = arr[len - i - 1];
    arr[len - i - 1] = temp;
    }
}
int main()
{
    int arr[5];
    int lenth = 5;
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }
    arrayone(arr,lenth);
    for(int i = 0;i < 5;i++)
    {
        if(i != 0)
        {
            printf(" ");
        }
        printf("%d",arr[i]);
    }  
    return 0;
}
