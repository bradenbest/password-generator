password-generator: main.o password.o
	gcc $^ -o $@

%.o: %.c
	gcc -c $^ -Wall -O2

clean:
	rm *.o

.PHONY: clean
