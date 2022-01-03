# W806-blinky
Simple blink-like example for the W806 MCU along with the chip pinout and a text file with pin assinments.<br>
<br>
# To compile the blinky code and download to your W806
- Copy main.c, wm_it.c, wm_hal_msp.c & Makefile to your wm-sdk-w806/app/src/ folder.
- Run <i>make</i> from the wm-sdk-w806 root directory to build and then <i>make flash</i> to load the W806 with the binary.
<br>
<b>This example assumes the wm-sdk-w806 folder is in your home directory:</b>
<br>
<i>dumbuser@dumbox:~/wm-sdk-w806$ <b>make; make flash</b></i>
<br><br>
You can use any of the other examples given in the wm-sdk-w806/demo folder this way. Just follow the same procedure as outlined above.<br><br>
<b>See: <a href="https://github.com/jscottb/w806-blinky/blob/main/w806pins.txt">w806pins.txt</a> for full pin assinments. </b><br><br>

<b>W806 Pinout:</b><br>
<img src="https://github.com/jscottb/w806-blinky/blob/main/w806.png" alt="W806 pinout" height="500" width="500">

