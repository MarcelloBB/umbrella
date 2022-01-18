#include <stdio.h>
#include "umbrella.h"

int main()
{
	// BOLD
	printf("\n%sBOLD%s\n", BOLD_ON, BOLD_OFF);
	
	// STD FORE
	printf("\n%sWHITE%s\n", WHITE_FORE, ENDC);
	printf("\n%sBLACK%s\n", BLACK_FORE, ENDC);
	printf("\n%sYELLOW%s\n", YELLOW_FORE, ENDC);
	printf("\n%sRED%s\n", RED_FORE, ENDC);
	printf("\n%sMAGENTA%s\n", MAGENTA_FORE, ENDC);
	printf("\n%sBLUE%s\n", BLUE_FORE, ENDC);
	printf("\n%sCYAN%s\n", CYAN_FORE, ENDC);
	
	// BRIGHT FORE
	printf("\n%sBRIGHT_WHITE%s\n", BRIGHT_WHITE_FORE, ENDC);
	printf("\n%sBRIGHT_BLACK%s\n", BRIGHT_BLACK_FORE, ENDC);
	printf("\n%sBRIGHT_YELLOW%s\n", BRIGHT_YELLOW_FORE, ENDC);
	printf("\n%sBRIGHT_RED%s\n", BRIGHT_RED_FORE, ENDC);
	printf("\n%sBRIGHT_MAGENTA%s\n", BRIGHT_MAGENTA_FORE, ENDC);
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
