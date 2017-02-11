/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  *
  * Copyright (c) 2016 STMicroelectronics International N.V.
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice,
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other
  *    contributors to this software may be used to endorse or promote products
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under
  *    this license is void and will automatically terminate your rights under
  *    this license.
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/


/* USER CODE BEGIN Private defines */
// USB media codes
#define USB_HID_SCAN_NEXT 0x01
#define USB_HID_SCAN_PREV 0x02
#define USB_HID_STOP      0x04
#define USB_HID_EJECT     0x08
#define USB_HID_PAUSE     0x10
#define USB_HID_MUTE      0x20
#define USB_HID_VOL_UP    0x40
#define USB_HID_VOL_DEC   0x80

// USB USB_HID_KEYboard codes
#define USB_HID_MODIFIER_LEFT_CTRL   0x01
#define USB_HID_MODIFIER_LEFT_SHIFT  0x02
#define USB_HID_MODIFIER_LEFT_ALT    0x04
#define USB_HID_MODIFIER_LEFT_GUI    0x08 // (Win/Apple/Meta)
#define USB_HID_MODIFIER_RIGHT_CTRL  0x10
#define USB_HID_MODIFIER_RIGHT_SHIFT 0x20
#define USB_HID_MODIFIER_RIGHT_ALT   0x40
#define USB_HID_MODIFIER_RIGHT_GUI   0x80


#define USB_HID_KEY_A    0x04
#define USB_HID_KEY_B    0x05
#define USB_HID_KEY_C    0x06
#define USB_HID_KEY_D    0x07
#define USB_HID_KEY_E    0x08
#define USB_HID_KEY_F    0x09
#define USB_HID_KEY_G    0x0A
#define USB_HID_KEY_H    0x0B
#define USB_HID_KEY_I    0x0C
#define USB_HID_KEY_J    0x0D
#define USB_HID_KEY_K    0x0E
#define USB_HID_KEY_L    0x0F
#define USB_HID_KEY_M    0x10
#define USB_HID_KEY_N    0x11
#define USB_HID_KEY_O    0x12
#define USB_HID_KEY_P    0x13
#define USB_HID_KEY_Q    0x14
#define USB_HID_KEY_R    0x15
#define USB_HID_KEY_S    0x16
#define USB_HID_KEY_T    0x17
#define USB_HID_KEY_U    0x18
#define USB_HID_KEY_V    0x19
#define USB_HID_KEY_W    0x1A
#define USB_HID_KEY_X    0x1B
#define USB_HID_KEY_Y    0x1C
#define USB_HID_KEY_Z    0x1D
#define USB_HID_KEY_1    0x1E
#define USB_HID_KEY_2    0x1F
#define USB_HID_KEY_3    0x20
#define USB_HID_KEY_4    0x21
#define USB_HID_KEY_5    0x22
#define USB_HID_KEY_6    0x23
#define USB_HID_KEY_7    0x24
#define USB_HID_KEY_8    0x25
#define USB_HID_KEY_9    0x26
#define USB_HID_KEY_0    0x27
#define USB_HID_KEY_ENTER    0x28
#define USB_HID_KEY_ESC    0x29
#define USB_HID_KEY_BACKSPACE    0x2A
#define USB_HID_KEY_TAB    0x2B
#define USB_HID_KEY_SPACE    0x2C
#define USB_HID_KEY_MINUS    0x2D
#define USB_HID_KEY_EQUAL    0x2E
#define USB_HID_KEY_LEFT_BRACE    0x2F
#define USB_HID_KEY_RIGHT_BRACE    0x30
#define USB_HID_KEY_BACKSLASH    0x31
#define USB_HID_KEY_NUMBER    0x32
#define USB_HID_KEY_SEMICOLON    0x33
#define USB_HID_KEY_QUOTE    0x34
#define USB_HID_KEY_TILDE    0x35
#define USB_HID_KEY_COMMA    0x36
#define USB_HID_KEY_PERIOD    0x37
#define USB_HID_KEY_SLASH    0x38
#define USB_HID_KEY_CAPS_LOCK    0x39
#define USB_HID_KEY_F1    0x3A
#define USB_HID_KEY_F2    0x3B
#define USB_HID_KEY_F3    0x3C
#define USB_HID_KEY_F4    0x3D
#define USB_HID_KEY_F5    0x3E
#define USB_HID_KEY_F6    0x3F
#define USB_HID_KEY_F7    0x40
#define USB_HID_KEY_F8    0x41
#define USB_HID_KEY_F9    0x42
#define USB_HID_KEY_F10    0x43
#define USB_HID_KEY_F11    0x44
#define USB_HID_KEY_F12    0x45
#define USB_HID_KEY_PRINTSCREEN    0x46
#define USB_HID_KEY_SCROLL_LOCK    0x47
#define USB_HID_KEY_PAUSE    0x48
#define USB_HID_KEY_INSERT    0x49
#define USB_HID_KEY_HOME    0x4A
#define USB_HID_KEY_PAGE_UP    0x4B
#define USB_HID_KEY_DELETE    0x4C
#define USB_HID_KEY_END    0x4D
#define USB_HID_KEY_PAGE_DOWN    0x4E
#define USB_HID_KEY_RIGHT    0x4F
#define USB_HID_KEY_LEFT    0x50
#define USB_HID_KEY_DOWN    0x51
#define USB_HID_KEY_UP    0x52
#define USB_HID_KEY_NUM_LOCK    0x53
#define USB_HID_KEYPAD_SLASH    0x54
#define USB_HID_KEYPAD_ASTERIX    0x55
#define USB_HID_KEYPAD_MINUS    0x56
#define USB_HID_KEYPAD_PLUS    0x57
#define USB_HID_KEYPAD_ENTER    0x58
#define USB_HID_KEYPAD_1    0x59
#define USB_HID_KEYPAD_2    0x5A
#define USB_HID_KEYPAD_3    0x5B
#define USB_HID_KEYPAD_4    0x5C
#define USB_HID_KEYPAD_5    0x5D
#define USB_HID_KEYPAD_6    0x5E
#define USB_HID_KEYPAD_7    0x5F
#define USB_HID_KEYPAD_8    0x60
#define USB_HID_KEYPAD_9    0x61
#define USB_HID_KEYPAD_0    0x62
#define USB_HID_KEYPAD_PERIOD    0x63

//
/* USER CODE END Private defines */

/**
  * @}
  */

/**
  * @}
*/

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
