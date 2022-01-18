#include <stdio.h>
#include "umbrella.h"

int main()
{
	// BOLD
	printf("\n%sBOLD%s ", BOLD_ON, BOLD_OFF);
	
	// STD FORE
	printf("\n%sWHITE%s ", WHITE_FORE, ENDC);
	printf("\n%sBLACK%s ", BLACK_FORE, ENDC);
	printf("\n%sYELLOW%s ", YELLOW_FORE, ENDC);
	printf("\n%sRED%s\n", RED_FORE, ENDC);
	printf("\n%sMAGENTA%s ", MAGENTA_FORE, ENDC);
	printf("\n%sBLUE%s ", BLUE_FORE, ENDC);
	printf("\n%sCYAN%s", CYAN_FORE, ENDC);
	
	// BRIGHT FORE
	printf("\n%sBRIGHT_WHITE%s ", BRIGHT_WHITE_FORE, ENDC);
	printf("\n%sBRIGHT_BLACK%s ", BRIGHT_BLACK_FORE, ENDC);
	printf("\n%sBRIGHT_YELLOW%s ", BRIGHT_YELLOW_FORE, ENDC);
	printf("\n%sBRIGHT_RED%s ", BRIGHT_RED_FORE, ENDC);
	printf("\n%sBRIGHT_MAGENTA%s ", BRIGHT_MAGENTA_FORE, ENDC);
	printf("\n%sBRIGHT_BLUE%s ", BRIGHT_BLUE_FORE, ENDC);
	printf("\n%sBRIGHT_CYAN%s ", BRIGHT_CYAN_FORE, ENDC);
	
	// STD BACK
	printf("\n%sBACK_WHITE%s ", WHITE_BACK, ENDC);
	printf("\n%sBACK_BLACK%s ", BLACK_BACK, ENDC);
	printf("\n%sBACK_YELLOW%s ", YELLOW_BACK, ENDC);
	printf("\n%sBACK_RED%s ", RED_BACK, ENDC);
	printf("\n%sBACK_MAGENTA%s ", MAGENTA_BACK, ENDC);
	printf("\n%sBACK_BLUE%s ", BLUE_BACK, ENDC);
	printf("\n%sBACK_CYAN%s ", CYAN_BACK, ENDC);
	
	return 0;
}
