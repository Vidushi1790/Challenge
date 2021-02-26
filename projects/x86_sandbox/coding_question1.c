#include <stdio.h>
#include <stdlib.h>

#include "coding_question1.h"

static const unsigned divide_by_zero = 0;

unsigned get_quotient(unsigned number, unsigned divide_by) {
  unsigned quotient = divide_by_zero;
  if (divide_by != divide_by_zero)
    quotient = number / divide_by;
  else {
    printf("ERROR! Wrong Input from the User divide_by(Zero)\r\n");
    exit(0);
  }

  return quotient;
}

unsigned get_remainder(unsigned number, unsigned divide_by) {
  unsigned remainder = divide_by_zero;
  if (divide_by != divide_by_zero)
    remainder = number % divide_by;
  else {
    printf("ERROR! Wrong Input from the User divide_by(Zero)\r\n");
    exit(0);
  }
  return remainder;
}

// Implement (with all possible error checks)
void divide(divider_s *answer, unsigned number, unsigned divide_by) {
  answer->quotient = get_quotient(number, divide_by);
  answer->remainder = get_remainder(number, divide_by);
}