/*
** EPITECH PROJECT, 2019
** test_my_printf
** File description:
** azfz
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../my.h"
void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("Hello");
    cr_assert_stdout_eq_str("Hello");
}
Test(my_printf, c_rule, .init = redirect_all_std)
{
    my_printf("And your next char is :%c", 'a');
    cr_assert_stdout_eq_str("And your next char is :a",);
}

Test(my_printf, i_rule, .init = redirect_all_std)
{
    my_printf("And your next int is :%i", 23);
    cr_assert_stdout_eq_str("And your next int is :23");
}

Test(my_printf, s_rule, .init = redirect_all_std)
{
    my_printf("And your next string is :%s", "Hello World");
    cr_assert_stdout_eq_str("And your next string is :Hello World");
}
Test(my_ls, base_test, .init = redirect_all_std)
{
    char *str = "tests/";
    my_prepare_ls_no_rule_dir(str);
    cr_assert_stdout_eq_str("test_ls.c\n");
}
