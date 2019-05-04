# Object-oriented-software-developemnt
student information collection
The zip file should contain:

Date.cc Date.h
Calendar.cc Calendar.h
Control.cc Control.h
Event.cc Event.h
Array.h Arry.o
EventServer.h EventServer.o
List.h
Time.cc Time.h
View.cc View.h
main.cc
in.txt

The file is written under Linux OS version: 4.15.0-33-generic.

Please use the VM and the given comp24XX-F18.org to test the code.

The List.cc class has been deleted from the zip file because List.h has been changed to class template.

The Makefile has been changed due to the usage of Array.h Array.o EventServer.h and EventServer.h, it will not delete Array.o and EventServer.o file when use the "make clean" command.


To compile the code:
Use the makefile:

>make

To run the code:

>./cal

After run the code successfully, an UI will be shown like :

        WELCOME TO THE CALENDER SYSTEM


            Here are your options:

             1. Add an Event

             0. Exit

             Please Enter Your Choice:

Enter the choice 1 or 0 :

By Entering "1":

It will ask user to enter the type of the event (work event or school event)
Then, it will ask user to enter the input txt file name (in.txt)

After entering the type of event and the file name, the program will back to the main menu.


By Entering "0":

The program will exit, and all the added event and cloud storage event will be printed:

school:
1    COMP2404 lecture:  October 00, 18  16:05:00
2    COMP2404 lecture:  October 00, 16  16:05:00
3    COMP2401 lecture:  October 00, 15  16:05:00
4    COMP2401 Test #1:  October 00, 31  16:05:00
5    COMP2404 Midterm: November 00, 1  16:05:00
6    COMP2401 lecture:  October 00, 17  16:05:00
7            COMP2404:  October 20, 2018  10:35:00
8            COMP3005: November 30, 2018  11:35:00
9            COMP3007: November 13, 2018  12:35:00
10            MATH2013: November 12, 2018  14:35:00
11            MATH2012: November 10, 2018  10:35:00
12            COMP2404: November 20, 2018  10:35:00
13            COMP3001: November 30, 2018  11:35:00
14            COMP3002: November 13, 2018  12:35:00
15            MATH2013: November 12, 2018  14:35:00
16            MATH2019: November 10, 2018  10:35:00
17            COMP2405: November 20, 2018  10:35:00
18            COMP3009: November 30, 2018  11:35:00
19            COMP3008: November 13, 2018  12:35:00
20            MATH2016: November 12, 2018  14:35:00
21            MATH2018: November 10, 2018  10:35:00
work:
1    Support workshop:  October 00, 12  09:30:00
2 COMP2404 TA meeting: September 00, 17  15:00:00
3 COMP2404 TA meeting: September 00, 17  12:00:00
4      DataCollection: December 10, 2018  01:00:00
5            Shooping: December 11, 2018  02:00:00
6              Review: December 11, 2018  03:00:00
7               Final: December 11, 2018  04:00:00
8            Teaching: December 11, 2018  05:00:00
9              Coding: December 11, 2018  06:00:00

SERVER SCHOOL EVENTS:
1    COMP2404 lecture:  October 00, 18  16:05:00
2    COMP2404 lecture:  October 00, 16  16:05:00
3    COMP2401 lecture:  October 00, 15  16:05:00
4    COMP2401 Test #1:  October 00, 31  16:05:00
5    COMP2404 Midterm: November 00, 1  16:05:00
6    COMP2401 lecture:  October 00, 17  16:05:00
7            COMP2404:  October 20, 2018  10:35:00
8            COMP3005: November 30, 2018  11:35:00
9            COMP3007: November 13, 2018  12:35:00
10            MATH2013: November 12, 2018  14:35:00
11            MATH2012: November 10, 2018  10:35:00
12            COMP2404: November 20, 2018  10:35:00
13            COMP3001: November 30, 2018  11:35:00
14            COMP3002: November 13, 2018  12:35:00
15            MATH2013: November 12, 2018  14:35:00
16            MATH2019: November 10, 2018  10:35:00
17            COMP2405: November 20, 2018  10:35:00
18            COMP3009: November 30, 2018  11:35:00
19            COMP3008: November 13, 2018  12:35:00
20            MATH2016: November 12, 2018  14:35:00
21            MATH2018: November 10, 2018  10:35:00

SERVER WORK EVENTS:
1    Support workshop:  October 00, 12  09:30:00
2 COMP2404 TA meeting: September 00, 17  15:00:00
3 COMP2404 TA meeting: September 00, 17  12:00:00
4      DataCollection: December 10, 2018  01:00:00
5            Shooping: December 11, 2018  02:00:00
6              Review: December 11, 2018  03:00:00
7               Final: December 11, 2018  04:00:00
8            Teaching: December 11, 2018  05:00:00
9              Coding: December 11, 2018  06:00:00




School calendar added by input file will sort the events by date;
However, there are 6 school event and 3 work event in the cloud storage, all the Date of these events are invalid,

Work calendar added by input file will sort the events by priority;
So, they are neither sorted by date nor priority.

The lessThan function in Date, Time, Event, SchoolEvent, and WorkEvent has been changed to "<"
SchoolEvent and WorkEvent derived class are written under Event.cc just like class example on Nov 13th.
Have already asked the professor about this question.

Input txt file instruction:
  using the in.txt file for this program.

  All the input file should be in the form:

  priority  event_type event_name year month day hour minutes seconds

  Example: 1 school COMP2404  2018  10  20  10  35  00
