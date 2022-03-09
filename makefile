all:
	clang++ -std=c++11 -o a.out Human.cpp Computer.cpp Referee.cpp main.cpp
	./a.out