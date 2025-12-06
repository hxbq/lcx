//202510303232
//1078662231@qq.com
//何熙
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *num_ptr = (int *)malloc(5 * sizeof(int));
    for(int i = 0;i < 5;i++)
    {
        scanf("%d",num_ptr + i);
    }
    for(int i = 0;i < 5;i++)
    {
        printf("%d ",*(num_ptr + i));
    }
    printf("\n");
    free(num_ptr);
    *num_ptr = NULL;
    return 0;
}
