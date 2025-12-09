#include <stdio.h>
#include "my_math.h"

//정수 변수 값이 주소를 넘겨주면 해당
// 값이 음수이면 양수로 변환하는 함수
void MyAbs(int* p) {
	//전달된 주소에 있는 값이 음수이면
	//-1을 곱해서 양수로 만듦
	if (*p < 0)*p = (*p) * (-1);
}

int main(void) {
	int x = -3, y = -2;
	int sum = Sum(x, y, MyAbs, NULL);
	int sub = Sub(x, y, MyAbs, MyAbs);
	int mul = Mul(x, y, NULL, NULL);
	int div = Div(x, y, NULL, MyAbs);
	int rem = Rem(x, y, MyAbs, NULL);

	printf("|%d| + %d = %d\n", x, y, sum);
	printf("|%d| - |%d| = %d\n", x, y, sub);
	printf("%d * %d = %d\n", x, y, mul);
	printf("%d / |%d| = %d\n", x, y, div);
	printf("|%d| %% %d = %d\n", x, y, rem);
}