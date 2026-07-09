//Name: shravani rajkumar gholap
//PRN:-2503033111372032
#include<stdio.h>
int main(){
    int a,b,add, sub, div, mul, modulus;
    float division;

    printf("Enter First Number: "); 
    scanf("%d",&a);
   
    printf("Enter Second Number: "); 
    scanf("%d",&b);

    add= a+b;
    printf("Sum: %d\n", add);

    sub= a-b;
    printf("Difference: %d\n", sub);

    mul= a*b;
    printf("Product: %d\n",mul);

    division=(float)a /b;
    printf("Quotient: %d\n",div);

    modulus=a % b;
    printf("Modulus: %d\n", modulus);

    return 0;
}    