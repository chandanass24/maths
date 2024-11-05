#include <stdio.h>


int hcf(int num1, int num2);    
int lcm(int num1, int num2);    
int main() {
    int num1, num2, hcfResult, lcmResult;

   
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    
    hcfResult = hcf(num1, num2);
    lcmResult = lcm(num1, num2);

   
    printf("HCF of %d and %d: %d\n", num1, num2, hcfResult);
    printf("LCM of %d and %d: %d\n", num1, num2, lcmResult);

    return 0;
}
int hcf(int num1,int num2)
{
    while(num1!=num2)
{
if(num1>num2)
    num1-=num2;
else
    num2-=num1;
}
return num1;
}
