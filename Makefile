CC = g++

all: test

test: EFLog.o test.cpp
	$(CC) -o test test.cpp EFLog.o

EFLog.o: EFLog.h EFLog.cpp
	$(CC) -c -o EFLog.o EFLog.cpp

clean:
	@rm -f test *.o *.gch
