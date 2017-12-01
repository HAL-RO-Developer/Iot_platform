// onceDRead
// Created 2017/10/20
// By Hirotaka Nagaoka

#include <DeviceControl.h>
#include "EndFunc.h"

/* onceDRead */
SSHT HDRead( CONTEXT_DATA *cdata, RESULT_DATA *rdata ){
	SSHT rtn = RESULT_OK;
  static SSHT old  = LOW;
	if( cdata->Port.Mode != INPUT ){
		Digital::SetMode( cdata->Port.Pin1, INPUT );
	}	
	rdata->Value = Digital::Read( cdata->Port.Pin1 ); // 値取得
  if(rdata->Value == HIGH && old == LOW){
    old = rdata->Value;
    rdata->Result = rtn;
    return rtn;
    }else{
      old = rdata->Value;
      rdata->Value = -1;
      }
}