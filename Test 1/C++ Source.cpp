#include<iostream>
#include<array>
using namespace std;

array<int, 2000000> a, asc, des;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	asc[0] = 1;
	for (int i = 1; i < n; i++)
		if (a[i] > a[i - 1])
			asc[i] = asc[i - 1] + 1;
		else
			asc[i] = 1;

	des[n - 1] = 1;
	for (int i = n - 2; i >= 0; i--)
		if (a[i] > a[i + 1])
			des[i] = des[i + 1] + 1;
		else
			des[i] = 1;

	for (int i = 0; i < n; i++)
		cout << asc[i] + des[i] - 1 << " ";

	return 0;
}