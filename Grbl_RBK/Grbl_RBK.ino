
/*  ~ GRBL with L293d (H-Bridge) and DC Motor Pen mechanism ~
              ╦═╗╔╗ ╦╔═
      By--    ╠╦╝╠╩╗╠╩╗     - 2016  Rakshith BK
              ╩╚═╚═╝╩ ╩         
 *  
 *  No licences no copyrights, well may be MIT.
 *  Use modify distribute and do whatever you want
 *  And even though this code will not launch any Nukes, 
 *  I'm not responsible for any destruction caused by it.!
 *  
 *  X-axis stepper --> 8, 9, 10, 11
 *  Y-axis stepper --> 4, 5, 6, 7
 *  DC motor pin for Pen --> 12     for Pen Up - M4
 *                                  for Pen Down - M3
 *  
 *  
 *  For Details and working -- 
 */


#include <avr/io.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include <avr/wdt.h>
#include <util/delay.h>
#include <math.h>
#include <inttypes.h>    
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>


#include "config.h"
#include "nuts_bolts.h"
#include "settings.h"
#include "eeprom.h"
#include "gcode.h"
#include "limits.h"
#include "motion_control.h"
#include "planner.h"
#include "print.h"
#include "protocol.h"
#include "serial.h"
#include "spindle_control.h"
#include "stepper.h"



void setup() {
 pinMode(12,OUTPUT); 

}

void loop() {
  

}
