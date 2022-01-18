#include <stdio.h>
#include "umbrella.h"

int main()
{
	//  UNDERLINED
	printf("\n%sUNDERLINED%s\n", UNDERLINE_ON, UNDERLINE_OFF);

	// BOLD
	printf("\n%sBOLD%s\n", BOLD_ON, BOLD_OFF);
	
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
	printf("\n%sBACK_WHITE%s\n", WHITE_BACK, ENDC);
	printf("\n%sBACK_BLACK%s\n", BLACK_BACK, ENDC);
	printf("\n%sBACK_YELLOW%s\n", YELLOW_BACK, ENDC);
	printf("\n%sBACK_RED%s\n", RED_BACK, ENDC);
	printf("\n%sBACK_MAGENTA%s\n", MAGENTA_BACK, ENDC);
	printf("\n%sBACK_BLUE%s\n", BLUE_BACK, ENDC);
	printf("\n%sBACK_CYAN%s\n", CYAN_BACK, ENDC);
	
	return 0;
}
