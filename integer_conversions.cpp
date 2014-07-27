#include <iostream>
using namespace std;

int main()
{
	unsigned int x;
	int y = std::numeric_limits<unsigned int>::max();
	x = y;
	cout<<x<<endl;
	cout<<y<<endl;
	return 0;
}