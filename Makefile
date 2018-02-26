all: primes

primes: primes.c
	gcc primes.c -Wall -o primes
