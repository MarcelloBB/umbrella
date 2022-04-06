# ☂️umbrella☂️
Add colors to your program in C with umbrella.h

## Using in projects
* Clone this repo
  * ```git clone https://github.com/MarcelloBB/umbrella.git```

* Paste it into your project folder

* Include it into your files using:
  * ```c
    #include "umbrella.h" // Check if you have umbrella.h in your dir
    ```
    
## View
To view a example, feel free to compile and run ```umbrella.c``` in _bin_ folder

## Basic usage
```c
#include <stdio.h>
#include "umbrella.h" // 💡

int main()
{
  // This should print a yellow text
  printf("%s HELLO, UMBRELLA! %s", YELLOW_FORE, ENDC);
  // 
  
  // This should print "hello" in white and "world" in yellow
  printf(" HELLO  "  YELLOW_FORE  " WORLD \n"   ENDC);
  //
  
  // This should print "MIT" in black with blue background and "License" in yellow with red background
  printf(BLACK_FORE   BLUE_BACK   "MIT "   YELLOW_FORE   RED_BACK   "License \n"   ENDC);
  //
  
  return 0;
}
```

## Colours
#### STD FORE
Simple foreground colours
| umbrella | Description |
| -------- | ----------- |
 YELLOW_FORE  | Yellow foreground 
 BLUE_FORE    | Blue foreground 
 RED_FORE     | Red foreground 
 MAGENTA_FORE | Magenta foreground 
 CYAN_FORE    | Cyan foreground 
 BLACK_FORE   | Black foreground 
 WHITE_FORE   | White foreground 
 GREEN_FORE   | Green foreground 
 
#### BRIGHT FORE
Bright foreground colours
| umbrella | Description |
| -------- | ----------- |
 BRIGHT_YELLOW_FORE  | Yellow foreground (BRIGHT)
 BRIGHT_BLUE_FORE    | Blue foreground (BRIGHT)
 BRIGHT_RED_FORE     | Red foreground (BRIGHT)
 BRIGHT_MAGENTA_FORE | Magenta foreground (BRIGHT)
 BRIGHT_CYAN_FORE    | Cyan foreground (BRIGHT)
 BRIGHT_BLACK_FORE   | Black foreground (BRIGHT)
 BRIGHT_WHITE_FORE   | White foreground (BRIGHT)
 BRIGHT_GREEN_FORE   | Green foreground (BRIGHT)
 
#### STD BACK
Simple background colours
| umbrella | Description |
| -------- | ----------- |
 YELLOW_BACK  | Yellow background 
 BLUE_BACK    | Blue background 
 RED_BACK     | Red background 
 MAGENTA_BACK | Magenta background 
 CYAN_BACK    | Cyan background 
 BLACK_BACK   | Black background 
 WHITE_BACK   | White background 
 GREEN_BACK   | Green background 

#### BRIGHT BACK
Bright background colours
| umbrella | Description |
| -------- | ----------- |
 BRIGHT_YELLOW_BACK  | Yellow background (BRIGHT)
 BRIGHT_BLUE_BACK    | Blue background (BRIGHT)
 BRIGHT_RED_BACK     | Red background (BRIGHT)
 BRIGHT_MAGENTA_BACK | Magenta background (BRIGHT)
 BRIGHT_CYAN_BACK    | Cyan background (BRIGHT)
 BRIGHT_BLACK_BACK   | Black background (BRIGHT)
 BRIGHT_WHITE_BACK   | White background (BRIGHT)
 BRIGHT_GREEN_BACK   | Green background (BRIGHT) 

## License
_☂️Umbrella☂️_ is under the terms of _MIT License_

## Author
Developed with <3 by _Marcello_
