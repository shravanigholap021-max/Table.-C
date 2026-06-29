//Name: shravani rajkumar gholap
//PRN:-2503033111372032
#include <stdio.h>
int main() {
    int pin=2108,E;
    printf("Enter Pin: ");
    scanf("%d",&E);
    
    if (E==pin){
        printf("correct Pin\n you may withdraw cash");
    }
    else {
        printf("incorrect pin");
    }
    return 0;
}