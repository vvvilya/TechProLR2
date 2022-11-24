all: rebuild 

rebuild: main.cpp
	g++ -Wall -Werror main.cpp -o main.exe

clean:
	rm -rf *.exe