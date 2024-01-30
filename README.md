# Marcopad-V2.0
Instructions, printing files and firmware of the customisable macropad-V2.0.

# What to expect?
A 3d printable 16 key macropad with a 320x240 display and 2 rotary encoders.
Computer actions a performed via a ahk script.

# Parts list:
* 1 Raspberry Pi Pico with 16mb flash and USB c (ordered mine of Aliexpress)
    https://de.aliexpress.com/item/1005005026700027.html?spm=a2g0o.productlist.0.0.19866d32maBQ92&algo_pvid=0f77df77-6c19-49a8-8b3e-fe319346ab75&algo_exp_id=0f77df77-6c19-49a8-8b3e-fe319346ab75-3&pdp_ext_f=%7B%22sku_id%22%3A%2212000031381713525%22%7D&pdp_npi=2%40dis%21EUR%213.6%213.17%21%21%21%21%21%400b0a050116704834470328133e38b7%2112000031381713525%21sea&curPageLogUid=AdJEHM4uG6lq
* 2 Rotary encoders 
    https://de.aliexpress.com/item/32726570531.html?spm=a2g0o.productlist.main.51.106a7aeenx1UKJ&algo_pvid=f2898332-615a-4f36-bf6d-95a08265ebe9&algo_exp_id=f2898332-615a-4f36-bf6d-95a08265ebe9-25&pdp_ext_f=%7B%22sku_id%22%3A%2210000001194329302%22%7D&pdp_npi=2%40dis%21EUR%210.55%210.49%21%21%21%21%21%40211bf04a16726636536525083d075a%2110000001194329302%21sea&curPageLogUid=JMk22xO7NbkT
* 2 Encoder knobs fitting the encoder
* 16 switches and keycaps
* 2-Inch LCD module 
    https://www.amazon.de/Waveshare-2inch-LCD-Module-Communicating/dp/B081NBBRWS/ref=sr_1_2?crid=YG50YUTMYZBQ&keywords=waveshare+2+inch&qid=1672734244&sprefix=waveshare+2%2Caps%2C89&sr=8-2
* 16 1N4148 Diodes
    https://42keebs.eu/shop/parts/components/1n4148-diodes-through-hole-smd/
* cables, soldering iron & accessories
* 7 M3x10mm countersunk screws
* 4 M3x12mm hex socket head screws or any other that fit
* 11 M3x5(outer diameter)x4(height)
    https://de.aliexpress.com/item/1005004047096275.html?spm=a2g0o.productlist.0.0.9165757c0jCRIQ&algo_pvid=c9277dfe-935f-41ee-8bec-be3fc31b0651&algo_exp_id=c9277dfe-935f-41ee-8bec-be3fc31b0651-20&pdp_ext_f=%7B%22sku_id%22%3A%2212000027860213927%22%7D&pdp_npi=2%40dis%21EUR%214.44%212.27%21%21%21%21%21%40211b88f016727351986676314e0762%2112000027860213927%21sea&curPageLogUid=TuTh1fGnkBQg

ALL links are just reference products for proper part selection

# 3d printing 
Printing parameters that might be interesting:
* 3 walls
* adaptive layer height with standard layer height of 0.15mm and a 0.5mm deviation
* dependend on bridging quality of your printer I recommend support for the USB hole

# Assembly 
Should be pretty straight forward once you got all the parts and you've already taken a look at the 3d model
1. Insert the heat inserts everywhere necessary 
2. Mount the lc display on the display mount and guide the cables through it
3. Mount the display cover on the lcd display and screw it together
4. On the main frame push in the 16 switches from above, they might fit very tight
5. Solder the switches and diodes as seen in figure 1
6. Push in the rotary encoders from the bottom and screw them in place from above
7. Fit the Rapsberry Pi Pico in the mount 
8. Connect the rotary encoder and display cables to the assigned pins (pins.h)
9. Connect the switch column and row pins to the dedicated pins  (keypad.h, don't ask me how the f it works or why the key array is weird)
10. Screw the display mount on the main frame with 3 countersunk screws
11. From the back of the frame screw the microcontroller mount in place, be aware that you might need to rearrange the cables to get it to fit
12. Upload the firmware to the Pi Pico and screw on the bottom plate
13. Done

# Firmware
Be aware that I modified the display library so bitmaps may not work as intended if any other library is used.
For cusomization I provided multiple layouts which you can assign functions to. You need to modifiy the code so that it presses the keys which the activate the ahk script.
For the bitmaps there is a converter to cpp code where you just need to select an image, the resolution and then the output format. Just add them in the file bitmaps.h and use them like the other ones.
