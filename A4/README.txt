Chen Lilun
100971436

 compile the file:
> make clean
> make

The file should contains the following files:

Control.cc Control.h
Course.cc Course.h
defs.h in.txt README.txt
List.h
main.cc Makefile
Storage.cc Storage.h
Student.cc Student.h
View.cc View.h
Monitor.cc Monitor.h
CourseList.cc CourseList.h


After build the program, there will be an execution file named as 'a4'.

To run the program:
>./a4 < in.txt

The out put should be like :
"it will show the StudentServer first"

Id: 1000
-- COMP 1405:   3  D+ 201620  chen
-- COMP 1406:   5  C  201620  chen
-- COMP 1805:  -1  WDN201620  chen
-- COMP 2401:   8  B  201620  chen
-- COMP 2402:   0  F  201620  chen
GPA: 3

After printing out all the Students information
The Log will print out with the information about
which student has a GPA below the minimum GPA,
And which student has exceed maximum failed or withdrawn class.

Which the "Id" is the sutdent id;
          "1405" is the course code;
          "3"  is the grade in number;
          "D+" is the grade converted in string;
          "201620" is the term number in Carleton Calendar style;
          "Chen"  is the instructor;

The in.txt input file should be written in form as:

1 (Menu selection)
1000 (Id)
1405 (course code)
3    (Grade)
201620 (Term)
Chen (Instructor)
0    (If no more course want to add)
0    (If want to exit)
