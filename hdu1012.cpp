#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int get_factorial(int n)
{
  if (n == 0 || n == 1) return 1;
  else return get_factorial(n-1) * n;
}


double get_value (int n)
{
  double value = 0.0;
  for (int i=0; i<=n; i++) {
    value += 1.0 / static_cast<double>(get_factorial(i));
  }
  return value;
}

int main(int argc, char** argv)
{

  cout << "n e" <<endl;
  cout << "- -----------" << endl;

  //  cout << setprecision(10);
  for (int n=0; n<10; n++) {

    double value = get_value(n);
    //cout << n << " " << value << endl;
    if ( n == 0 ) printf("0 1\n");
    else if ( n == 1 ) printf("1 2\n");
    else if ( n == 2 ) printf("2 %0.1lf\n", value);
    else printf("%d %0.9lf\n", n, value);

  }

  return 0;
}
