/* 
 * File:   Lemos.h
 * Author: Administrador
 *
 * Created on 11 de junio de 2014, 07:33
 */

#ifndef LEMOS_H
#define	LEMOS_H

#ifdef	__cplusplus
extern "C" {
#endif

void Send_Disp(unsigned char NroDisp,unsigned char Dato);
void Send_4Disp(unsigned char Umil,unsigned char Cent,unsigned char Dec,unsigned char Uni);
void leds(unsigned int velocidad);
void tic_timer0(void);


unsigned char mux_tout,bot_tout;
unsigned int  led_tout;

#define MUX_SET 4;          //multiplicador de mux_tout
#define BOT_REL 100;         //multiplicador de BOT_REL



#ifdef	__cplusplus
}
#endif

#endif	/* LEMOS_H */

