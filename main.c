#include <stdio.h>
#include <stdlib.h>

/* proto type */
int chgStsTask_00( int arg );
int chgStsTask_01( int arg );
int chgStsTask_02( int arg );
int chgStsTask_03( int arg );
int chgStsTask_04( int arg );

typedef int ( *CHGSTSTASK_FUNC )( int arg );

/* status */
enum {
  STS_INIT,
  STS_001,
  STS_002,
  STS_003,
  STS_004,
  STS_END,
  STS_MAX
} prgSts;

/* event */
enum {
  EVENT_001,
  EVENT_002,
  EVENT_MAX
} eventNum;

/* global status */
int gSts = STS_INIT;
/* global event */
int gEvent = EVENT_001;

/* task function */
int chgStsTask_00( int arg ) {
  /* fuction action */
  printf("Path Through %s.\n", __FUNCTION__);
  return 0;
}

int chgStsTask_01( int arg ) {
  /* fuction action */
  printf("Path Through %s.\n", __FUNCTION__);
  return 0;
}

int chgStsTask_02( int arg ) {
  /* fuction action */
  printf("Path Through %s.\n", __FUNCTION__);
  return 0;
}

int chgStsTask_03( int arg ) {
  /* fuction action */
  printf("Path Through %s.\n", __FUNCTION__);
  return 0;
}

int chgStsTask_04( int arg ) {
  /* fuction action */
  printf("Path Through %s.\n", __FUNCTION__);
  return 0;
}

int chgStsTask_05( int arg ) {
  /* fuction action */
  printf("Path Through %s.\n", __FUNCTION__);
  return 0;
}




/* Function Table */
static CHGSTSTASK_FUNC chgStsTask_table[ STS_MAX ][ EVENT_MAX ] = {
  { chgStsTask_00, chgStsTask_01 },
  { chgStsTask_02, chgStsTask_03 },
  { chgStsTask_04, chgStsTask_05 }
};




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




