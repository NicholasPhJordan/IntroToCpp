#include <iostream>



int main()
{
	std::cout << "Think of a number between 0 and 100" << std::endl;
	system("pause");
	system("cls");

	int min = 0;
	int max = 100;
	int input = 0;

	while (min <= max && input != 3)
	{
		int guess = (min + max) / 2;
		input = 0;
		std::cout << "Is this your number? " << guess << std::endl;
		std::cout << "1: Higher" << std::endl;
		std::cout << "2: Lower" << std::endl;
		std::cout << "3: Yes!" << std::endl;
		std::cin >> input;
		if (input == 1)
		{
			min = guess + 1;
		}
		else if (input == 2)
		{
			max = guess - 1;
		}
		else if (input == 3)
		{
			std::cout << "YAY!! I got it!!" << std::endl;

		}
	}

	if (input != 3)
		std::cout << "You dirty liar! I bet I did guess your number!" << std::endl;

	system("pause");
	return 1;
}