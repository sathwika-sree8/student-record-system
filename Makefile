all: studentRecord

studentRecord: src/main.cpp src/student.cpp
	g++ -std=c++11 src/main.cpp src/student.cpp -Iinclude -o studentRecord

clean:
	rm -f studentRecord
