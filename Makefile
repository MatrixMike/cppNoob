CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp hello.cpp factorial.cpp phyllisFor.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=hello

clean:
	rm *.o *~ $(EXECUTABLE)
	
all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@


