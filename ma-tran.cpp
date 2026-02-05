#define SIZE 20
#include <stdio.h>

typedef struct MA_TRAN {
    int a[SIZE][SIZE];
    int d, c;
} MT;

void nhapMT(MT *a);
void xuatMT(MT a);

int main() {
    MT mt;
    nhapMT(&mt);
    xuatMT(mt);
    return 0;
}

void nhapMT(MT *a) {
    int i, j;
    printf("\nNhap so dong: ");
    scanf("%d", &a->d);

    printf("\nNhap so cot: ");
    scanf("%d", &a->c);

    for (i = 0; i < a->d; i++) {
        for (j = 0; j < a->c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a->a[i][j]);
        }
    }
}
void xuatMT(MT a){
    int i, j;
    printf("Ma tran vua nhap:\n");
    for(i = 0; i < a.d; i++){
        for(j = 0; j < a.c; j++){
            printf("%d", a.a[i][j]);
        }
        printf("\n");
    }
}


    	
