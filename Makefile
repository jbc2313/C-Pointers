program: main.c
	gcc main.c -o prog

.PHONY: clean

clean: 
	rm prog
