//
//  rot_hmac.c
//

/*
 * Author: zhaoxiquan
 * 
 * Data: 2024.1.11
 * 
 * Description: Trusted Application call ROT API to hash the kMessage
 *
 */

#include "eapp.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <assert.h>
#include "ocall.h"

int call_rot_sha256() {
  //eapp_print("%s is testing\n", "ROT HMAC");
  EAPP_OCALL(OCALL_ROT_SHA256);
  EAPP_RETURN(0);
}


int EAPP_ENTRY main(){
  unsigned long * args;
  EAPP_RESERVE_REG;
  call_rot_sha256(args);
}
