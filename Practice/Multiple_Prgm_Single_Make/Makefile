#Makefile

CC=gcc
CFLAGS=-c -g -O2
INCLUDE=-I.
SRC_PATH=.
DES_PATH=.
TAR_PATH=program

program: hello.o add.o pro.o
	$(CC) ${INCLUDE} ${SRC_PATH}/hello.o ${SRC_PATH}/add.o ${SRC_PATH}/pro.o -o ${TAR_PATH}
	@echo "successfully executed"
hello.o: hello.c
	$(CC) ${INCLUDE} $(CFLAGS) $(SRC_PATH)/hello.c -o hello.o
	@echo "successfully executed hello"
add.o: add.c
	$(CC) ${INCLUDE} $(CFLAGS) $(SRC_PATH)/add.c -o add.o
	@echo "successfully executed add"
pro.o: pro.c
	$(CC) ${INCLUDE} $(CFLAGS) $(SRC_PATH)/pro.c -o pro.o
	@echo "successfully executed pro"

clean:
	rm -rf $(SRC_PATH)/*.o $(TAR_PATH)


