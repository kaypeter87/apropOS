#include <stdio.h>

/* Declare a buffer for user input of size 2048 */
static chart input[2048];

int main(int argc, char** argv) {
  /* Print version and Exit Information */
  puts("Lispy Version 0.0.1");
  puts("Press Ctrl+c to Exit\n");

  /* Never ending loop */
  while (1) {

    fputs("lispy> ", stdout);
    fgets(input, 2048, stdin);

    printf("No you're a %s", input);
  }
  return 0;
}
