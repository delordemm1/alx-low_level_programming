#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int sqrt_helper(int n, int start, int stop);
int is_palindrome(char *s);
int getLen(char *s);
int helper_drome(char *s, int start, int end);
int is_prime_number(int n);
int check_divisor(int n, int m);
int wildcmp(char *s1, char *s2);

#endif