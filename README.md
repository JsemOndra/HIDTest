# HIDTest
This is very simple test of USB HID device on STM32F103 blue pill board . 
This device should be able to do following stuff:
- volume up/down/mute
- play/pause
- previous/next song
- lock computer

TODO:
- Design PCB
- Improve button logic - do not send commands repeatedly until button is released for buttons play/pause, mute, previous and next)
- Implement debounce better than Delay :)
Most of the code comes from Oliv' (http://notes.iopush.net/stm32-custom-usb-hid-step-by-step-2/)
