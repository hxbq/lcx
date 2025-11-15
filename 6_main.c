///202510303232
//1078662231@qq.com
//何熙
#include<stdio.h>
int arrayone(int arr[],int le)
{
    int result1 = 0;
    for(int i = 0;i < le;i++)
    {
        result1 += arr[i];
    }
    return result1;
}
int arraytwo(int arr[],int le)
{
    int result2 = 1;
    for(int i = 0;i < le;i++)
    {
        result2 *= arr[i];
    }
    return result2;
}
int main()
{
    int arr[5];
    scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    int one = arrayone(arr,5);
    int two = arraytwo(arr,5);
    printf("%d %d",one,two);
    return 0;
}
