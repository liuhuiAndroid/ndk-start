#include <stdio.h>
#include <limits.h>

int main() {
  // <type> <name>;
  int value;

  // <type> <name> = <initialized value>
  int value_init = 3;

  value = 4;
  value_init = 5;

  printf("value: %d\n", value);

  value_init = value;

  printf("size of value: %d\n", sizeof(value));

  printf("address of value: %#x\n", &value);

  // key words 标识符 identifier
  // 1. a-zA-Z0-9_
  // 2. 数不能在第一个
  // 3*. Google code style, a-z_a-z，person_name
  float a_float3 = 3.14f;
  float a_float = 3.14f;
  return 0;
}
