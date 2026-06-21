#Makefile

#hello_prg: hello.o
#	gcc -c hello.c -o hello.o
#	@echo "Hello World"

hello_prg:hello.o
	gcc hello.o -o hello_prg
	@echo "Hello_prg_binary"
hello.o:hello.c
	gcc -I./ -c hello.c -o hello.o
	@echo "Hello object file"
clean:
	rm -rf *.o hello_prg

