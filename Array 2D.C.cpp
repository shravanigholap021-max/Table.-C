//Name: shravani rajkumar gholap
//PRN:-2503033111372032
#include<stdio.h>
int main(){ 
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={10,11,12,13,14,15,16,17,18};
    int c[3][3];
    int i,j;
        for(i=0;i<=2;i++){
            for(j=0;j<=2;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
            }
            printf("\n");
        }   
     return 0;
}        