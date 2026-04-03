#include <stdio.h>

void main() {
	int i;
	char string1[20] = "Dreams come true!" , string2[20]; // 배열 선언을 ","을 통해 할 수 있음
	char* ptr1, *ptr2; // 포인터 변수도 ","을 통해 선언 할 수 있음. 단 *을 붙여서 사용

	ptr1 = string1;
	printf("\n string1의 주소 = %u \t ptr1 = %u", string1, ptr1);
	printf("\n string1의 주소 = %u", &string1[0]);

	printf("\n string1: %s", string1);
	printf("\n ptr1: %s", ptr1);
	printf("\n ptr1+7: %s", ptr1+7); // 7번째 문자 이후의 문자열을 출력
	printf("\n string1: %s", &string1[7]);

	printf("\n\n ptr1+7 주소: %u \n\n", ptr1 + 7);

}