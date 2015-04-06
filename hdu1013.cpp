//hdu 1013.cpp. math: digit root of a number equals this number mod 9;
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
  char buf[2000] = {0};
  while ( scanf("%s", &buf), buf[0] != '0') {

    int result = 0;
    for (int i=0; i<strlen(buf); i++) {
      result += buf[i] - '0';
      if ( result > 9 ) result = result%10 + result/10; 
    }

    printf("%d\n", result);
  }
  return 0;
}
