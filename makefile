CC = gcc
CFLAGS = -w
OBJS = main.o sum.o sub.o list.o
TARGET = prac.exe

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)


main.o : str.h sum.h sub.h list.h main.c 
sum.o : sum.h sum.c
sub.o : sub.h sub.c
list.o : list.h list.c


clean:
	rm -f *.o
	rm -f $(TARGET)



