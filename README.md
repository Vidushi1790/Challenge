## x86_sandbox

This is to compile a program on your host machine. For example, you can compile an executable that runs on your Mac or Linux machine

```
# Compile
scons --project=x86_sandbox

# To check the test report
scons --project=x86_sandbox --test-output

# Run the executable
_build_x86_sandbox/./x86_sandbox.exe
```

Use this project to:
* Compile a program for your host machine
* Run unit-tests for code modules

## The code contains source files for two coding questions
# Coding Question 1 - Implement the divide function (with all possible error checks)
- This question contain one source(coding_question1.c) and one header file(coding_question1.h)
- Corresponding test cases is written in the test_divide.c file in the test folder. 
- The two inputs for divide function can be changed by the following line of code from the source file

```
static const unsigned number_divided_by = 3;
static const unsigned number_to_be_divided = 2000;
```


# Coding Question 2 - Manage timers list
- This question contain one source(coding_question2.c) and one header file(coding_question2.h)
- Corresponding test cases is written in the test_timercallback.c file in the test folder. 

