#include <iostream>
using namespace std;
const int s = 10;
int arr[s] = { 0 };
void fill() {
	for (int i = 0; i < s; i++) {
		arr[i] = rand() % 100 + 1;
	}
}
void showarr() {
	for (int i = 0; i < s; i++) {
		if(arr[i] != 0)
			cout << arr[i] << "; ";
	}
}
void delarr(int num) {
	int t = 0;
	for (int j = 0; j < s; j++) {
		for (int i = 0; i < s; i++) {
			if (arr[i] == num) {
				while (i != s) {
					arr[i] = arr[i + 1];
					i++;
				}
			}
		}
	}
}
int main()
{
	srand(0);
	fill();
	showarr();
	int num = 0;
	cout << endl << "Enter num that u would like to del: ";
	cin >> num;
	delarr(num);
	showarr();
}