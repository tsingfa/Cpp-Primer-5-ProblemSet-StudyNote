#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int i = 50 ,sum = 0;

	while(i <= 100)
	{
		sum += i; // 0+50+51+...+100 = 150*25+75
		++i;	// 50、51、...、100
	}
	cout << "sum: "<<sum << endl;

	return 0;
}