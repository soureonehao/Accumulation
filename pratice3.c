#include<stdio.h>
void main() {
	int M, N, R, box1, box2;	//�������
			printf("������λ������Լ����");
			scanf_s("%d%d", &M, &N); //������Ҫ�Ƚϵ���ֵ
			if (M > N) {
				R = M % N;		//�ж�������С������ǰ���С
			}
			else if (M < N)
			{
				box1 = M;
				M = N;
				N = box1;
				R = M % N;
			}
			if (R == 0)
			{
				printf("%d�������������Լ����", N);	//������֮��Ϊ��ʱ�����Լ��
			}
			else
			{
				while (R != 0) {	//��������Ϊ��ʱѭ������
					if (R < N)
					{
						box2 = R;
						R = N;
						N = box2;
						R = R % N;
						continue;
					}
					else if (R > N) {
						R = R % N;
						continue;
					}
				}
				printf("%d�������������Լ����", N);

			}
		}
		
	

		
	
