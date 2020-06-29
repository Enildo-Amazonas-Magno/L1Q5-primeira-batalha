#include <stdio.h> 
int main()
{
    int number1, number2, number3;
    scanf("%d%d%d", &number1, &number2, &number3);
    if((number1>10)&&(number2%2==0||number3%2==0) && number2!=0 && number3!=0)    
    printf("Sim");
    else if((number2>10)&&(number1%2==0||number3%2==0)&& number1!=0 && number3!=0) 
    printf("Sim");
    else if((number3>10)&&(number1%2==0||number2%2==0)&& number1!=0 && number2!=0) 
    printf("Sim");
    else printf("Nao");
    return 0; 
}