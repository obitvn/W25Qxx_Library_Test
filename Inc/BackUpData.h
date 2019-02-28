/*

   ___  _     _ _     _____                    
  / _ \| |__ (_) |_  |_   _|__  __ _ _ __ ___  
 | | | | '_ \| | __|   | |/ _ \/ _` | '_ ` _ \ 
 | |_| | |_) | | |_    | |  __/ (_| | | | | | |
  \___/|_.__/|_|\__|   |_|\___|\__,_|_| |_| |_|
                                               

*/
#ifndef _BACKUPDATA_H
#define _BACKUPDATA_H

#include <stdbool.h>
#include <w25qxx.h>


#define ADD_SAVE_SETUP 0x000000

/*
-----------------------------------------------------------------------------------------------------
*/
bool WriteSetPhoneNumber(uint8_t *phone);
bool WriteSetTimeResponse(uint8_t *time_response);
bool WriteSetDomain(uint8_t *domain);
bool WriteSetToken(uint8_t *token);

/*
-----------------------------------------------------------------------------------------------------
*/

bool BackUpDataWeather();


/*
type_setup: 1 - Save phone number
            2 - Save time response
						3 - Save domain
						4 - Save Token
*/
bool WriteSetUp(uint8_t *content_setup, uint8_t type_setup);





#endif