#include "usbd_framework.h"


void usbd_initialize()
{
	initialize_usb_pins();
	initialize_core();
	connect();
}
