HEADER_PATH = ./library/include
LIB_PATH = ./library


all : application

application : application.o error.o init.o printText.o
	gcc -o application application.o error.o init.o printText.o -I${HEADER_PATH} 

application.o: 
	gcc -c -o application.o application.c -I${HEADER_PATH} 

error.o:
	gcc -c -o error.o ./src/error/error.c 

init.o:
	gcc -c -o init.o ./src/sock/init.c

printText.o:
	gcc -c -o printText.o ./src/util/printText.c

# printText.o:
# 	gcc -c -o printText.o printText.c

# clnt.o :
# 	gcc -c -o clnt.o my_clnt.c -I${HEADER_PATH}

# as.o :
# 	gcc -c -o as.o my_as.c -I${HEADER_PATH}

# fs.o :
# 	gcc -c -o fs.o my_fs.c -I${HEADER_PATH}

# sock.o :
# 	gcc -c -o sock.o src/sock_.c

# security.o :
# 	gcc -c -o security.o src/security.c -I${HEADER_PATH}

clean :
	rm *.o application

