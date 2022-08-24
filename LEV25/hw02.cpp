#include<iostream>
#include<string>
using namespace std;

void run(string article) {
	int a = 0;
	int b = 0;
	
	while (1) {
		a = article.find('[', b);
		b = article.find(']', a);
		if (a == -1) break;
		if ((b - a) == 6) {
			cout << article.substr(a, 7) << "\n";
			b++;
		}
	}
}

int main() {

	int n;
	string news[10];

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> news[i];

	for (int i = 0; i < n; i++)
		run(news[i]);



	return 0;
}