#!/bin/bash

.PHONY: clean all

all:
	make clean
	if [[ ! -d libs ]]; then mkdir libs; fi
	g++ -c -fPIC primes.cpp -o libs/primes.o
	g++ -shared -Wl,-soname,libprimes.so.1 -o libs/libprimes.so.1.0.1 libs/primes.o
	ln -s libprimes.so.1.0.1 libs/libprimes.so.1
	ln -s libprimes.so.1 libs/libprimes.so
	if [[ ! -d bin ]]; then mkdir bin; fi
	g++ -o bin/problem_1 problem_1.cpp
	g++ -o bin/problem_2 problem_2.cpp
	g++ -o bin/problem_3 problem_3.cpp -I. -L./libs -lprimes
	g++ -o bin/problem_4 problem_4.cpp
	g++ -o bin/problem_5 problem_5.cpp

dev:
	g++ -o bin/problem_6 problem_6.cpp

clean:
	rm -f bin/*
	rm -f libs/*
