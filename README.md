# W806-blinky
Simple blink-like example for the W806 MCU along with the chip pinout and a text file with pin assignments.<br>
<br>
# To compile the blinky code and download to your W806
- Copy main.c, wm_it.c, wm_hal_msp.c & Makefile to your wm-sdk-w806/app/src/ folder.
- After the copy, cd to the wm-sdk-w806 root directory and run: make clean - This will make sure the new code gets compiled in the next step.
- Run <i>make</i> from the wm-sdk-w806 root directory to build and then <i>make flash</i> to load the W806 with the binary.
<br>
<b>This example assumes the wm-sdk-w806 folder is in your home directory:</b>
<br>
<i>dumbuser@dumbox:~/wm-sdk-w806$ <b>make; make flash</b></i>
<br><br>
I have added code to test the IO speed of the W806 with. The first is a HAL version that toggles GPIO_PIN_0 on and off as fast as possable. The other is a bare-metal one that does the same, but using the PORT registers directly.  You can copy those files in plase of the main.c file to try them.<br><br>

You can use any of the other examples given in the wm-sdk-w806/demo folder this way. Just follow the same procedure as outlined above.<br><br>
<b>See: <a href="https://github.com/jscottb/w806-blinky/blob/main/w806pins.txt">w806pins.txt</a> for full pin assignments. </b><br><br>

<b>See: https://github.com/IOsetting/wm-sdk-w806 for how to download the compiler tools and SDK for the W806</b><br>

<b>W806 Pinout:</b><br>
<img src="https://github.com/jscottb/w806-blinky/blob/main/w806.png" alt="W806 pinout" height="500" width="500">

<br><b>W806 Internals:</b><br>
<img src="https://github.com/jscottb/w806-blinky/blob/main/w806internals.png" alt="W806 Internals" height="500" width="500">

<br>The above images were taken from this <a href="https://github.com/jscottb/w806-blinky/blob/main/W806%20MCU%E8%8A%AF%E7%89%87%E8%A7%84%E6%A0%BC%E4%B9%A6_V2.0.pdf">datasheet</a>
