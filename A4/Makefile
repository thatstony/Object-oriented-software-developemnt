OPT = -Wall

OBJS = main.o Student.o Course.o Storage.o Control.o View.o Monitor.o CourseList.o

a4: $(OBJS) StuServer.o
	g++ $(OPT) -o a4 $(OBJS) StuServer.o

main.o:	main.cc Student.h defs.h
	g++ $(OPT) -c main.cc

Student.o:	Student.cc Student.h Course.h List.h defs.h
	g++ $(OPT) -c Student.cc

Course.o:	Course.cc Course.h
	g++ $(OPT) -c Course.cc

CourseList.o: CourseList.cc CourseList.h List.h
	g++ $(OPT) -c CourseList.cc

Storage.o: Storage.cc Storage.h
	g++	$(OPT) -c Storage.cc

View.o:	View.cc View.h
	g++ $(OPT) -c View.cc

Control.o: Control.cc Control.h
	g++ $(OPT) -c Control.cc


Monitor.o: Monitor.cc Monitor.h
	g++ $(OPT) -c Monitor.cc

clean:
	rm -f $(OBJS) a4
