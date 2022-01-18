#ifndef       UMBRELLA_H
#define       UMBRELLA_H

/* ====================================================
 *   EFFECTS
 * ==================================================== */
 
/* UNDERLINE (ON/OFF) */
#define       UNDERLINE_ON      "\033[4m"
#define       UNDERLINE_OFF     "\033[24m"

/* BOLD (ON/OFF) */
#define       BOLD_ON           "\033[1m"
#define       BOLD_OFF          "\033[21m"

/* COLOR (ON/OFF) */
#define       ENDC              "\033[39m"

/* ====================================================
 *   FOREGROUND
 * ==================================================== */

/* STD */
#define       BLACK_FORE        "\033[30m"
#define       RED_FORE          "\033[31m"
#define       GREEN_FORE        "\033[32m"
#define       YELLOW_FORE       "\033[33m"
#define       BLUE_FORE         "\033[34m"
#define       MAGENTA_FORE      "\033[35m"
#define       CYAN_FORE         "\033[36m"
#define       WHITE_FORE        "\033[37m"

/* BRIGHT */
#define       BLACK_FORE        "\033[90m"
#define       RED_FORE          "\033[91m"
#define       GREEN_FORE        "\033[92m"
#define       YELLOW_FORE       "\033[93m"
#define       BLUE_FORE         "\033[94m"
#define       MAGENTA_FORE      "\033[95m"
#define       CYAN_FORE         "\033[96m"
#define       WHITE_FORE        "\033[97m"

/* ====================================================
 *   BACKGROUND
 * ==================================================== */

/* STD */
#define       BLACK_BACK        "\033[40m"
#define       RED_BACK          "\033[41m"
#define       GREEN_BACK        "\033[42m"
#define       YELLOW_BACK       "\033[43m"
#define       BLUE_BACK         "\033[44m"
#define       MAGENTA_BACK      "\033[45m"
#define       CYAN_BACK         "\033[46m"
#define       WHITE_BACK        "\033[47m"

/* BRIGHT */
#define       BLACK_BACK        "\033[100m"
#define       RED_BACK          "\033[101m"
#define       GREEN_BACK        "\033[102m"
#define       YELLOW_BACK       "\033[103m"
#define       BLUE_BACK         "\033[104m"
#define       MAGENTA_BACK      "\033[105m"
#define       CYAN_BACK         "\033[106m"
#define       WHITE_BACK        "\033[107m"

#endif
