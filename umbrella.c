#include <stdio.h>
#include "umbrella.h"

int main()
{
	printf("\n%sYELLOW\n", YELLOW_FORE);
	printf("\n%sRED\n", RED_FORE);
	printf("\n%sMAGENTA\n", MAGENTA_FORE);
	printf("\n%sBLUE\n", BLUE_FORE);
	printf("\n%sCYAN\n", CYAN_FORE);
	printf("\n%sUNDERLINED%s\n", UNDERLINE_ON, UNDERLINE_OFF);
	printf("\n%sBOLD%s\n", BOLD_ON, BOLD_OFF);
	
	return 0;
}
