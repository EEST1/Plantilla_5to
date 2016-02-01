/*
 * File:   Ap_Puertos.h
 * Author: Esteban Lemos
 *
 * Created on 27 de abril de 2014, 16:04
 */

#ifndef AP_INI_H
#define	AP_INI_H

#ifdef	__cplusplus
extern "C" {
#endif

#ifdef	__cplusplus
}
#endif

#endif	/* AP_PUERTOS_H */

#define LED5    LATDbits.LD0
#define LED6    LATDbits.LD1
#define LED1    LATDbits.LD2
#define LED2    LATDbits.LD3
#define LED3    LATCbits.LC6
#define LED4    LATCbits.LC7

#define BOT1    PORTDbits.RD4
#define BOT2    PORTDbits.RD5
#define BOT3    PORTDbits.RD6
#define BOT4    PORTDbits.RD7

#define DISP1   LATAbits.LA4
#define DISP2   LATAbits.LA5
#define DISP3   LATEbits.LATE0
#define DISP4   LATEbits.LATE1
#define DOT     LATEbits.LATE2


void pic_ini13(void);
void timer_ini13(void);
