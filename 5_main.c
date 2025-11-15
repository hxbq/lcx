//202510303232
//1078662231@qq.com
//何熙
#include<stdio.h>
void power(int a, int b, int *result) 
{
    *result = 1;  
    for (int i = 0; i < b; i++) {
        *result *= a;  
    }
}

int main() 
{
    int sum = 0;
    int square; 
    for (int i = 1; i <= 5; i++) {
        power(i, 2, &square);  
        sum += square;        
    }
    
    printf("%d\n", sum);  
    return 0;
}
