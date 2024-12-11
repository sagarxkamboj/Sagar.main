#include<stdio.h>
int main() {
    int No1, No2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &No1, &No2);

    sum = No1 + No2;      
    
    printf("%d + %d = %d", No1, No2, sum);
    return 0;
}
