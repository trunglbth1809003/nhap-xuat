#include <stdio.h>
#include <stdlib.h>

int main() {
    int tongsomon;
    printf(" tong so mon hoc can nhap:\n");
    scanf("%d", &tongsomon);
    int diemcacmon[tongsomon];

    for (int i = 0; i < tongsomon; i++) {
        printf(" vui long nhap gua tri cho phan tu thu %d\n", i + 1);
        scanf("%d", &diemcacmon[i]);

    }
    printf("\n in cac phan tu trong mang:\n");
    int tongdiem = 0;
    for (int j = 0; j < tongsomon; j++) {
        tongdiem += diemcacmon[j];
        printf(" gia tri cua phan tu thu %d la %d\n", j + 1, diemcacmon[j]);
    }
    printf(" diem trung binh cac mon cu ban la %.2f", (float) tongdiem / tongsomon);
    return 0;

}
