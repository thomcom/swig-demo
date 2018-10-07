# Calculate primes: a C library

    gcc -c -o primes.o primes.c
    gcc primes.o main.c -o primes
    ./primes


    make swig
    make

    python
    import primes
    p = primes.getArray(10000)
    primes.primes(p, 10000)
    primes.printArray(p, 10000)

