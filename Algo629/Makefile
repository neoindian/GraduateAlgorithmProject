CC      = g++
CFLAGS  = -I./
#LDFLAGS = -lfltk

all: graph 

graph: GraphCreate.o GraphMain.o
	$(CC) -o $@ $^ 

GraphCreate.o: GraphCreate.cpp 
	$(CC) -c $(CFLAGS) $<
GraphMain.o: GraphMain.cpp 
	$(CC) -c $(CFLAGS) $<

.PHONY: clean

clean:
	rm *.o

