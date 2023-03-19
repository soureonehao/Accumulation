#include<stdio.h>
void main() {
    int A[4],B[4],C[4],D[4],i;
    int ASUM = 0, BSUM = 0, CSUM = 0, DSUM = 0;
    printf("在A,B,C,D都有作案的嫌疑！");
    printf("ABCD作案动机：1表示作案，0表示无作案");
    
    for (i = 0; i <= 3; i++) {  //A作案C没作案，B，D作案
        if (i == 0) {
            A[i] = 1;
            C[i] = 0;
            B[i] = 1;
            D[i] = 1;
        }       
        else if(i == 1) {//AC没做案，BD作案
            A[i] = 0;
            C[i] = 0;
            B[i] = 1;
            D[i] = 1;
        }
        else if(i == 2) {//A没做案，BCD作案
            A[i] = 0;
            C[i] = 1;
            B[i] = 1;
            D[i] = 1;
        }
        else if (i == 3) {//AD没做案，BC作案
            A[i] = 0;
            C[i] = 1;
            B[i] = 1;
            D[i] = 0;
        } 
        if (i == 3) {
            printf("\n");
        }
        printf("A:%d B:%d C:%d %d",A[i], B[i], C[i], D[i]);
       
    }
    for (i = 0; i <= 3; i++) {//计算作案总和
        ASUM += A[i];
        BSUM += B[i];
        CSUM += C[i];
        DSUM += D[i];
    }
        ASUM > BSUM ? printf("ABCD四个人中A嫌疑最大")//比较作案嫌疑大小
        : BSUM > CSUM ? printf("ABCD四个人中B嫌疑最大")
        : CSUM > DSUM ? printf("ABCD四个人中C嫌疑最大")
        : printf("ABCD四个人中D嫌疑最大");
    }
    