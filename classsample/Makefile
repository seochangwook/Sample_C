CC = g++

test: main.cpp cal.o
	$(CC) -o test main.cpp cal.o
cal.o: cal.cpp
	$(CC) -c cal.cpp
clean: 
	rm -rf test cal.o
