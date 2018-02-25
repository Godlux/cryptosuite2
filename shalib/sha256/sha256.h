#ifndef SHA256_SHA256_H_
#define SHA256_SHA256_H_

#include "types.h"
#include "hash.h"
#include <stddef.h>
#include <unistd.h>

ssize_t sha256_hasher_write(sha256_hasher_t hasher, const void * buf, size_t count); 

#endif  
