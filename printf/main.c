# include <stdio.h>
#include "ft_printf.h"

void basics(void)
{
	char *str = "Hello %corld";
	int or;
	int r;

	printf("\n<<<<<<<<<<<<<<<<<<<<<Basics>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("========Test - [c]=========\nO: ");
	fflush(stdout);
	or = printf(str, 'W');
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, 'W');
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);

	printf("\n========Test - [s]=========\nO: ");
	str = "Hello %s%c";
	fflush(stdout);
	or = printf(str, "World");
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, "World");
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);

	printf("\n========Test - [p]=========\nO: ");
	str = "Hello %p";
	fflush(stdout);
	or = printf(str, str);
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, str);
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);

	printf("\n========Test - [d]=========\nO: ");
	str = "Hello %d";
	fflush(stdout);
	or = printf(str, -23232);
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str,- 23232);
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);

	printf("\n========Test - [i]=========\nO: ");
	str = "Hello %i";
	fflush(stdout);
	or = printf(str, -23232);
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, -23232);
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);

	printf("\n========Test - [u]=========\nO: ");
	str = "Hello %u";
	fflush(stdout);
	or = printf(str, -1);
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, -1);
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);

	printf("\n========Test - [x]=========\nO: ");
	str = "Hello %x";
	fflush(stdout);
	or = printf(str, -4);
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, -4);
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);

	printf("\n========Test - [X]=========\nO: ");
	str = "Hello %X";
	fflush(stdout);
	or = printf(str, -2);
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, -2);
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);

	printf("\n========Test - [%%]=========\nO: ");
	str = "Hello %%";
	fflush(stdout);
	or = printf(str, '%');
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, '%');
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);
}
void combinations()
{
	char *str = "invalid %k";
	int or;
	int r;

	printf("\n<<<<<<<<<<<<<<<<<<<<<Combinations>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("\n========Test - [cs]=========\nO: ");
	str = "[%c][%s]";
	fflush(stdout);
	or = printf(str, 'H', "ello world");
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, 'H', "ello world");
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);

	printf("\n========Test - [csd]=========\nO: ");
	str = "[%c][%s][%d]";
	fflush(stdout);
	or = printf(str, 'H', "ello world", -4234);
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, 'H', "ello world", -4234);
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);

	printf("\n========Test - [csdi]=========\nO: ");
	str = "[%c][%s][%d][%i]";
	fflush(stdout);
	or = printf(str, 'H', "ello world", -4234, -9999);
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, 'H', "ello world", -4234, -9999);
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);

	printf("\n========Test - [csdiu]=========\nO: ");
	str = "[%c][%s][%d][%i][%u]";
	fflush(stdout);
	or = printf(str, 'H', "ello world", -4234, -9999, -1);
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, 'H', "ello world", -4234, -9999, -1);
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);

	printf("\n========Test - [sp]=========\nO: ");
	str = "[%s][%p]";
	fflush(stdout);
	or = printf(str, "str-ptr:", str);
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, "str-ptr:", str);
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);

	printf("\n========Test - [spx]=========\nO: ");
	str = "[%s][%p][%x]";
	fflush(stdout);
	or = printf(str, "str-ptr:", str, -1);
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, "str-ptr:", str, -1);
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);

	printf("\n========Test - [spxX%%]=========\nO: ");
	str = "[%s][%p][%x][%X][%%]";
	fflush(stdout);
	or = printf(str, "str-ptr:", str, -1, -2);
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, "str-ptr:", str, -1, -2);
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);
}

void edgy(void)
{
	char *str = "invalid %k";
	int or;
	int r;
	printf("\n<<<<<<<<<<<<<<<<<<<<<Edgy>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("\n========Test - [k]=========\nO: ");
	fflush(stdout);
	or = printf(str, 'W');
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, 'W');
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);

	printf("\n========Test - [u-0]=========\nO: ");
	str = "%u";
	fflush(stdout);
	or = printf(str, 0);
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, 0);
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);

	printf("\n========Test - []=========\nO: ");
	str = "";
	fflush(stdout);
	or = printf(str, "str-ptr:", str, -1, -2);
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, "str-ptr:", str, -1, -2);
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);
}

void nulls()
{
	char *str;
	int or;
	int r;

	printf("\n<<<<<<<<<<<<<<<<<<<<<Nulls>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("\n========Test - [null]=========\nO: ");
	str = "c: %c, s: %s, pt: %p, deci: %d, int: %i, uint: %u, x: %x, X: %X";
	fflush(stdout);
	or = printf(str, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	fflush(stdout);
	printf("\nM: ");
	fflush(stdout);
	r = ft_printf(str, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);
}

int main(void)
{
	basics();
	combinations();	
	edgy();
	nulls();
	return 1;
	char *str = "invalid %k";
	int or;
	int r;

	printf("\n========Test - [p]=========\nO: ");
	str = "Hello %p";
	fflush(stdout);
	or = printf(str, -1);
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, -1);
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);

	printf("\n========Test - [p]=========\nO: ");
	str = "Hello %p %p";
	fflush(stdout);
	or = printf(str, LONG_MIN, LONG_MAX);
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, LONG_MIN, LONG_MAX);
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);

	printf("\n========Test - [p]=========\nO: ");
	str = "Hello %p";
	fflush(stdout);
	or = printf(str, 0);
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, 0);
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);

	printf("\n========Test - [x]=========\nO: ");
	str = "Hello [%x]";
	fflush(stdout);
	or = printf(str, 0);
	fflush(stdout);
	printf("----");
	fflush(stdout);
	r = ft_printf(str, 0);
	fflush(stdout);
	printf("\nO: %d|----|%d", or, r);
	fflush(stdout);
}

