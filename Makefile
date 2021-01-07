CC=g++
CFLAGS+=-c -Wall
CFLAGS+=-ansi -pedantic-errors -Wunused-variable

LDFLAGS=
SOURCES=main.cpp factorial.cpp 
#SOURCES+=main2.cpp main3.cpp main4.cpp main5.cpp
#SOURCES+=hello.cpp 
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


# DO NOT DELETE

functionalTest1.o: /usr/include/stdio.h
functionalTest2.o: /usr/include/stdio.h
