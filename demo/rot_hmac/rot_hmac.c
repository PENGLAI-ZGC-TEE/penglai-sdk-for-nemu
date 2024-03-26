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

int call_sha256_api() {
  eapp_print("%s is testing\n", "SHA256 API");
  EAPP_OCALL(OCALL_ROT_SHA256);
  //EAPP_OCALL(OCALL_ROT_SM3);
  //EAPP_OCALL(OCALL_ROT_SM4);
  EAPP_RETURN(0);
}

int call_sm3_api() {
  eapp_print("%s is testing\n", "SM3 API");
  //EAPP_OCALL(OCALL_ROT_SHA256);
  EAPP_OCALL(OCALL_ROT_SM3);
  //EAPP_OCALL(OCALL_ROT_SM4);
  EAPP_RETURN(0);
}

int call_sm4_api() {
  eapp_print("%s is testing\n", "SM4 API");
  //EAPP_OCALL(OCALL_ROT_SHA256);
  //EAPP_OCALL(OCALL_ROT_SM3);
  EAPP_OCALL(OCALL_ROT_SM4);
  EAPP_RETURN(0);
}


int EAPP_ENTRY main(){
  unsigned long * args;
  EAPP_RESERVE_REG;
  //call_sm3_api(args);
  call_sm4_api(args);
}
