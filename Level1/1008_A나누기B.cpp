/*
* �� ���� A�� B�� �Է¹��� ����, A/B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* ù° �ٿ� A�� B�� �־�����. (0 < A, B < 10)
* ù° �ٿ� A/B�� ����Ѵ�. ���� ����� ��°��� ������� �Ǵ� �������� 10^-9 �����̸� �����̴�.
* 10^-9 ������ ������ ����Ѵٴ� ���� �� �Ҽ� 9��° �ڸ������� ����϶�� ���� �ƴϴ�.
*/
#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	double answer;
	answer = (double)a / (double)b;

	cout << fixed;
	cout.precision(15);
	cout << answer << endl;
	return 0;
}