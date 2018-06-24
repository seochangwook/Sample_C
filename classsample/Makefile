CC = g++

main: main.cpp cal.o
	$(CC) -o main main.cpp cal.o
cal.o: cal.cpp
	$(CC) -c cal.cpp
clean: 
	rm -rf test cal.o
