#ifndef _MAIN_H_
#define _MAIN_H_

#include <time.h>

#define DEBUG_DATA_MAX 10

typedef struct debugMtx {
  time_t debugTime;
  int debugSts;
  int debugEvent;
} debugMtx_t;

debugMtx_t debugLog[ DEBUG_DATA_MAX ];

int gDebugCnt;

int setDebugLog( int status, int event);
int showDebugLog( void );

#endif /* _MAIN_H_ */
