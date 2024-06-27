#include <iostream>
#include <map>


bool isPrime(int x)
{
	if (x == 1 || x == 0)
		return false;

	int i, result;
	for (i=2; i < x; i++)
	{
		result = x % i;
		if (result == 0)
			return false;
		else
			continue;
	}
	return true;
}

std::map<int,int> isTwin(int x, int y)
{
	std::map<int,int> twins;

	if (isPrime(x) && isPrime(y) && (x - y == 2 || y - x == 2))
	{
		twins[x] = y;
	}


	return twins;
}

int main()
{

	int i, input;

	std::cout << "The twin property will be searched for prime numbers up to the number you enter: " << std::endl;
	std::cin >> input;
	for (i=0; i < input; i++)
	{

		for (const auto& pair: isTwin(i, i+2))
		{
			std::cout << "(" << pair.first << "," << pair.second << ")" << std::endl;
		}
	}

	return 0;
}
