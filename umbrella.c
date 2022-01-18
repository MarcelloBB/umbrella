#include <stdio.h>
#include "umbrella.h"

int main()
{
	//  UNDERLINED
	printf("\n%sUNDERLINED%s\n", UNDERLINE_ON, UNDERLINE_OFF);

	// BOLD
	printf("\n%sBRIGHT%s\n", BRIGHT_ON, BRIGHT_OFF);
	
	// STD FORE
	printf("\n%sWHITE\n", WHITE_FORE);
	printf("\n%sBLACK\n", BLACK_FORE);
	printf("\n%sYELLOW\n", YELLOW_FORE);
	printf("\n%sRED\n", RED_FORE);
	printf("\n%sMAGENTA\n", MAGENTA_FORE);
	printf("\n%sBLUE%s\n", BLUE_FORE, ENDC);
	printf("\n%sCYAN%s\n", CYAN_FORE, ENDC);
	
	// BRIGHT FORE
	printf("\n%sBRIGHT_WHITE\n", BRIGHT_WHITE_FORE);
	printf("\n%sBRIGHT_BLACK\n", BRIGHT_BLACK_FORE);
	printf("\n%sBRIGHT_YELLOW\n", BRIGHT_YELLOW_FORE);
	printf("\n%sBRIGHT_RED\n", BRIGHT_RED_FORE);
	printf("\n%sBRIGHT_MAGENTA\n", BRIGHT_MAGENTA_FORE);
	printf("\n%sBRIGHT_BLUE%s\n", BRIGHT_BLUE_FORE, ENDC);
	printf("\n%sBRIGHT_CYAN%s\n", BRIGHT_CYAN_FORE, ENDC);
	
	// STD BACK
	printf("\n%sBACK_WHITE\n", WHITE_BACK);
	printf("\n%sBACK_BLACK\n", BLACK_BACK);
	printf("\n%sBACK_YELLOW\n", YELLOW_BACK);
	printf("\n%sBACK_RED\n", RED_BACK);
	printf("\n%sBACK_MAGENTA\n", MAGENTA_BACK);
	printf("\n%sBACK_BLUE%s\n", BACK_BLUE_FORE, ENDC);
	printf("\n%sBACK_CYAN%s\n", BACK_CYAN_FORE, ENDC);
	
	return 0;
}
