#include <stdio.h>
#include <string.h>

static void test_float(const char *str)
{
    int len;
    double dummy = 0.0;
    if (sscanf(str, "%lf %n", &dummy, &len) == 1 && len == (int)strlen(str))
        printf("[%s] is valid (%.7g)\n", str, dummy);
    else
        printf("[%s] is not valid (%.7g)\n", str, dummy);
}

int main(void)
{
    test_float("5.23.fkdj");        // Invalid
    test_float("   255.   ");       // Valid
    test_float("255.123456");       // Valid
    test_float("255.12E456");       // Valid
    test_float("   .255   ");       // Valid
    test_float("   Inf    ");       // Valid
    test_float(" Infinity ");       // Valid
    test_float("   Nan    ");       // Valid
    test_float("   255   ");        // Valid
    test_float(" 0x1.23P-24 ");     // Valid
    test_float(" 0x1.23 ");         // Valid
    test_float(" 0x123 ");          // Valid
    test_float("abc");              // Invalid
    test_float("");                 // Invalid
    test_float("   ");              // Invalid
	test_float(" dsf dsfgad 23.055464 ");
    return 0;
}