#include<stdio.h>
void main() {
    int A[4],B[4],C[4],D[4],i;
    int ASUM = 0, BSUM = 0, CSUM = 0, DSUM = 0;
    printf("��A,B,C,D�������������ɣ�");
    printf("ABCD����������1��ʾ������0��ʾ������");
    
    for (i = 0; i <= 3; i++) {  //A����Cû������B��D����
        if (i == 0) {
            A[i] = 1;
            C[i] = 0;
            B[i] = 1;
            D[i] = 1;
        }       
        else if(i == 1) {//ACû������BD����
            A[i] = 0;
            C[i] = 0;
            B[i] = 1;
            D[i] = 1;
        }
        else if(i == 2) {//Aû������BCD����
            A[i] = 0;
            C[i] = 1;
            B[i] = 1;
            D[i] = 1;
        }
        else if (i == 3) {//ADû������BC����
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
    for (i = 0; i <= 3; i++) {//���������ܺ�
        ASUM += A[i];
        BSUM += B[i];
        CSUM += C[i];
        DSUM += D[i];
    }
        ASUM > BSUM ? printf("ABCD�ĸ�����A�������")//�Ƚ��������ɴ�С
        : BSUM > CSUM ? printf("ABCD�ĸ�����B�������")
        : CSUM > DSUM ? printf("ABCD�ĸ�����C�������")
        : printf("ABCD�ĸ�����D�������");
    }
    