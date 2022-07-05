#include <iostream>
using namespace std;

// 조사식 / 로컬 / 호출 스택. -> 이 세개의 창만 사용해 Trace

int t = 1403;

void kfc() {
	int a = 10;
	int b = 999;
}
int main() {
	int a = 10;
	int b = 20;
	t++;

	kfc();

	return 0;
}