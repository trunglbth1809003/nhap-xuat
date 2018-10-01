#include <stdio.h>
#include <stdlib.h>
int doicho2so(int *controcuaA, int *controcuaB) {


    printf("gia tri cua x duoc truyen vao la %d\n", *controcuaA);
    printf("gia tri cua y duoc truyen vao la %d\n", * controcuaB);
    int tmp = *controcuaA;
    *controcuaA = *controcuaB;
    *controcuaB = tmp;
    printf("\n");
    printf(" gia tri cua x sau khi doi cho la %d\n", *controcuaA);
    printf(" gia tri cua y sau khi doi cho la %d\n", *controcuaB);
}

int main() {
    int a,b;
    printf( "vui long nhap a:\n");
    scanf("%d", &a);
    printf(" vui long nhap b:\n");
    scanf("%d", &b);
    if (a > b){
        doicho2so(&a,&b);
    }
    printf("ket qua cuoi cung:\n");
    printf("a=%d",a);
    printf("b=%d",b);
    return 0;
}