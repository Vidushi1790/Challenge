#pragma once
#include <stdio.h>

typedef struct {
  unsigned time_remaining;
  unsigned timer_reload_value;
  void (*callback)(void);
} timer_s;

void question_two(void);
void timer_0_callback(void);
void timer_1_callback(void);
void timer_periodic_task(timer_s *timers, size_t timers_array_size);
