#include <openssl/sha.h>
#include <openssl/bio.h>
#include <openssl/pem.h>
#include <openssl/rsa.h>
#include <openssl/evp.h>
#include <openssl/aes.h>
#include <openssl/rc4.h>
#include <openssl/rand.h>

typedef struct  _certificate
{
    unsigned char name[20];
    unsigned char publickey[512];
    unsigned char sign[256];
}Certificate;