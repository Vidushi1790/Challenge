#include <stdio.h>

#include "coding_question1.h"
#include "coding_question2.h"

void print_separator(void) { puts("----------------------------------"); }

int main(void) {
  print_separator();
  question_one();
  print_separator();
  question_two();
  print_separator();
  return 0;
}
