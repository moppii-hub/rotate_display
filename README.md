# About
This is a stand which can rotate for display something.  
Used an Arduino, a step-motor, and a motor-driver board(UNL2003A).  
![Appearance](https://github.com/moppii-hub/rotate_display/blob/master/photos/appearance.JPG?raw=true)  


# BOM
- Arduino nano
- Step motor 28BYJ-48
- UNL2003A board
- power switch(SPST, Single-Pole Single-Throw)
- 9V battery(006P) strap
- Some wires
- Case by 3D printed
- Hot-melt adhesives


# Building
- write a program(rotate_display.ino) to Arduino.
- Build circuits([we can refer this websites](https://iot.keicode.com/arduino/arduino-stepper-28byj-48.php))
  - D2 - IN1
  - D3 - IN2
  - D4 - IN3
  - D5 - IN4
  - 9V - VIN(on Arduino) - +(on UNL2003A board)
  - some GNDs(through power switch)
- Print case
- Assemble like this  
![inside-bottomview](https://github.com/moppii-hub/rotate_display/blob/master/photos/inside_back.JPG?raw=true)  
![inside-topview](https://github.com/moppii-hub/rotate_display/blob/master/photos/inside_top.JPG?raw=true)  
- Finish!


# Reference
[28BYJ-48 ステッピングモーターを ULN2003 ドライバボードで使う方法](https://iot.keicode.com/arduino/arduino-stepper-28byj-48.php)
[ステッピングモーター(28BYJ-48)の動かし方 (ULN2003A使用)](https://stupiddog.jp/note/archives/1235)
[thomasfredericks/Stepper_28BYJ_48](https://github.com/thomasfredericks/Stepper_28BYJ_48/)
[ステッピングモーターの回し方](https://www.youtube.com/watch?v=OP_kYkmLj8U&t=615s)

