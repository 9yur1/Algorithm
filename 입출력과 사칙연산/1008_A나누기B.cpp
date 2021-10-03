/*
* 두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.
* 첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
* 첫째 줄에 A/B를 출력한다. 실제 정답과 출력값의 절대오차 또는 상대오차가 10^-9 이하이면 정답이다.
* 10^-9 이하의 오차를 허용한다는 말은 꼭 소수 9번째 자리까지만 출력하라는 뜻이 아니다.
*/
#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	double answer;
	answer = (double)a / (double)b;

	cout << fixed; // 소수점 고정시켜 출력.
	cout.precision(15);	 // 소수점 아래 15째자리까지 출력하라.
	cout << answer << endl;
	//cout.unsetf(ios::fixed); // 소수점 고정 상태 해제 되어 정수부 포함 15자리 출력 
	return 0;
}
