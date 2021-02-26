#include "coding_question1.h"
#include "coding_question2.h"
#include <stdio.h>

static const unsigned number_to_be_divided = 123;
static const unsigned number_divided_by = 3;
static const int max_timer = 2;

void print_separator(void) { puts("----------------------------------"); }

void question_one(void) {
  divider_s result;
  divide(&result, number_to_be_divided, number_divided_by);

  printf("Quotient: %d\r\n", result.quotient);
  printf("Remainder: %d\r\n", result.remainder);
}

void question_two(void) {
  /* Initial timer example configuration */
  timer_s timers_example[] = {
      {
          .time_remaining = 0U, // Timer starts at 0, so callback is triggered
          // When time_remaining goes to 0, this reload value is stored back to time_remaining
          .timer_reload_value = 5U,
          .callback = timer_0_callback, // Called when time_remaining reaches 0
      },
      {
          .time_remaining = 3U,         // Some initial value
          .timer_reload_value = 7U,     // reload value
          .callback = timer_1_callback, // User callback
      },
  };

  // Test your code here with calls to timer_periodic_task()
  timer_periodic_task(timers_example, max_timer);
  timer_periodic_task(timers_example, max_timer);
  timer_periodic_task(timers_example, max_timer);
  timer_periodic_task(timers_example, max_timer);
}

int main(void) {
  print_separator();
  question_one();
  print_separator();
  question_two();
  print_separator();
  return 0;
}
