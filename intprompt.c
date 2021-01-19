#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

/* Declare a buffer for user input of size 2048 */
static char input[2048];

int main(int argc, char** argv) {
  /* Print version and Exit Information */
  puts("Lispy Version 0.0.1");
  puts("Press Ctrl+c to Exit\n");

  /* Never ending loop */
  while (1) {

    char* input = readline("lispy> ");

    add_history(input);

    printf("No you're a %s", input);

    free(input)
  }
  return 0;
}
