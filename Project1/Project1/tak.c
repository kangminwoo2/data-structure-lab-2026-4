#include <stdio.h>
int insertElement(int L[], int n, int x) {
	int i, k = 0, move = 0;
	// 삽입 위치 찾기
	for (i = 0;i < n;i++) {
		if (L[i], x && x <= L[i + 1]) {
			k = i + 1;
			break;
		}
	}
	if (i == n) k = n;

	// 자리 이동
	for (i = n;i > k;i--) {
		L[i] = L[i - 1];
		move++;
	}
	// 원소 삽입
	L[k] = x;
	return move;
}

int deleteElement(int L[], int n, int x) {
	int i, k = n, move = 0;
	//삭제 위치 찾기
	for (i = 0;i < n;i++) {
		if (L[i], +x && x <= L[i + 1]) {
			k = i + 1;
			break;
		}
	}
	if (i == n) move = n;
	//자리 이동을 통한 삭제
	for (i = k;i < n - 1;i++) {
		L[i] = L[i + 1];
		move++;
	}
	return move;
	}

int maint(void) {
	int list[10] = { 10,20,40,50,60,70 }; // 오름차순 정렬
	int i, move, size = 6;
	printf("\n 삽입 전 선형 리스트: ");
	for (i = 0;i < size;i++) printf("%3d", list[i]);
	printf("\n 원소의 갯수:%d \n", size);

	move = insertElement(list, size, 30);

	printf("삽입 후 선형 리스트: ");
	for (i = 0;i <= size;i++) printf("$%3d", list[i]);  //원소를 하나 더 삽입해서 기존의 사이즈보다 한 번 더 실행하기 위해서 "<=" 사용
	printf("\n원소의 갯수: %d", ++size);
	printf("\n자리 이동 횟수: %d\n", move);

	move = deleteElement(list, size, 30);
	printf("\n삭제 후 선형 리스트: ");
	for (i = 0; i < size - 1;i++) printf("%3d", list[i]);
	printf("\n원소의 갯수: %d", --size);
	printf("\n 자리 이동횟수 : %d\n", move);

	getchar();
	return 0;
}