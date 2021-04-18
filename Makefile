CC = g++
EXE_FILE=main

all: $(EXE_FILE)

$(EXE_FILE):main.cpp zoo.o animal.o monkey.o seaotter.o sloths.o
	$(CC) main.cpp zoo.o animal.o monkey.o seaotter.o sloths.o -o $(EXE_FILE)

zoo.o: zoo.cpp zoo.hpp
	$(CC) -c zoo.cpp

animal.o: animal.cpp animal.hpp
	$(CC) -c animal.cpp

monkey.o: monkey.cpp monkey.hpp
	$(CC) -c monkey.cpp

seaotter.o: seaotter.cpp seaotter.hpp
	$(CC) -c seaotter.cpp

sloths.o: sloths.cpp sloths.hpp
	$(CC) -c sloths.cpp

clean:
	rm -f *.o $(BIN)
