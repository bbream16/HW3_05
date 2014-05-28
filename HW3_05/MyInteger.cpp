#include <iostream>
using namespace std;

class MyInteger
{
private:
	int value;

public:
	MyInteger(int value)
	{
		this->value = value;
	}
	int getValue() const
	{
		return value;
	}
//Check if even
	static bool isEven(int n)
	{
		return n % 2 == 0;
	}
	bool isEven() const
	{
		return isEven(this->value);
	}
	static bool isEven(const MyInteger& n)
	{
		return isEven(n.getValue());
	}
//Check if odd
	static bool isOdd(int n)
	{
		return n % 2 == 1;
	}
	bool isOdd() const
	{
		return isOdd(this->value);
	}
	static bool isOdd(const MyInteger& n)
	{
		return isOdd(n.getValue());
	}
//Check if prime
	bool isPrime() const
	{
		return isPrime(value);
	}
	static bool isPrime(const MyInteger& o)
	{
		return isPrime(o.getValue());
	}

	static bool isPrime(int num)
	{
		if (num == 1 || num == 2)
			return true;

		for (int i = 2; i <= num / 2; i++)
		{
			if (num%i == 0)
				return false;
		}
		return true;
	}

};

int main()
{
	MyInteger n1(5);
	cout << "n1 is even? " << n1.isEven() << endl;
	cout << "n1 is odd? " << n1.isOdd() << endl;
	cout << "5 is prime? " << n1.isPrime() << endl;

	return 0;
}