#avr-gcc -mmcu=atmega16 -Os main.c -Wall -Wstrict-prototypes -std=gnu99
    #-I. -Wall -Wstrict-prototypes -std=gnu99 -Wundef -MMD -MP
#avr-objcopy -O ihex -R .eeprom a.out main.hex 
    #-Wall -Wstrict-prototypes -std=gnu99 -Wundef -MMD -MP
#avr-size main.hex

#avrdude -p m16 -c usbasp -U flash:w:main.hex:i -F
#avrdude -p m16 -c usbasp -U flash:w:rom.hex:i

make clean
make
avrdude -p m16 -c usbasp -U flash:w:main.hex:i