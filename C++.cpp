# include<iostream>
using namespace std;

int main()
{
	int i, j, k;
	for (i = 0; i <= 2; i++)
	{
		for (k = 2; k > i; k--)
			cout<<" ";
			for (j = 1; j <= 2 * i + 1; j++)
				cout<<"*";
			cout<<"\n";
	}
	for (i = 3; i <= 4; i++)
	{
		for (k = 1; k <= i - 2; k++)
			cout<<" ";
		for (j = 1; j <= 9 - 2 * i; j++)
			cout<<"*";
		cout<<"\n";
	}
	system("pause");
	return 0;
}
