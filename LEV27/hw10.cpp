//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//int A[3][3] = {
//	2,6,3,
//	7,1,1,
//	3,4,2
//};
//
//int B[2][4] = {
//	6,4,2,4,
//	1,1,5,8
//};
//
//int C[2][3] = {
//	9,2,3,
//	4,2,1
//};
//
//int D[3][3] = { 0 };
//int dy = 0;
//int dx = 0;
//
//void setA() {
//	int max = -1;
//	int My, Mx;
//	for (int y = 0; y < 3; y++) {
//		for (int x = 0; x < 3; x++) {
//			if (max < A[y][x]) {
//				max = A[y][x];
//				My = y;
//				Mx = x;
//			}
//		}
//	}
//	D[dy][dx++] = max;
//	A[My][Mx] = 0;
//}
//
//void setB() {
//	int min = 99;
//	int my, mx;
//	for (int y = 0; y < 2; y++) {
//		for (int x = 0; x < 4; x++) {
//			if (min > B[y][x]) {
//				min = B[y][x];
//				my = y;
//				mx = x;
//			}
//		}
//	}
//	D[dy][dx++] = min;
//	B[my][mx] = 99;
//}
//
//void setC() {
//	int max = -1;
//	int My, Mx;
//	for (int y = 0; y < 2; y++) {
//		for (int x = 0; x < 3; x++) {
//			if (max < C[y][x]) {
//				max = C[y][x];
//				My = y;
//				Mx = x;
//			}
//		}
//	}
//	D[dy][2] = max;
//	C[My][Mx] = 99;
//	for (int i = 0; i < 2; i++) {
//		int min = 99;
//		int my, mx;
//		for (int y = 0; y < 2; y++) {
//			for (int x = 0; x < 3; x++) {
//				if (min > C[y][x]) {
//					min = C[y][x];
//					my = y;
//					mx = x;
//				}
//			}
//		}
//		D[dy][dx++] = min;
//		C[my][mx] = 99;
//	}
//}
//
//int main() {
//
//	for (int i = 0; i < 3; i++)
//		setA();
//	dy++;
//	dx = 0;
//	for (int i = 0; i < 3; i++)
//		setB();
//	dy++;
//	dx = 0;
//	setC();
//
//	for (int y = 0; y < 3; y++) {
//		for (int x = 0; x < 3; x++)
//			cout << D[y][x] << ' ';
//		cout << endl;
//	}
//
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main() {
//	int A[3][3] = {
//		2,6,3,
//		7,1,1,
//		3,4,2
//	};
//	int B[2][4] = {
//		6,4,2,4,
//		1,1,5,8
//	};
//	int C[2][3] = {
//		9,2,3,
//		4,2,1
//	};
//	int arr[3][3];
//	int x, y;
//	for (int i = 0; i < 3; i++) {
//		for (x = 0; x < 3; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 3; y++) {
//				if (A[0][i] < A[x][y]) {
//					int tmp = A[0][i];
//					A[0][i] = A[x][y];
//					A[x][y] = tmp;
//				}
//			}
//		}
//		arr[0][i] = A[0][i];
//		for (x = 0; x < 2; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 4; y++) {
//				if (B[0][i] > B[x][y]) {
//					int tmp = B[0][i];
//					B[0][i] = B[x][y];
//					B[x][y] = tmp;
//				}
//			}
//		}
//		arr[1][i] = B[0][i];
//		for (x = 0; x < 2; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 3; y++) {
//				if (i == 2) {
//					if (C[0][2] < C[x][y]) {
//						int tmp = C[0][2];
//						C[0][2] = C[x][y];
//						C[x][y] = tmp;
//					}
//				}
//				else {
//					if (C[0][i] > C[x][y]) {
//						int tmp = C[0][i];
//						C[0][i] = C[x][y];
//						C[x][y] = tmp;
//					}
//				}
//			}
//		}
//		arr[2][i] = C[0][i];
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << arr[i][j] << ' ';
//		}
//		cout << endl;
//	}
//
//	return 0;
//}#include<iostream>
//using namespace std;
//int main() {
//	int A[3][3] = {
//		2,6,3,
//		7,1,1,
//		3,4,2
//	};
//	int B[2][4] = {
//		6,4,2,4,
//		1,1,5,8
//	};
//	int C[2][3] = {
//		9,2,3,
//		4,2,1
//	};
//	int arr[3][3];
//	int x, y;
//	for (int i = 0; i < 3; i++) {
//		for (x = 0; x < 3; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 3; y++) {
//				if (A[0][i] < A[x][y]) {
//					int tmp = A[0][i];
//					A[0][i] = A[x][y];
//					A[x][y] = tmp;
//				}
//			}
//		}
//		arr[0][i] = A[0][i];
//		for (x = 0; x < 2; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 4; y++) {
//				if (B[0][i] > B[x][y]) {
//					int tmp = B[0][i];
//					B[0][i] = B[x][y];
//					B[x][y] = tmp;
//				}
//			}
//		}
//		arr[1][i] = B[0][i];
//		for (x = 0; x < 2; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 3; y++) {
//				if (i == 2) {
//					if (C[0][2] < C[x][y]) {
//						int tmp = C[0][2];
//						C[0][2] = C[x][y];
//						C[x][y] = tmp;
//					}
//				}
//				else {
//					if (C[0][i] > C[x][y]) {
//						int tmp = C[0][i];
//						C[0][i] = C[x][y];
//						C[x][y] = tmp;
//					}
//				}
//			}
//		}
//		arr[2][i] = C[0][i];
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << arr[i][j] << ' ';
//		}
//		cout << endl;
//	}
//
//	return 0;
//}#include<iostream>
//using namespace std;
//int main() {
//	int A[3][3] = {
//		2,6,3,
//		7,1,1,
//		3,4,2
//	};
//	int B[2][4] = {
//		6,4,2,4,
//		1,1,5,8
//	};
//	int C[2][3] = {
//		9,2,3,
//		4,2,1
//	};
//	int arr[3][3];
//	int x, y;
//	for (int i = 0; i < 3; i++) {
//		for (x = 0; x < 3; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 3; y++) {
//				if (A[0][i] < A[x][y]) {
//					int tmp = A[0][i];
//					A[0][i] = A[x][y];
//					A[x][y] = tmp;
//				}
//			}
//		}
//		arr[0][i] = A[0][i];
//		for (x = 0; x < 2; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 4; y++) {
//				if (B[0][i] > B[x][y]) {
//					int tmp = B[0][i];
//					B[0][i] = B[x][y];
//					B[x][y] = tmp;
//				}
//			}
//		}
//		arr[1][i] = B[0][i];
//		for (x = 0; x < 2; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 3; y++) {
//				if (i == 2) {
//					if (C[0][2] < C[x][y]) {
//						int tmp = C[0][2];
//						C[0][2] = C[x][y];
//						C[x][y] = tmp;
//					}
//				}
//				else {
//					if (C[0][i] > C[x][y]) {
//						int tmp = C[0][i];
//						C[0][i] = C[x][y];
//						C[x][y] = tmp;
//					}
//				}
//			}
//		}
//		arr[2][i] = C[0][i];
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << arr[i][j] << ' ';
//		}
//		cout << endl;
//	}
//
//	return 0;
//}#include<iostream>
//using namespace std;
//int main() {
//	int A[3][3] = {
//		2,6,3,
//		7,1,1,
//		3,4,2
//	};
//	int B[2][4] = {
//		6,4,2,4,
//		1,1,5,8
//	};
//	int C[2][3] = {
//		9,2,3,
//		4,2,1
//	};
//	int arr[3][3];
//	int x, y;
//	for (int i = 0; i < 3; i++) {
//		for (x = 0; x < 3; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 3; y++) {
//				if (A[0][i] < A[x][y]) {
//					int tmp = A[0][i];
//					A[0][i] = A[x][y];
//					A[x][y] = tmp;
//				}
//			}
//		}
//		arr[0][i] = A[0][i];
//		for (x = 0; x < 2; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 4; y++) {
//				if (B[0][i] > B[x][y]) {
//					int tmp = B[0][i];
//					B[0][i] = B[x][y];
//					B[x][y] = tmp;
//				}
//			}
//		}
//		arr[1][i] = B[0][i];
//		for (x = 0; x < 2; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 3; y++) {
//				if (i == 2) {
//					if (C[0][2] < C[x][y]) {
//						int tmp = C[0][2];
//						C[0][2] = C[x][y];
//						C[x][y] = tmp;
//					}
//				}
//				else {
//					if (C[0][i] > C[x][y]) {
//						int tmp = C[0][i];
//						C[0][i] = C[x][y];
//						C[x][y] = tmp;
//					}
//				}
//			}
//		}
//		arr[2][i] = C[0][i];
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << arr[i][j] << ' ';
//		}
//		cout << endl;
//	}
//
//	return 0;
//}#include<iostream>
//using namespace std;
//int main() {
//	int A[3][3] = {
//		2,6,3,
//		7,1,1,
//		3,4,2
//	};
//	int B[2][4] = {
//		6,4,2,4,
//		1,1,5,8
//	};
//	int C[2][3] = {
//		9,2,3,
//		4,2,1
//	};
//	int arr[3][3];
//	int x, y;
//	for (int i = 0; i < 3; i++) {
//		for (x = 0; x < 3; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 3; y++) {
//				if (A[0][i] < A[x][y]) {
//					int tmp = A[0][i];
//					A[0][i] = A[x][y];
//					A[x][y] = tmp;
//				}
//			}
//		}
//		arr[0][i] = A[0][i];
//		for (x = 0; x < 2; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 4; y++) {
//				if (B[0][i] > B[x][y]) {
//					int tmp = B[0][i];
//					B[0][i] = B[x][y];
//					B[x][y] = tmp;
//				}
//			}
//		}
//		arr[1][i] = B[0][i];
//		for (x = 0; x < 2; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 3; y++) {
//				if (i == 2) {
//					if (C[0][2] < C[x][y]) {
//						int tmp = C[0][2];
//						C[0][2] = C[x][y];
//						C[x][y] = tmp;
//					}
//				}
//				else {
//					if (C[0][i] > C[x][y]) {
//						int tmp = C[0][i];
//						C[0][i] = C[x][y];
//						C[x][y] = tmp;
//					}
//				}
//			}
//		}
//		arr[2][i] = C[0][i];
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << arr[i][j] << ' ';
//		}
//		cout << endl;
//	}
//
//	return 0;
//}#include<iostream>
//using namespace std;
//int main() {
//	int A[3][3] = {
//		2,6,3,
//		7,1,1,
//		3,4,2
//	};
//	int B[2][4] = {
//		6,4,2,4,
//		1,1,5,8
//	};
//	int C[2][3] = {
//		9,2,3,
//		4,2,1
//	};
//	int arr[3][3];
//	int x, y;
//	for (int i = 0; i < 3; i++) {
//		for (x = 0; x < 3; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 3; y++) {
//				if (A[0][i] < A[x][y]) {
//					int tmp = A[0][i];
//					A[0][i] = A[x][y];
//					A[x][y] = tmp;
//				}
//			}
//		}
//		arr[0][i] = A[0][i];
//		for (x = 0; x < 2; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 4; y++) {
//				if (B[0][i] > B[x][y]) {
//					int tmp = B[0][i];
//					B[0][i] = B[x][y];
//					B[x][y] = tmp;
//				}
//			}
//		}
//		arr[1][i] = B[0][i];
//		for (x = 0; x < 2; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 3; y++) {
//				if (i == 2) {
//					if (C[0][2] < C[x][y]) {
//						int tmp = C[0][2];
//						C[0][2] = C[x][y];
//						C[x][y] = tmp;
//					}
//				}
//				else {
//					if (C[0][i] > C[x][y]) {
//						int tmp = C[0][i];
//						C[0][i] = C[x][y];
//						C[x][y] = tmp;
//					}
//				}
//			}
//		}
//		arr[2][i] = C[0][i];
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << arr[i][j] << ' ';
//		}
//		cout << endl;
//	}
//
//	return 0;
//}#include<iostream>
//using namespace std;
//int main() {
//	int A[3][3] = {
//		2,6,3,
//		7,1,1,
//		3,4,2
//	};
//	int B[2][4] = {
//		6,4,2,4,
//		1,1,5,8
//	};
//	int C[2][3] = {
//		9,2,3,
//		4,2,1
//	};
//	int arr[3][3];
//	int x, y;
//	for (int i = 0; i < 3; i++) {
//		for (x = 0; x < 3; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 3; y++) {
//				if (A[0][i] < A[x][y]) {
//					int tmp = A[0][i];
//					A[0][i] = A[x][y];
//					A[x][y] = tmp;
//				}
//			}
//		}
//		arr[0][i] = A[0][i];
//		for (x = 0; x < 2; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 4; y++) {
//				if (B[0][i] > B[x][y]) {
//					int tmp = B[0][i];
//					B[0][i] = B[x][y];
//					B[x][y] = tmp;
//				}
//			}
//		}
//		arr[1][i] = B[0][i];
//		for (x = 0; x < 2; x++) {
//			if (x == 0) y = i;
//			else y = 0;
//			for (; y < 3; y++) {
//				if (i == 2) {
//					if (C[0][2] < C[x][y]) {
//						int tmp = C[0][2];
//						C[0][2] = C[x][y];
//						C[x][y] = tmp;
//					}
//				}
//				else {
//					if (C[0][i] > C[x][y]) {
//						int tmp = C[0][i];
//						C[0][i] = C[x][y];
//						C[x][y] = tmp;
//					}
//				}
//			}
//		}
//		arr[2][i] = C[0][i];
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << arr[i][j] << ' ';
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

#include<iostream>
using namespace std;

int main() {
	int A[3][3] = {
		2,6,3,
		7,1,1,
		3,4,2
	};
	int B[2][4] = {
		6,4,2,4,
		1,1,5,8
	};
	int C[2][3] = {
		9,2,3,
		4,2,1
	};
	int arr[3][3];
	int x, y;
	for (int i = 0; i < 3; i++) {
		for (x = 0; x < 3; x++) {
			if (x == 0) y = i;
			else y = 0;
			for (; y < 3; y++) {
				if (A[0][i] < A[x][y]) {
					int tmp = A[0][i];
					A[0][i] = A[x][y];
					A[x][y] = tmp;
				}
			}
		}
		arr[0][i] = A[0][i];
		for (x = 0; x < 2; x++) {
			if (x == 0) y = i;
			else y = 0;
			for (; y < 4; y++) {
				if (B[0][i] > B[x][y]) {
					int tmp = B[0][i];
					B[0][i] = B[x][y];
					B[x][y] = tmp;
				}
			}
		}
		arr[1][i] = B[0][i];
		for (x = 0; x < 2; x++) {
			if (x == 0) y = i;
			else y = 0;
			for (; y < 3; y++) {
				if (i == 2) {
					if (C[0][2] < C[x][y]) {
						int tmp = C[0][2];
						C[0][2] = C[x][y];
						C[x][y] = tmp;
					}
				}
				else {
					if (C[0][i] > C[x][y]) {
						int tmp = C[0][i];
						C[0][i] = C[x][y];
						C[x][y] = tmp;
					}
				}
			}
		}
		arr[2][i] = C[0][i];
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}