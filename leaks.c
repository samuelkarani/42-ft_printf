#include <stdlib.h>
#include <string.h>

int				ft_printf(char const *str, ...);

int				main(void)
{
  ft_printf("\n");
  ft_printf("%%\n");
  ft_printf("%d\n", 42);
  ft_printf("%d%d\n", 42, 41);
  ft_printf("%d%d%d\n", 42, 43, 44);
  ft_printf("%ld\n", 2147483647);
  ft_printf("%lld\n", 9223372036854775807);
  ft_printf("%x\n", 505);
  ft_printf("%X\n", 505);
  ft_printf("%p\n", &ft_printf);
  ft_printf("%20.15d\n", 54321);
  ft_printf("%-10d\n", 3);
  ft_printf("% d\n", 3);
  ft_printf("%+d\n", 3);
  ft_printf("%010d\n", 1);
  ft_printf("%hhd\n", 0);
  ft_printf("%jd\n", 9223372036854775807);
  ft_printf("%zd\n", 4294967295);
  ft_printf("%\n");
  ft_printf("%U\n", 4294967295);
  ft_printf("%u\n", 4294967295);
  ft_printf("%o\n", 40);
  ft_printf("%%#08x\n", 42);
  ft_printf("%x\n", 1000);
  ft_printf("%#X\n", 1000);
  ft_printf("%s\n", NULL);
  ft_printf("%S\n", L"ݗݜशব");
  ft_printf("%s%s\n", "test", "test");
  ft_printf("%s%s%s\n", "test", "test", "test");
  ft_printf("%C\n", 15000);

char *a = "%c %c %c %c\n";
	char *b = "hello %s %s!!\n";
char *c = "hello";
	void *d = malloc(1);
  ft_printf(a, 42, '*', (char)NULL, 128);
ft_printf(b, "42 world!", NULL);
ft_printf("%p %p %p %p\n", c, d, NULL, (void *)0);
free(d);

ft_printf("%d\n", 2147483647);
ft_printf("%i\n", -2147483648);
ft_printf("%o\n", 2147483647);
ft_printf("%o\n", -2147483648);
ft_printf("%u\n", 2147483647);
ft_printf("%u\n", -2147483648);
ft_printf("%x\n", 2147483647);
ft_printf("%X\n", -2147483648);


ft_printf("%hhd\n", (char)12);
ft_printf("%hhd\n", (char)128);
ft_printf("%hhd\n", (char)-12);
ft_printf("%hhd\n", (char)-129);
ft_printf("%hd\n", (short)327);
ft_printf("%hd\n", (short)32768);
ft_printf("%hd\n", (short)-327);
ft_printf("%hd\n", (short)-32769);
ft_printf("%ld\n", (long)9.223372038E8);
ft_printf("%ld\n", (long)-9.223372039E8);
ft_printf("%lld\n", (long long)9.223372038E8);
ft_printf("%lld\n", (long long)-9.223372039E8);

  ft_printf("%f\n", 12);
  ft_printf("%f\n", 0.0001256);
  ft_printf("%f\n", 12.0001256);
  ft_printf("%f\n", 1.2E-8);
  ft_printf("%f\n", 1.2E-38);
  ft_printf("%lf\n", 2.3E-308);

  ft_printf("%.3f\n", 1.2);
ft_printf("%.3f\n", 1.2348);
ft_printf("%.3d\n", 10);
ft_printf("%.3d\n", 10000);
ft_printf("%.0d\n", 0);
ft_printf("%.5s\n", "Hello 42!!");
ft_printf("%.5s\n", "abc");

ft_printf("%5s\n", "abc");
ft_printf("%1s\n", "abc");

ft_printf("%#x\n", 10);
ft_printf("%#X\n", 16);
ft_printf("%#o\n", 8);
ft_printf("%05d\n", 10);
ft_printf("%+d\n", 10);
ft_printf( "%-5d\n", 1);

ft_printf("%#012x\n", 0xff);
ft_printf("%#+09.5lf\n", 1.7E+3);
ft_printf("%-10.10s\n","truncateiftoolong");
ft_printf( "%8.5f\n", 1.234 );
ft_printf( "%8.5d\n", 1234 );
ft_printf("%%\n");


ft_printf("%10x", 42);
ft_printf("%%\n");
ft_printf("%.0%\n");
ft_printf("%.3%\n");
ft_printf("%3%\n");
ft_printf("%%\n");
ft_printf("%5%\n");
ft_printf("%-5%\n");
ft_printf("%   %\n", "test\n");
ft_printf("%lld\n", 9223372036854775806LL);
ft_printf("%hhX\n", (unsigned char)123);
ft_printf("%lf\n", 214242.212142);
ft_printf("%lu\n", 4294967296);
ft_printf("%lf\n", 214242.212142);
ft_printf("%llX\n", 4294967296);

ft_printf("%b\n", 12);
	ft_printf("%b\n", 100);
	ft_printf("%b\n", 2147483647);

  ft_printf("%r\n", "\x00\x01\x02", 3);
	ft_printf("%r\n", "\x0", 1);
	ft_printf("%r\n", "\x1\x5\xa\x15\x1f\x7f", 6);

  ft_printf("%k\n", "20080915\n", 0);
	ft_printf("%k\n", "20080915\n", 1);
	ft_printf("%k\n", "20080915\n", 21);


ft_printf("\033[22;34mHello 42 in blue color code!\033[0m\n");

ft_printf("%e\n", 1000.12345);
ft_printf("%e\n", -1000.12345);
ft_printf("%e\n", -0.0000012345);
ft_printf("%e\n", 0);
ft_printf("%.4e\n", 1000.123456789);
ft_printf("%.17e\n", -1000.123456789);
ft_printf("%.e\n", -0.00000123456789);
ft_printf("%e\n", 3.0010);

ft_printf("%g\n", 2.99999999);
ft_printf("%g\n", 1000.12345);
ft_printf("%g\n", -1000.12345);
ft_printf("%g\n", -0.0000012345);
ft_printf("%g\n", 0);
ft_printf("%.13g\n", 1000.123456789);
ft_printf("%.5g\n", -1000.123456789);
ft_printf("%.g\n", 0.00000123456789);
ft_printf("%.g\n", -0.00000123456789);
ft_printf("%.4g\n", -29.99999999);
ft_printf("%.3g\n", 0);


ft_printf("%'d\n", 499);
ft_printf("%'d\n", 4999);
ft_printf("%'d\n", 65000);
ft_printf("%'d\n", 650000000);
ft_printf("%'f\n", 65000.000125675);
ft_printf("%'f\n", 0.00000012345);
ft_printf("%'d\n", 1);
	

  while (1);
  return (0);
}
