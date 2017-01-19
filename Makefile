CC=g++
CFLAGS+=-c -Wall
CFLAGS+=-ansi -pedantic-errors

LDFLAGS=
SOURCES=main.cpp factorial.cpp 
# SOURCES+=hello.cpp 
#phyllisFor.cpp
OBJECTS=$(SOURCES:.cpp=.o)
#following line defines the executable's name
EXECUTABLE=factoPrint

clean:
	rm *.o *~ $(EXECUTABLE)
	
all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@


