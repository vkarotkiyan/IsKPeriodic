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

	IsKPeriodic(str, 1);
	IsKPeriodic(str, 2);
	IsKPeriodic(str, 3);
	IsKPeriodic(str, 4);
	IsKPeriodic(str, 5);
	IsKPeriodic(str, 6);
	IsKPeriodic(str, 7);
	IsKPeriodic(str, 8);
	IsKPeriodic(str, 9);
	IsKPeriodic(str, 18); // Строка кратна сама себе

	str = "abcdabcdabcdabcdabcdabcd";
	cout << endl << "string = \"" << str << "\"" << endl << endl;

	IsKPeriodic(str, 1);
	IsKPeriodic(str, 2);
	IsKPeriodic(str, 3);
	IsKPeriodic(str, 4);
	IsKPeriodic(str, 5);
	IsKPeriodic(str, 6);
	IsKPeriodic(str, 7);
	IsKPeriodic(str, 8);
	IsKPeriodic(str, 9);

	return 0;
}
