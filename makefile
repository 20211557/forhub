cc = g++
target = unit
objects = Main.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

$(objects) : unit.h

clean :
	rm $(target) *.o
