#!/bin/bash

.PHONY: clean all

all:
	make clean
	make build
	make install

build:
	export LD_LIBRARY_PATH=`pwd`/libs:${LD_LIBRARY_PATH}
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
	g++ -o bin/problem_6 problem_6.cpp
	g++ -o bin/problem_7 problem_7.cpp -I. -L./libs -lprimes
	g++ -o bin/problem_8 problem_8.cpp
	g++ -o bin/problem_9 problem_9.cpp
	g++ -o bin/problem_10 problem_10.cpp -I. -L./libs -lprimes
	g++ -o bin/problem_11 problem_11.cpp
	g++ -o bin/problem_12 problem_12.cpp
	g++ -o bin/problem_13 problem_13.cpp
	g++ -o bin/problem_14 problem_14.cpp
	g++ -o bin/problem_15 problem_15.cpp
	g++ -o bin/problem_16 problem_16.cpp -lgmp -std=c++11
	g++ -o bin/problem_17 problem_17.cpp -std=c++11
	g++ -o bin/problem_18 problem_18.cpp -std=c++11

dev:
	g++ -o bin/problem_19 problem_19.cpp -std=c++11

clean:
	rm -f bin/*
	rm -f libs/*

install:
	if [[ ! -d ~/libs ]]; then mkdir ~/libs; fi
	cp -a libs/* ~/libs/
