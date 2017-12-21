#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "matrix_task.h"

int main( void ) {
  int ret = 0;
  int cnt = 0;

  printf("\n");
  printf("Status Change Prgram Start.\n");

  gSts = STS_INIT;

  for (cnt = 0; cnt < 3; cnt++ ) {
    ret = eventNotice( EVENT_001 );
    if ( ret != 0 ) {
      printf("Err\n");
    }
    ret = eventNotice( EVENT_002 );
    if ( ret != 0 ) {
      printf("Err\n");
    }
  }

  printf("Status Change Prgram End.\n");

  ret = showDebugLog();

  return 0;
 }


int setDebugLog( int status, int event) {

  if ( gDebugCnt == DEBUG_DATA_MAX) {
    gDebugCnt = 0;
  }

  time( &debugLog[gDebugCnt].debugTime );
  debugLog[gDebugCnt].debugSts = status;
  debugLog[gDebugCnt].debugEvent = event;

  gDebugCnt++;

  return 0;
}

int showDebugLog( void ) {
  int cnt = 0;


  printf("\n");
  printf("-------- SHOW DEBUG LOG ---------\n");

   for ( cnt = 0; cnt < DEBUG_DATA_MAX; cnt++ ) {
    printf("[%d] : ", cnt);
    printf("status:%d ", debugLog[cnt].debugSts);
    printf("event:%d ", debugLog[cnt].debugEvent);
    printf("\n");
  }

  printf("-------- DEBUG LOG END ---------\n");
  printf("\n");

 return 0;
}

