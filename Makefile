
all:
	swig -python primes.i
	cc -c `python-config --cflags` primes.c primes_wrap.c
	cc -bundle `python-config --ldflags` primes.o primes_wrap.o -o _primes.so

swig:
	brew install swig
