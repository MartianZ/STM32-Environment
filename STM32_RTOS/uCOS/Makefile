
CFLAGS+= -I$(OS_ROOT)/inc

OSSRCS = $(OS_ROOT)/src/os_cpu_a.c
OSSRCS += $(OS_ROOT)/src/os_cpu_c.c $(OS_ROOT)/src/os_core.c \
	$(OS_ROOT)/src/os_flag.c $(OS_ROOT)/src/os_mbox.c $(OS_ROOT)/src/os_mem.c $(OS_ROOT)/src/os_mutex.c \
	$(OS_ROOT)/src/os_q.c $(OS_ROOT)/src/os_sem.c $(OS_ROOT)/src/os_task.c $(OS_ROOT)/src/os_time.c \
	$(OS_ROOT)/src/os_tmr.c $(OS_ROOT)/src/os_dbg.c

OSOBJS = $(OSSRCS:.c=.o)

libucos.a: $(OSOBJS)
	$(AR) rcs $@ $(OSOBJS)

clean:
	rm -f $(OSOBJS) libucos.a
