#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	vector<int> bit;
	int remainder;
	while (n > 0)
	{
		remainder = n % 2;
		n = n / 2;
		bit.push_back(remainder);
	}

	//couting 1s
	int count = 0;
	int max = 0;
	for (int i = 0; i < bit.size(); i++)
	{
		if (bit[i] == 1)
		{
			count++;
		}
		else
		{
			if (count > max)
			{
				max = count;
			}
			count = 0;
		}
	}

	if (count > max)
	{
		max = count;
	}

	cout << max << endl;
	cin >> n;
	return 0;
}
