OPT = -Wall

t01:	main.o Book.o Library.o Array.o Control.o	View.o List.o FictionBook.o NonFictionBook.o
	g++ $(OPT) -o t01 main.o Book.o Library.o Array.o Control.o	View.o List.o FictionBook.o NonFictionBook.o

main.o:	main.cc Book.h
	g++ $(OPT) -c main.cc

Book.o:	Book.cc Book.h
	g++ $(OPT) -c Book.cc

Library.o: Library.cc Library.h
	g++ $(OPT) -c Library.cc

Array.o: Array.cc Array.h
	g++ $(OPT) -c Array.cc

Control.o: Control.cc Control.h
	g++ $(OPT) -c Control.cc

View.o: View.cc View.h
	g++ $(OPT) -c View.cc

List.o: List.cc List.h
	g++ $(OPT) -c List.cc

FictionBook.o: FictionBook.cc FictionBook.h
	g++ $(OPT) -c FictionBook.cc
NonFictionBook.o: NonFictionBook.cc NonFictionBook.h
	g++ $(OPT) -c NonFictionBook.cc
clean:
	rm -f *.o t01
