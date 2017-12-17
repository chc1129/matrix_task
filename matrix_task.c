#include "matrix_task.h"

/* task function */
int chgStsTask_00( int arg ) {
  /* fuction action */
  printf("Path Through %s Now Status:%d, Event:%d.\n", __FUNCTION__, gSts, gEvent);
  return 0;
}

int chgStsTask_01( int arg ) {
  /* fuction action */
  printf("Path Through %s Now Status:%d, Event:%d.\n", __FUNCTION__, gSts, gEvent);
  return 0;
}

int chgStsTask_02( int arg ) {
  /* fuction action */
  printf("Path Through %s Now Status:%d, Event:%d.\n", __FUNCTION__, gSts, gEvent);
  return 0;
}

int chgStsTask_03( int arg ) {
  /* fuction action */
  printf("Path Through %s Now Status:%d, Event:%d.\n", __FUNCTION__, gSts, gEvent);
  return 0;
}

int chgStsTask_04( int arg ) {
  /* fuction action */
  printf("Path Through %s Now Status:%d, Event:%d.\n", __FUNCTION__, gSts, gEvent);
  return 0;
}

int chgStsTask_05( int arg ) {
  /* fuction action */
  printf("Path Through %s Now Status:%d, Event:%d.\n", __FUNCTION__, gSts, gEvent);
  return 0;
}

int chgStsTask_06( int arg ) {
  /* fuction action */
  printf("Path Through %s Now Status:%d, Event:%d.\n", __FUNCTION__, gSts, gEvent);
  return 0;
}

int chgStsTask_07( int arg ) {
  /* fuction action */
  printf("Path Through %s Now Status:%d, Event:%d.\n", __FUNCTION__, gSts, gEvent);
  return 0;
}



int eventNotice( int notice_event ) {
  int ret = 0;
  int dummyArg = 0;

  if (( EVENT_001 > arg ) || ( EVENT_MAX < arg )) {
    /* err event */
    printf("Event Err Notice.\n");
    return -1;
  }

  gEvent = notice_event;

  /* Event Notice */
  ret = (*chgStsTask_table[ gSts ][ gEvent ])( dummyArg );
  if ( ret != 0 ) {
    return -1;
  }


  return 0;
}

