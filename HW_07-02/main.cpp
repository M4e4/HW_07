#include <iostream>
#include <set>

int main()
{
	int count{};
	std::set<int, std::greater<int>> set;

	std::cout << "[IN]:\n";
	std::cin >> count;

	for (int i{}; i < count; ++i)
	{
		int item{};
		
		std::cin >> item;

		set.insert(item);
	}

	std::cout << "[OUT]:\n";

	for (auto item : set)
	{
		std::cout << item << '\n';
	}

	return EXIT_SUCCESS;
}