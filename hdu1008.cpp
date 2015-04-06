
#include <iostream>

using namespace std;

int main (int argc, char** argv)
{

  int n = 0;
  while ( cin >> n, n != 0) {

    //input data
    int *num = new int[n];
    for (int i=0; i<n; i++) {
      cin >> num[i];
    }

    int second = n * 5;
    int cur = 0;
    
    for (int i=0; i<n; i++) {
      if ( cur - num[i] < 0 ) second += (num[i] - cur) * 6;
      else if ( cur - num[i] > 0 ) second += (cur - num[i]) * 4;
      cur = num[i];
    }
    
    cout << second << endl;

  }
  
  return 0;
}
