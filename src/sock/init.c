#include "init.h"
#include "error.h"



int initClinet(int *sock, const char* argv){
    struct sockaddr_in servAddr;
    
    *sock = socket(PF_INET, SOCK_STREAM, 0);
    if(*sock == -1){
        errorHandling(SOCKET);
    }

    memset(&servAddr, 0, sizeof(servAddr));
    servAddr.sin_family=AF_INET;
    servAddr.sin_addr.s_addr=inet_addr("127.0.0.1");
    servAddr.sin_port=htons(atoi(argv));

    if(connect(*sock,(struct sockaddr*)&servAddr, sizeof(servAddr))==-1)
        errorHandling(CONNECT);

    return 1;
    
}




