OBJS = src/main.o src/tasks.o src/stm32f10x_it.o

PROJ_NAME=main

export CC=arm-none-eabi-gcc
export LD=arm-none-eabi-gcc
export AR=arm-none-eabi-ar
export AS=arm-none-eabi-as
export OBJCOPY=arm-none-eabi-objcopy

export ASFLAGS=-g
export LDFLAGS=-Tstm32f100.ld -Llib
export CFLAGS=-O1 -c -fno-common -mcpu=cortex-m3 -mthumb -DSTM32F10X_HD=1 -DUSE_STDPERIPH_DRIVER=1

CWD = $(shell pwd)
export ROOT=$(CWD)
export LIB_ROOT=$(ROOT)/lib
export OS_ROOT=$(ROOT)/uCOS

###################################################

#vpath %.c $(ROOT)/src  

CFLAGS += -I$(ROOT)/inc -I$(LIB_ROOT) -I$(LIB_ROOT)/inc 
CFLAGS += -I$(LIB_ROOT)/inc/core -I$(LIB_ROOT)/inc/peripherals 
CFLAGS += -I$(OS_ROOT)/inc 

OBJS += $(LIB_ROOT)/startup_stm32f10x_hd.s # add startup file to build


###################################################

.PHONY: lib proj

all: 	lib os proj

lib:
	$(MAKE) -C lib
os:
	$(MAKE) -C uCOS

proj: 	$(PROJ_NAME).elf

$(PROJ_NAME).elf: $(OBJS)
	$(LD) $(LDFLAGS) -o $@ $(OBJS) -lstm32f10x $(OS_ROOT)/libucos.a
	#$(OBJCOPY) -O ihex $(PROJ_NAME).elf $(PROJ_NAME).hex
	$(OBJCOPY) -O binary $(PROJ_NAME).elf $(PROJ_NAME).bin

clean:
	rm -f *.o
	rm -f lib/*.o
	rm -f lib/libstm32f10x.a
	rm -f $(PROJ_NAME).elf
	rm -f $(PROJ_NAME).hex
	rm -f $(PROJ_NAME).bin
	rm -f uCOS/src/*.o
	rm -f uCOS/*.a
	
flash:
	st-flash write $(PROJ_NAME).bin 0x08000000
