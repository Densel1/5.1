

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	vector <int> v = { 4, 7, 9, 14, 12 };
	cout << "Входные данные:";
	for_each(v.begin(), v.end(),
		[=](int i) mutable { cout << " " << i ;  });

	cout << endl << "Выходные данные:";
	for_each(v.begin(), v.end(),
		[=](int i) mutable {int d = 3, j = 0; cout << " " << i+(i%2!=0)*(d-1)*i;  });

	return 0;
}