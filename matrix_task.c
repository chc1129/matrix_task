#include "matrix_task.h"

/* task function */
int chgStsTask_00( int event ) {
  /* fuction action */
  printf("Path Through %s Now Status:%d, Event:%d.\n", __FUNCTION__, gSts, gEvent);

  if (event == EVENT_001 ) {
    gSts = STS_001;
  }

  return 0;
}

int chgStsTask_01( int event ) {
  /* fuction action */
  printf("Path Through %s Now Status:%d, Event:%d.\n", __FUNCTION__, gSts, gEvent);
  return 0;
}

int chgStsTask_02( int event ) {
  /* fuction action */
  printf("Path Through %s Now Status:%d, Event:%d.\n", __FUNCTION__, gSts, gEvent);

  if (event == EVENT_001) {
    gSts = STS_002;
  }

  return 0;
}

int chgStsTask_03( int event ) {
  /* fuction action */
  printf("Path Through %s Now Status:%d, Event:%d.\n", __FUNCTION__, gSts, gEvent);
  return 0;
}

int chgStsTask_04( int event ) {
  /* fuction action */
  printf("Path Through %s Now Status:%d, Event:%d.\n", __FUNCTION__, gSts, gEvent);
  return 0;
}

int chgStsTask_05( int event ) {
  /* fuction action */
  printf("Path Through %s Now Status:%d, Event:%d.\n", __FUNCTION__, gSts, gEvent);

  if (event == EVENT_002) {
    gSts = STS_END;
  }

  return 0;
}

int chgStsTask_06( int event ) {
  /* fuction action */
  printf("Path Through %s Now Status:%d, Event:%d.\n", __FUNCTION__, gSts, gEvent);

  if (event == EVENT_001 ) {
    gSts = STS_001;
  }

  return 0;
}

int chgStsTask_07( int event ) {
  /* fuction action */
  printf("Path Through %s Now Status:%d, Event:%d.\n", __FUNCTION__, gSts, gEvent);
  return 0;
}



int eventNotice( int notice_event ) {
  int ret = 0;

  if (( EVENT_001 > notice_event ) || ( EVENT_MAX < notice_event )) {
    /* err event */
    printf("Event Err Notice.\n");
    return -1;
  }

  /* Event Notice */
  ret = (*chgStsTask_table[ gSts ][ gEvent ])( notice_event );
  if ( ret != 0 ) {
    return -1;
  }

  ret = setDebugLog( notice_event );
  if (ret != 0) {
    return -1;
  }

  return 0;
}

