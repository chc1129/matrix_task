#ifndef _MATRIX_TASK_
#define _MATRIX_TASK_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/* status */
enum {
  STS_INIT,
  STS_001,
  STS_002,
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
int chgStsTask_00( int event );
int chgStsTask_01( int event );
int chgStsTask_02( int event );
int chgStsTask_03( int event );
int chgStsTask_04( int event );
int chgStsTask_05( int event );
int chgStsTask_06( int event );
int chgStsTask_07( int event );

typedef int ( *CHGSTSTASK_FUNC )( int event );

extern int eventNotice( int notice_event );

/* Function Table */
static CHGSTSTASK_FUNC chgStsTask_table[ STS_MAX ][ EVENT_MAX ] = {
  { chgStsTask_00, chgStsTask_01 },
  { chgStsTask_02, chgStsTask_03 },
  { chgStsTask_04, chgStsTask_05 },
  { chgStsTask_06, chgStsTask_07 }
};

#endif /* _MATRIX_TASK_ */
