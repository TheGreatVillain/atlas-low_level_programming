#include <stdio.h>
#include <ctype.h>

int is_uppercase(char c) {
  return isupper(c);
}

int main() {
  char c;
  printf("Enter a character: ");
  scanf("%c", &c);

  if (is_uppercase(c)) {
    printf("The character is uppercase.\n");
  } else {
    printf("The character is not uppercase.\n");
  }

  return 0;
}
