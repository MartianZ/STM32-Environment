#include "stm32f10x.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"

#ifndef __OLED_H__
#define __OLED_H__

#ifndef VOID
    #define VOID void
#endif /* VOID */

#ifndef UCHAR8
    #define UCHAR8 unsigned char
#endif /* UCHAR8 */

#ifndef CHAR8
    #define CHAR8 char  
#endif /* CHAR8 */

#ifndef USHORT16
    #define USHORT16 unsigned short
#endif /* USHORT16 */

#ifndef SHORT16
    #define SHORT16 short
#endif /* SHORT16 */

#ifndef ULONG32
    #define ULONG32 unsigned long int  
#endif /* ULONG32 */

#ifndef LONG32
    #define LONG32 long int
#endif /* LONG32 */

#ifndef ULONG64
    #define ULONG64 unsigned long long int
#endif /* ULONG64 */

#ifndef LONG64
    #define LONG64 long long int
#endif /* LONG64 */

#ifndef TRUE
    #define TRUE 1
#endif /* TRUE */

#ifndef FALSE
    #define FALSE 0
#endif /* FALSE */


#define LED_IMAGE_WHITE       1
#define LED_IMAGE_BLACK       0

#define LED_MAX_ROW_NUM      64
#define LED_MAX_COLUMN_NUM  128

extern VOID LED_Init(VOID);
extern VOID LED_SetPos(UCHAR8 ucIdxX, UCHAR8 ucIdxY); 
extern VOID LED_P6x8Char(UCHAR8 ucIdxX,UCHAR8 ucIdxY,UCHAR8 ucData);
extern VOID LED_P6x8Str(UCHAR8 ucIdxX,UCHAR8 ucIdxY,UCHAR8 ucDataStr[]);
extern VOID LED_P8x16Str(UCHAR8 ucIdxX,UCHAR8 ucIdxY,UCHAR8 ucDataStr[]);
extern VOID LED_P14x16Str(UCHAR8 ucIdxX,UCHAR8 ucIdxY,UCHAR8 ucDataStr[]);
extern VOID LED_PXx16MixStr(UCHAR8 ucIdxX, UCHAR8 ucIdxY, UCHAR8 ucDataStr[]);
extern VOID LED_Fill(UCHAR8 ucData);
//extern VOID LED_PrintChar(UCHAR8 ucIdxX, UCHAR8 ucIdxY, CHAR8 cData);
extern VOID LED_PrintShort(UCHAR8 ucIdxX, UCHAR8 ucIdxY, CHAR8 sData);
extern VOID LED_PrintImage(UCHAR8 *pucTable, USHORT16 usRowNum, USHORT16 usColumnNum);

#endif