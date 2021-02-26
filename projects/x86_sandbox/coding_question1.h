#pragma once

typedef struct {
  unsigned quotient;
  unsigned remainder;
} divider_s;

unsigned get_remainder(unsigned number, unsigned divide_by);
unsigned get_quotient(unsigned number, unsigned divide_by);
void divide(divider_s *answer, unsigned number, unsigned divide_by);
