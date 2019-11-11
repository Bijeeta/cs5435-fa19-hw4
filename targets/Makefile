CC := gcc
RM := rm -f
EXECSTACK := execstack

# flags
CFLAGSEXEC := -ggdb -mpreferred-stack-boundary=2 -zexecstack -fno-stack-protector
CFLAGSNOEXEC := -ggdb -mpreferred-stack-boundary=2 -fno-stack-protector

# sources
sources := target0.c target1.c target2.c target3.c  target4.c
targets := target0 target1 target2 target3 target4

# gmake magic
.PHONY: all clean

#targets
all: 
	$(CC) $(CFLAGSEXEC) -o target0 target0.c
	$(CC) $(CFLAGSEXEC) -o target1 target1.c
	$(CC) $(CFLAGSEXEC) -o target2 target2.c
	$(CC) $(CFLAGSEXEC) -o target3 target3.c
	$(CC) $(CFLAGSNOEXEC) -o target4 target4.c
	install -o root -t /tmp $(targets)
	chmod 4755 /tmp/target*

clean:
	$(RM) $(targets) $(sources:.c=.o)
