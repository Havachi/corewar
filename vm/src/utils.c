#include "utils.h"
void hv_putchar(char c)
{
	write(1, &c, 1);
}
