#include <iostream>
#include <string>
using namespace  std;

bool IsKPeriodic(const string& str, int k) {
	int size = str.size();
	if (k < 1 || k > size || size % k != 0 || str.empty()) { // Проверяем k и длину строки (длина должна быть кратна k)
		cout << "String is not multiple of " << k << endl;
		return false;
	}
	string substr = str.substr(0, k); // Определяем начальную подстроку длиной k
	for (int i = k; i < size; i += k) { // Сдвигаемся на k символов и сравниваем текущую подстроку с начальной
		if (str.substr(i, k) != substr) {
			cout << "String is not multiple of " << k << endl;
			return false;
		}
	}
	cout << "String is multiple of " << k << endl;
	return true;
}


int main(int argc, char* argv[])
{
	string str = "abcabcabcabcabcabc";
	cout << "string = \"" << str << "\"" << endl << endl;

	IsKPeriodic(str, 1); // String is not multiple of 1
	IsKPeriodic(str, 2); // String is not multiple of 2
	IsKPeriodic(str, 3); // String is multiple of 3
	IsKPeriodic(str, 4); // String is not multiple of 4
	IsKPeriodic(str, 5); // String is not multiple of 5
	IsKPeriodic(str, 6); // String is multiple of 6
	IsKPeriodic(str, 7); // String is not multiple of 7
	IsKPeriodic(str, 8); // String is not multiple of 8
	IsKPeriodic(str, 9); // String is multiple of 9
	IsKPeriodic(str, 18); // String is multiple of 18 Строка кратна сама себе

	str = "abcdabcdabcdabcdabcdabcd";
	cout << endl << "string = \"" << str << "\"" << endl << endl;

	IsKPeriodic(str, 1); // String is not multiple of 1
	IsKPeriodic(str, 2); // String is not multiple of 2
	IsKPeriodic(str, 3); // String is not multiple of 3
	IsKPeriodic(str, 4); // String is multiple of 4
	IsKPeriodic(str, 5); // String is not multiple of 5
	IsKPeriodic(str, 6); // String is not multiple of 6
	IsKPeriodic(str, 7); // String is not multiple of 7
	IsKPeriodic(str, 8); // String is multiple of 8
	IsKPeriodic(str, 9); // String is not multiple of 9

	return 0;
}
