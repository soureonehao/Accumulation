#include<stdio.h>
#include<math.h>
void main() {
	int figure , Fa = 1;	//�������
	float  Fb = 0.0, sum = 0.0, box = 0.0;
	for (figure = 1; (1.0 / (2 * figure - 1)) >= 1e-4; figure++) {
		Fa = pow(-1, figure + 1);	//Fa������ţ�����ʱ������ż��ʱ�Ǹ�
		Fb = 1.0 / (2 * figure - 1);	//ÿ�����ֵ
		box = Fa * Fb;			//���������
		sum += box;		//���ۼ�
	}
	printf("�����Ľ���ֵ�ǣ�%f\n", sum * 4);	//�ó����

}