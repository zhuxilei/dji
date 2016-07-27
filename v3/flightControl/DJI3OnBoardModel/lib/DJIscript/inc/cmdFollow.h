/*! @brief
 *  @file cmdFollow.h
 *  @version 3.0
 *  @date Jan 7, 2016
 *
 *  @abstract
 *
 *
 *  @attention
 *  Project configuration:
 *  None
 *
 *  @version features:
 *  -* @version V3.0
 *  -* DJI-onboard-SDK for Windows,QT,STM32,ROS,Cmake
 *  -* @date Jan 7, 2016
 *  -* @author william.wu
 *
 * */

#ifndef CMDFOLLOW_H
#define CMDFOLLOW_H

#include "DJI_Script.h"

/*! @note It is not necessary to know the meaning of each function's name.
 *  Just use it please. Maybe these names will change somehow.
 * */

bool FM         (DJI::onboardSDK::Script* script, DJI::UserData data);
bool startFM     (DJI::onboardSDK::Script* script, DJI::UserData data);
bool stopFM     (DJI::onboardSDK::Script* script, DJI::UserData data);
bool pauseFM    (DJI::onboardSDK::Script* script, DJI::UserData data);
bool restartFM  (DJI::onboardSDK::Script* script, DJI::UserData data);
bool updateFM   (DJI::onboardSDK::Script* script, DJI::UserData data);

#endif // CMDFOLLOW_H