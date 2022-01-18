/*
* MIT License
* 
* Copyright (c) 2022 Marcello 
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
*
*    FILE : UMBRELLA.H
* =======================
*
* AUTHOR     : MARCELLO
* REPOSITORY : https://github.com/MarcelloBB/umbrella.git
*
*/

#include <stdio.h>
#include "umbrella.h"

int main()
{
	// BOLD
	printf("\nBOLD TEXTn");
	printf("\n%sBOLD%s\n", BOLD_ON, BOLD_OFF);
	
	// STD FORE
	printf("\nSTD FOREGROUND\n");
	printf("\n%sWHITE%s ", WHITE_FORE, ENDC);
	printf("\n%sBLACK%s ", BLACK_FORE, ENDC);
	printf("\n%sYELLOW%s ", YELLOW_FORE, ENDC);
	printf("\n%sRED%s ", RED_FORE, ENDC);
	printf("\n%sMAGENTA%s ", MAGENTA_FORE, ENDC);
	printf("\n%sBLUE%s ", BLUE_FORE, ENDC);
	printf("\n%sCYAN%s\n", CYAN_FORE, ENDC);
	
	// BRIGHT FORE
	printf("\nBRIGHT FOREGROUND\n");
	printf("\n%sBRIGHT_WHITE%s ", BRIGHT_WHITE_FORE, ENDC);
	printf("\n%sBRIGHT_BLACK%s ", BRIGHT_BLACK_FORE, ENDC);
	printf("\n%sBRIGHT_YELLOW%s ", BRIGHT_YELLOW_FORE, ENDC);
	printf("\n%sBRIGHT_RED%s ", BRIGHT_RED_FORE, ENDC);
	printf("\n%sBRIGHT_MAGENTA%s ", BRIGHT_MAGENTA_FORE, ENDC);
	printf("\n%sBRIGHT_BLUE%s ", BRIGHT_BLUE_FORE, ENDC);
	printf("\n%sBRIGHT_CYAN%s\n", BRIGHT_CYAN_FORE, ENDC);
	
	// STD BACK
	printf("\nSTD BACKGROUND\n");
	printf("\n%sBACK_WHITE%s ", WHITE_BACK, ENDC);
	printf("\n%sBACK_BLACK%s ", BLACK_BACK, ENDC);
	printf("\n%sBACK_YELLOW%s ", YELLOW_BACK, ENDC);
	printf("\n%sBACK_RED%s ", RED_BACK, ENDC);
	printf("\n%sBACK_MAGENTA%s ", MAGENTA_BACK, ENDC);
	printf("\n%sBACK_BLUE%s ", BLUE_BACK, ENDC);
	printf("\n%sBACK_CYAN%s\n", CYAN_BACK, ENDC);
	
	// BRIGHT BACK
	printf("\nBRIGHT BACKGROUND\n");
	printf("\n%s%sBRIGHT_BACK_WHITE%s ", BRIGHT_WHITE_BACK, BLACK_FORE, ENDC);
	printf("\n%s%sBRIGHT_BACK_BLACK%s ", BRIGHT_BLACK_BACK, BLACK_FORE, ENDC);
	printf("\n%s%sBRIGHT_BACK_YELLOW%s ", BRIGHT_YELLOW_BACK, BLACK_FORE, ENDC);
	printf("\n%s%sBRIGHT_BACK_RED%s ", BRIGHT_RED_BACK, BLACK_FORE, ENDC);
	printf("\n%s%sBRIGHT_BACK_MAGENTA%s ", BRIGHT_MAGENTA_BACK, BLACK_FORE, ENDC);
	printf("\n%s%sBRIGHT_BACK_BLUE%s ", BRIGHT_BLUE_BACK, BLACK_FORE, ENDC);
	printf("\n%s%sBRIGHT_BACK_CYAN%s\n", BRIGHT_CYAN_BACK, BLACK_FORE, ENDC);
	
	return 0;
}
