# Arduino-Timer
Creating a timer delay without using inbuilt delay function__
The code does the following actions:__
1)Detects input signal interrupt at pin 3 of the Arduino__
2)Turns on the LED connected at pin 5 of the Arduino when an interrupt occurs at pin 3__
3)The LED remains ON for 2 seconds and turns OFF__
__
The code eliminates the use of delay() function hence enabling parallel flow of control while implementing timed actions__
