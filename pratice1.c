#include<stdio.h>
#include<math.h>
void main() {
	int figure , Fa = 1;	//定义变量
	float  Fb = 0.0, sum = 0.0, box = 0.0;
	for (figure = 1; (1.0 / (2 * figure - 1)) >= 1e-4; figure++) {
		Fa = pow(-1, figure + 1);	//Fa定义符号，奇数时是正，偶数时是负
		Fb = 1.0 / (2 * figure - 1);	//每个项的值
		box = Fa * Fb;			//这里承载项
		sum += box;		//做累加
	}
	printf("派最后的近似值是：%f\n", sum * 4);	//得出结果

}