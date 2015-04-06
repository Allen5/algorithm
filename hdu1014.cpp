//hdu acm problem. water
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

char res[100000] = {0};

bool is_find(int init, int step, int mod)
{
  memset(&res, 0, sizeof(res));
  bool isFind = true;

  res[init] = 1;

  int num = init;
  for ( int i=0; i<mod; i++) {

    int num = (num+step) % mod;

    if ( num == init ) break;
    if ( res[num] == 1 ) break;
    
    res[num] = 1;

  }

  for ( int i=0; i<mod; i++) {
    if ( res[i] != 1 ) { isFind = false; break; }
  }

  return isFind;

}

int main(int argc, char** argv)
{

  int step = 0, mod = 0;
  while ( cin >> step >> mod ) {

    bool isFind = false;
    for ( int i=0; i<mod; i++) {
      isFind = is_find(i, step, mod);
      if ( isFind ) { break; }
    }

    printf("%10d%10d    ", step, mod);
    if ( !isFind ) printf("Bad Choice\n\n");
    else           printf("Good Choice\n\n");

  }

  return 0;
}
