#include "../include/phase.h"
#include "../include/macro.h"
#include "../include/security.h"
#include "../include/printText.h"


void phase1SendRequestMessage(int *sock, u_int8_t *request, int sizeRequest){
    
    
    puts("Phase 1 :: Request message to AS to get a token.");

    if(enterKey() == 0) terminateClient(AUTH_SERVER);
    write(*sock, request, sizeRequest);

    puts("Phase 1 :: Request message sended.");
    puts("==================================================");
}



int enterKey(){
    char message[BUF_SIZE];
    int result;
    printf("\n");

    while(1){
        puts("Input message(go or Go) to send message.");
        puts("Input message(q or Q) to quit.");
        fgets(message,BUF_SIZE,stdin);
        if(!strcmp(message, "q\n") || !strcmp(message, "Q\n")){
            return 0;
        }
        else if(!strcmp(message,"go\n") || !strcmp(message, "Go\n")){
            return 1;
        }
        puts("Wrong Input. Try again.");
    }
    printf("\n");
}