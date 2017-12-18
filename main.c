#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "matrix_task.h"

int main( void ) {
  int ret = 0;
  int dummyArg = 0;

  printf("Status Change Prgram Start.\n");

  gSts = STS_INIT;

  ret = eventNotice( EVENT_001 );
  if ( ret != 0 ) {
    printf("Err\n");
  }

  printf("Status Change Prgram End.\n");

  return 0;
 }

int setDebugLog( int status, int event) {

  if ( gDebugCnt == DEBUG_DATA_MAX) {
    gDebugCnt = 0;
  }

  time( &debugLog[gDebugCnt].debugTime );
  debugLog[gDebugCnt].debugSts = status;
  debugLog[gDebugCnt].debugEvent = event;

  return 0;
}

