#include <stdio.h>
#include <stdlib.h>
#include "matrix_task.h"

int main( void ) {
  int ret = 0;
  int dummyArg = 0;

  printf("Status Change Prgram Start.\n");

  ret = (*chgStsTask_table[ gSts ][ gEvent ])( dummyArg );
  if ( ret != 0 ) {
    printf("Err\n");
  }

  printf("Status Change Prgram End.\n");

  return 0;
 }


