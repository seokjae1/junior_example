#include <iostream>
#include <stdio.h>
#include <string>
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>       /* time_t, struct tm, difftime, time, mktime */

int main ()
{
clock_t before;
 double  result;
 before  = clock();

	long long a=1;
	for (int i=2; i<100000001; i++) {
		a = a+i;
	}

result = (double)(clock() - before) / CLOCKS_PER_SEC;
	printf("sum:[%lld] time:[%5.2f]\n", a, result);


}
