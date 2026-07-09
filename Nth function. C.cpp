//Name: shravani rajkumar gholap
//PRN:-2503033111372032
#include <stdio.h>
int main() {
int num, p, i;
int ans = 1;
printf("Enter number: \t");
scanf("%d", &num);
printf("Enter power: \t");
scanf("%d", &p);
for(i = 1; i <= p; i++) {
ans = ans * num;
}
printf("Answer is %d\n", ans);
return 0;
}
    