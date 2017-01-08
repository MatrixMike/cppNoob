CC=g++
CFLAGS+=-c -Wall
CFLAGS+=-ansi -pedantic-errors

LDFLAGS=
SOURCES=main.cpp factorial.cpp 
# SOURCES+=hello.cpp 
#phyllisFor.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=hello

clean:
	rm *.o *~ $(EXECUTABLE)
	
all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@


