#include
using namespace std;
int main()
{
int n;
cout << "Enter number of rows to be printed\n"; cin >> n;
for (int i = 1; i <= n; ++i)	//for each row
{
for (int j = 0; j < n - i; ++j)	//for printing spaces
cout << " ";
for (int j = 1; j <= 2 *i - 1; ++j)	//for printing alphabets
cout << (char)('A' + j - 1);
cout << "\n";	//going to new line after completing one row
}
return 0;
}
