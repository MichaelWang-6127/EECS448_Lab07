Lab07: main.o UnitTest.o
	g++ -std=c++11 -g main.o UnitTest.o -o Lab07
main.o: main.cpp Node.h Node.hpp LinkedList.h LinkedList.hpp UnitTest.h UnitTest.cpp
	g++ -std=c++11 -g -c main.cpp
UnitTest.o: UnitTest.h UnitTest.cpp LinkedList.h LinkedList.hpp Node.h Node.hpp
	g++ -std=c++11 -g -c UnitTest.cpp
clean:
	rm *.o Lab07
	clean done