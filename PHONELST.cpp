#include <iostream>
#include <vector>

int main()
{
	int testCases;
	std::cin >> testCases;

	while (testCases--)
	{
		int phoneListLenght;
		std::vector<int> phoneList;
		std::cin >> phoneListLenght;
		
		while (phoneListLenght--)
		{
			int phoneNumber;
			std::cin >> phoneNumber;

			phoneList.push_back(phoneNumber);
		}
	}
}