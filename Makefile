CC=gcc
OUTPUT=gpio_test.out
SRC=gpio_test.cpp

all:
	$(CC) -o $(OUTPUT) $(SRC) -lwiringPi

