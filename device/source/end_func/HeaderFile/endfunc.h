/*
    endfunc.h
    ���[�֐����ʃf�[�^��`�w�b�_
    Created 2017/09/20
    By Hirotaka Nagaoka
*/

#ifndef __ENDFUNC_H__
#define __ENDFUNC_H__

/* �\���̐錾 */
typedef struct{
  short port[2];  // �|�[�g���
  short value;    // �f�[�^
} CONTEXT_DATA;

typedef struct{
  short value;    // �f�[�^
  short result;   // OK(0)/NG(1)
} RESULT_DATA;

/* �萔��` */
#define RESULT_OK	( 0 )
#define RESULT_NG	( -1 )

#endif