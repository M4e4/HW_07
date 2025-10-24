#include <string>
#include <map>
#include <iostream>

int main()
{
	std::string str{ "Hello world!" };
	std::map<char, int> rawMap;

	for (auto ch : str)
	{
		++rawMap[ch];
	}

	std::multimap<int, char, std::less<int>> sortedMap;

	for (auto [ch, count] : rawMap)
	{
		sortedMap.insert({count, ch});
	}

	std::cout << "[IN]: " << str << "\n[OUT]:\n";

	for (auto [count, ch] : sortedMap)
	{
		std::cout << ch << ": " << count << std::endl;
	}

	return EXIT_SUCCESS;
}