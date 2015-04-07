#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

vector<int> number;

bool compare2(const int& a, const int& b)
{
  return a > b;
}

bool find_solution(int n)
{
  for ( vector<int>::iterator iter = number.begin(); iter != number.end(); iter++) {
    for ( vector<int>::iterator iter2 = number.begin(); iter2 != number.end(); iter2++) {
      if (*iter == *iter2) continue;
      for ( vector<int>::iterator iter3 = number.begin(); iter3 != number.end(); iter3++) {
	if (*iter == *iter3 || *iter2 == *iter3) continue;
	for ( vector<int>::iterator iter4 = number.begin(); iter4 != number.end(); iter4++) {
	  if (*iter == *iter4 || *iter2 == *iter4 || *iter3 == *iter4) continue;
	  for ( vector<int>::iterator iter5 = number.begin(); iter5 != number.end(); iter5++) {
	    if (*iter == *iter5 || *iter2 == *iter5 || *iter3 == *iter5 || *iter4 == *iter5) continue;
	    
	    int result = (*iter) - (*iter2)*(*iter2) + (*iter3)*(*iter3)*(*iter3) - (*iter4)*(*iter4)*(*iter4)*(*iter4) + (*iter5)*(*iter5)*(*iter5)*(*iter5)*(*iter5);
	    //	    int result = (*iter) - pow((*iter2), 2) + pow((*iter3), 3) - pow((*iter4), 4) + pow((*iter5), 5);
	    if (result == n) {
	      printf("%c%c%c%c%c\n", (*iter)+'A'-1, (*iter2)+'A'-1, (*iter3)+'A'-1, (*iter4)+'A'-1, (*iter5)+'A'-1);
	      return true;
	    }

	  }
	}
      }
    }
  }
  return false;
}

int main(int argc, char** argv)
{
  int n = 0;
  string word = "";
  word.resize(20);
  while ( cin >> n >> word ) {
    if (n == 0 && word == "END") break;

    number.clear();

    //init
    for (string::iterator iter = word.begin(); iter != word.end(); iter++) {
      number.push_back((*iter) - 'A' + 1);
    }
    std::sort(number.begin(), number.end(), compare2);

    if ( !find_solution(n) ) printf("no solution\n");//cout << "no solution" << endl;
  }
  return 0;
}
