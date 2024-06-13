#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int i = 10 ,sum = 0;

	while(i >= 0)
	{
		sum += i; // 0+10+9+8+...+0 = 10*5+5
		--i;
	}
	cout << "sum: "<<sum << endl;

	return 0;
}