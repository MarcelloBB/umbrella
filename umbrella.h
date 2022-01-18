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

#ifndef       UMBRELLA_H
#define       UMBRELLA_H

/* ====================================================
 *   EFFECTS
 * ==================================================== */

/* BOLD (ON/OFF) */
#define       BOLD_ON                  "\033[1m"
#define       BOLD_OFF                 "\033[21m"

/* COLOR (ON/OFF) */
#define       ENDC                     "\033[0m"

/* ====================================================
 *   FOREGROUND
 * ==================================================== */

/* STD */
#define       BLACK_FORE               "\033[30m"
#define       RED_FORE                 "\033[31m"
#define       GREEN_FORE               "\033[32m"
#define       YELLOW_FORE              "\033[33m"
#define       BLUE_FORE                "\033[34m"
#define       MAGENTA_FORE             "\033[35m"
#define       CYAN_FORE                "\033[36m"
#define       WHITE_FORE               "\033[37m"

/* BRIGHT */
#define       BRIGHT_BLACK_FORE        "\033[90m"
#define       BRIGHT_RED_FORE          "\033[91m"
#define       BRIGHT_GREEN_FORE        "\033[92m"
#define       BRIGHT_YELLOW_FORE       "\033[93m"
#define       BRIGHT_BLUE_FORE         "\033[94m"
#define       BRIGHT_MAGENTA_FORE      "\033[95m"
#define       BRIGHT_CYAN_FORE         "\033[96m"
#define       BRIGHT_WHITE_FORE        "\033[97m"

/* ====================================================
 *   BACKGROUND
 * ==================================================== */

/* STD */
#define       BLACK_BACK               "\033[40m"
#define       RED_BACK                 "\033[41m"
#define       GREEN_BACK               "\033[42m"
#define       YELLOW_BACK              "\033[43m"
#define       BLUE_BACK                "\033[44m"
#define       MAGENTA_BACK             "\033[45m"
#define       CYAN_BACK                "\033[46m"
#define       WHITE_BACK               "\033[47m"

/* BRIGHT */
#define       BRIGHT_BLACK_BACK        "\033[100m"
#define       BRIGHT_RED_BACK          "\033[101m"
#define       BRIGHT_GREEN_BACK        "\033[102m"
#define       BRIGHT_YELLOW_BACK       "\033[103m"
#define       BRIGHT_BLUE_BACK         "\033[104m"
#define       BRIGHT_MAGENTA_BACK      "\033[105m"
#define       BRIGHT_CYAN_BACK         "\033[106m"
#define       BRIGHT_WHITE_BACK        "\033[107m"

#endif
