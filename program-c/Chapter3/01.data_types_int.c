#include <stdio.h>
#include <limits.h>

int main() {
  short short_int = 0;
  int i = 100;
  long long_int = 0;

  long long longlong_int = 0;

  unsigned int unsigned_int = 123;

  unsigned long unsigned_long = 111;

  printf("short int %d\n", short_int);
  printf("int in oct: %o\n", i);

  // d = decimal
  // x = hex
  // o = oct
  // hd%: short decimal
  // %d: decimal
  // %ld: long decimal
  // %lld: long long decimal
  // %hu: unsigned short decimal
  // \n: new line
  // size_t
  size_t size_of_int = sizeof(int);
  printf("short int: %d\n", sizeof(short int));
  printf("int: %d\n", sizeof(int));
  printf("long int: %d\n", sizeof(long int));
  printf("long long: %d\n", sizeof(long long int));

  printf("max int %d, min %d\n", INT_MAX, INT_MIN);
  printf("max int %ld, min %ld\n", LONG_MAX, LONG_MIN);
  printf("unsigned max int %u, unsigned min %d\n", UINT_MAX, 0);
  return 0;
}
