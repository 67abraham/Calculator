#include <stdio.h>
#include <stdlib.h>

double number, secNumber;
char operator;
double result;

int calculation(){
    switch (operator)
    {
    case '+':
       result= number +secNumber;
       printf("Result: %.0f + %.0f =%.0f\n", number, secNumber,result);
        break;
    case '-':
        result = number - secNumber;
        printf("Result: %.0f - %.0f =%.0f\n", number, secNumber,result);
        break;
    case '*':
        result=number * secNumber;
        printf("Result: %.0f * %.0f =%.0f\n", number, secNumber,result);
        break;
    case '/':
       result=(float)number / (float)secNumber;
       if(secNumber==0){
        printf("Zero cannot not be divded, try again\n");
        break;
       }
       printf("Result: %lf / %lf =%.2f\n", number, secNumber,result);
        break;
    
    default:
    printf("Invaild Mathematic Operator: %c\n", operator);
        break;
    
    }

    // int calAgain;
    // printf(" Calculat Again 1/2: ");
    // scanf(" %d", &calAgain);
    // printf("call=%d", calAgain);
    // while(calAgain == 1 ){
    //     if(calAgain == 1 ){
    //       return  calculation();
    
    //     }else{
    //         printf("thank");
    //         break;
    //     }

    // }

    

    

    return 0;

};



int main(){

    printf("Please Choose operator ( *  +  -  / ):  ");
    scanf("%c", &operator);
    printf("Enter First Value: ");
    scanf("%lf", &number);
    printf("Enter Second Value: ");
    scanf("%lf", &secNumber);
    calculation();
    return 0;
}