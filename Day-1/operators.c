#include<stdio.h>
int main(){
    int op1,op2;//declaration
    //op1=10;//initialization
    //op2=20;//initialization
    printf("Enter two values:");
    scanf("%d",&op1);
    scanf("%d",&op2);
    int sum,diff,prod,quo,rem;
    sum=op1+op2;
    diff=op2-op1;
    prod=op1*op2;
    quo=op1/op2;
    rem=op1%op2;
    printf("sum of %d and %d: %d\n",op1,op2,sum );
    printf("differemce of %d and %d: %d\n",op1,op2,diff );
    printf("product of %d and %d: %d\n",op1,op2,prod );
    printf("quotient of %d and %d: %d\n",op1,op2,quo);
    printf("reminder of %d and %d: %d\n",op1,op2,rem);
}


