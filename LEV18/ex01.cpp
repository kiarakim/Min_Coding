#include<iostream>
#include<cstring> // 라이브러리 : 남들이 쓰라고 만들어 놓은 소스코드 및 함수
using namespace std;
//strlen(A) 문자열 길이 
//strcmp(A,B) 문자열 0이면 같다고 알려줌

int main() {

	//cout << strlen(arr1); //문자열 길이 구하기. <cstirng> include해야함

	//strcmp : string compare -> 같으면 0을 리턴한다.
	
	/*char arr[10];
	cin >> arr;

	int len = strlen(arr);

	for (int i = 0; i < len; i++)
		cout << arr[i] << " ";
	cout << endl;
	for(int i=len-1;i>=0;i--)
		cout << arr[i] << " ";*/
	
	char buf1[] = "ABC";
	char buf2[] = "ABC";
	if (!strcmp(buf1, buf2))cout << "O";
	else cout << "X";

	return 0;
}
