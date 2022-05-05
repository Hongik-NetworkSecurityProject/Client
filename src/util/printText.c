#include "printText.h"
#include "macro.h"


void printConnection(int flag){
    if(flag == AUTH){
        puts("==================================================");
        puts("\tConnected to Authentication server\t");
        puts("==================================================");
    }
    if(flag== FILE){
        puts("==================================================");
        puts("\tConnected to File server\t");
        puts("==================================================");

    }
}

void printDisconnection(int flag){
    if(flag == AUTH){
        puts("==================================================");
        puts("\tDisonnected to Authentication server\t");
        puts("==================================================");
    }
    if(flag == FILE){
        puts("==================================================");
        puts("\tDisonnected to File server\t");
        puts("==================================================");
    }
}


void terminateClient(int flag){
    printDisconnection(flag);
    exit(0);
}