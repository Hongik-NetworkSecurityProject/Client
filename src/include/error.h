#include <stdio.h>
#include <stdlib.h>

typedef enum ErrorCode{
    ARGUMENT,
    SOCKET,
    BIND,
    LISTEN,
    ACCEPT,
    CONNECT,
    READ
}ErrorCode;


void errorHandling(int errorType);