// Write a programme to print alphabet triangle pattern
#include <iostream>

using namespace std;

void pattern(int a)
{
  cout << "Output :\n";
  for (int i = 1; i <= a; i++)
  {
    int c = 65;
    for (int k = a; k > i; k--)
    {
      cout << " ";
    }
    for (int j = 1; j <= 2 * i - 1; j++)
    {
      if (j < i)
      {
        printf("%c", c);
        c++;
      }
      else
      {
        printf("%c", c);
        c--;
      }
    }
    cout << "\n";
  }
}

int main()
{
  int a;
  cout << "Input : ";
  cin >> a;
  pattern(a);
  return 0;
}
