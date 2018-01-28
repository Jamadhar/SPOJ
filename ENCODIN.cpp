#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[100005];
	while (cin >> a)
	{
		int m, count, i = 0, k = 0;
		m = strlen(a);
		for (i = 0; i<m; i++)
		{
			count = 1;
			while (a[i] == a[i + 1])
			{
				count++;
				i++;
			}

			if (count <= 3)
			{

				for (k = 0; k<count; k++)
					cout << a[i];
			}
			else
			{
				cout << count << "!" << a[i];

			}

		}
		cout << "\n";
	}
	return 0;
}