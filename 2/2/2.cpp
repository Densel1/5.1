
#include <iostream>
#include <variant>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


variant<int, string, vector<int>> get_variant() {
	srand(time(nullptr));
	int random_variable = std::rand() % 3;

	variant<int, string, vector<int>> result;
	switch (random_variable)
	{
	case 0:
		result = 5;
		break;
	case 1:
		result = "string";
		break;
	case 2:
		result = vector<int>{ 1, 2, 3, 4, 5 };
		break;
	default:
		break;
	}
	return result;
}


int main()
{

	variant<int, string, vector<int>> myVariant = get_variant();

	if (holds_alternative<int>(myVariant))
	{
		auto my_integer = get<int>(myVariant);
		cout << " " << my_integer*2 << endl;;
	}

	else if (holds_alternative<string>(myVariant))
	{
		auto str = get<string>(myVariant);
		cout << " " << str << endl;
	}

	else
	{
		vector<int> my_vector = get<vector<int>>(myVariant);
		for_each(my_vector.begin(), my_vector.end(),
			[=](int i) mutable { cout << " " << i;  });
	}

	return 0;
}

