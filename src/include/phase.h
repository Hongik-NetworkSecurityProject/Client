
#include <stdint.h>
#include <unistd.h>
#include "../include/security.h"

void phase1SendRequestMessage(int *sock, u_int8_t *request, int sizeRequest);
void phase2Verification(int *sock, u_int8_t *challenge, Certificate **cert);
void phase3MakeAuthentication(int *sock, u_int8_t *challenge, u_int8_t *symmetricKey1, u_int8_t *initialVector, u_int8_t *id);
void phase4RecieveToken(int *sock, u_int8_t* initialVector, u_int8_t* symmetricKey1, u_int8_t* symmetricKey2, 
                u_int8_t* token, Certificate* certification);
void phase5SendRequestFile(int *sock, const char* argv, u_int8_t* token, u_int8_t* symmetricKey2, u_int8_t* initialVector, u_int8_t* id);



int enterKey();