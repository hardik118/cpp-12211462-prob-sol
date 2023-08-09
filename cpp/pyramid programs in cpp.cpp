#include
using namespace std;
int main()
{
  int n;
  cout &lt;&lt; "Enter number of rows to be printed\n"; cin &gt;&gt; n;
  for (int i = 1; i &lt;= n; ++i)	//for each row
  {
    for (int j = 0; j &lt; n - i; ++j)	//for printing spaces
      cout &lt;&lt; " ";
    for (int j = 1; j &lt;= i; ++j)	//for printing star and space
      cout &lt;&lt; "*";
    cout &lt;&lt; "\n";	//going to new line after completing one row

  }
  return 0;
}
