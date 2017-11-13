// Created 2017/09/20
// By Riku Hashimoto

// include
#include "EndFunc.h"

CONTEXT_DATA context;
RESULT_DATA  result;

SSHT blinkAWrite( CONTEXT_DATA *,RESULT_DATA *,SINT);

//定数定義
#define LED_Pin 16
#define PIN_Mode INPUT

void setup() {
  //Serial.begin(115200); 
}

//loop
void loop() {
SSHT Value[2] = {255,0};
//必要情報(ポート番号等を構造体に格納)
context.port.mode = PIN_Mode;
context.port.pin1 = LED_Pin;
context.value = Value;
blinkAWrite( &context,&result,1000 );
//結果を表示
/*
Serial.println("_____");
Serial.print(result.value );
if(result.result == 0)Serial.println(" OK");
Serial.println("-----");
*/}

