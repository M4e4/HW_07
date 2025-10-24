#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
	std::string str{ "Hello world!" };
	std::map<char, int> map;
	std::vector<std::pair<char, int>> vec;

	std::cout << "[IN]: " << str << "\n[OUT]:\n";

	for (auto ch : str)
	{
		++map[ch];
	}

	for (auto [ch, count] : map)
	{
		vec.emplace_back(ch, count);
	}

	std::sort(vec.begin(), vec.end(), [](auto& a, auto& b)
		{
			return a.second < b.second;
		});

	for (auto [ch, count] : vec)
	{
		std::cout << ch << ": " << count << std::endl;
	}

	return EXIT_SUCCESS;
}