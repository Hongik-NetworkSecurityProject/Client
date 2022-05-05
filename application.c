#include "src/include/init.h"
#include "src/include/macro.h"
#include "src/include/error.h"
#include "src/include/security.h"
#include "src/include/printText.h"



int main(int argc, char const *argv[])
{
    
    int sock;
    u_int8_t id[ID_SIZE];
    u_int8_t challenge[CHALLENGE_TS_SIZE];
    u_int8_t symmetricKey1[SYM_KEY_SIZE], symmetricKey2[SYM_KEY_SIZE];
    u_int8_t initialVector[AES_BLOCK_SIZE];
    u_int8_t token[TOKEN_SIZE];

    int requestMessageSize = sizeof("I need a Token");
    Certificate *certificate  = NULL;

    if (argc != 4)
    {
        printf("Usage: %s <authentication server port> <file server port> <file_name>\n", argv[0]);
        errorHandling(ARGUMENT);
    }
    
    if(initClinet(&sock, argv[1])){
        printConnection(AUTH_SERVER);
    }


    return 0;
}
