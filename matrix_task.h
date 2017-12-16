#include <stdio.h>
#include <stdlib.h>

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
static int gSts;
/* global event */
static int gEvent;

/* proto type */
int chgStsTask_00( int arg );
int chgStsTask_01( int arg );
int chgStsTask_02( int arg );
int chgStsTask_03( int arg );
int chgStsTask_04( int arg );
int chgStsTask_05( int arg );

typedef int ( *CHGSTSTASK_FUNC )( int arg );

/* Function Table */
static CHGSTSTASK_FUNC chgStsTask_table[ STS_MAX ][ EVENT_MAX ] = {
  { chgStsTask_00, chgStsTask_01 },
  { chgStsTask_02, chgStsTask_03 },
  { chgStsTask_04, chgStsTask_05 }
};



