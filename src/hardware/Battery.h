/*
*
* BATTERY - Measure the lithium battery status
*
* DIY-Thermocam Firmware
*
* GNU General Public License v3.0
*
* Copyright by Max Ritter
*
* http://www.diy-thermocam.net
* https://github.com/maxritter/DIY-Thermocam
*
*/

#ifndef BATTERY_H
#define BATTERY_H

#ifdef __cplusplus
extern "C" {
#endif

/*########################## PUBLIC PROCEDURES ################################*/

void checkBattery(bool start = false, bool calibrate = false);
int getLipoPerc(float vol);

#ifdef __cplusplus
}
#endif

#endif /* BATTERY_H */
