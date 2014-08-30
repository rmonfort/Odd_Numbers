#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
	for (size_t i = 1; i < 100; i++)
	{
		if (i % 2)
		{
			cout << i << endl;
		}
	}
	return 0;
}