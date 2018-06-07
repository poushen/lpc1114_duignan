arm-none-eabi-gcc -mcpu=cortex-m0 -mthumb -g -c init.c -o init.o
arm-none-eabi-gcc -mcpu=cortex-m0 -mthumb -g -c main.c -o main.o
arm-none-eabi-ld init.o main.o -L "C:\Program Files (x86)\GNU Tools ARM Embedded\5.4 2016q2\lib\gcc\arm-none-eabi\5.4.1\armv6-m" -lgcc -T linker_script.ld --cref -Map main.map -nostartfiles -o main.elf
arm-none-eabi-objcopy -O ihex main.elf main.hex