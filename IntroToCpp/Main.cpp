#include <iostream>

void FizzBuzz(int num)
{
	std::cout << "Type a number: ";
	std::cin >> num;
	for (int i = 0; i <= num; i++)
	{
		if (i % 3 == false && i % 5 == false)
		{
			std::cout << "fizz-buzz " << i << std::endl;
		}
		else if (i % 3 == false)
		{
			std::cout << "fizz " << i << std::endl;
		}
		else if (i % 5 == false)
		{
			std::cout << "buzz " << i << std::endl;
		}
	}
}

int main()
{
	int num = 0;

	FizzBuzz(num);

	system("pause");
	return 1;
}