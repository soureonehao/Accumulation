#include<stdio.h>
void main() {
	int M, N, R, box1, box2;	//定义变量
			printf("输入两位个数求公约数：");
			scanf_s("%d%d", &M, &N); //输入需要比较的数值
			if (M > N) {
				R = M % N;		//判断两数大小，满足前大后小
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
				printf("%d是两个数的最大公约数！", N);	//当两数之余为零时输出公约数
			}
			else
			{
				while (R != 0) {	//当余数不为零时循环遍历
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
				printf("%d是两个数的最大公约数！", N);

			}
		}
		
	

		
	
