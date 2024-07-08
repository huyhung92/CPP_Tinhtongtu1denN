#include <iostream>
using namespace std;
void main()
{
	int n;
	int sum = 0;
	cout << "nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		sum += i;
	cout << "tong cac so tu 1 den " << n << " la:  " << sum << "\n";
}
   
