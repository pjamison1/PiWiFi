/*
 * Copyright (c) 2016 Philip Ivan Jamison.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef COMMON_HPP_
#define COMMON_HPP_

#define BEACON_EXPIRY_INTERVAL_SECONDS (1*60)  //  CHANGE BACK TO 5 * 60 PIJ
#define BEACON_EXPIRY_SCAN_INTERVAL_MS (1*10*1000)  // CHANGE  BACK TO 3 * 60 * 1000
#define WAKEME_INVOKE_HEADLESS_SERVICE "uk.co.bottear.PiWiFiService"
#define WAKEME_INVOKE_GUI "uk.co.bottear.PiWiFi"

#define WAKEME_INVOKE_ACTION_RESET "uk.co.bottear.PiWiFiService.RESET"
#define WAKEME_INVOKE_ACTION_STOPSERVICE "uk.co.bottear.PiWiFiService.STOPSERVICE"
#define WAKEME_INVOKE_ACTION_ADDSCAN "uk.co.bottear.PiWiFiService.ADDSCAN"
#define WAKEME_INVOKE_ACTION_REMOVESCAN "uk.co.bottear.PiWiFiService.REMOVESCAN"
#define WAKEME_INVOKE_ACTION_ENABLESCANINVOKE "uk.co.bottear.PiWiFiService.ENABLESCANINVOKE"
#define WAKEME_INVOKE_ACTION_DISABLESCANINVOKE "uk.co.bottear.PiWiFiService.DISABLESCANINVOKE"
#define WAKEME_INVOKE_ACTION_SCANRESULT "bb.action.bluetooth.SCANRESULT"
#define WAKEME_INVOKE_ACTION_STARTSERVICE "bb.action.START"
#define WAKEME_INVOKE_ACTION_STARTAPP  "bb.action.START"

#define WAKEME_HEADLESS_SOCKET_SERVER_NAME "PiWiFiServiceSocket"
#define WAKEME_HEADLESS_SOCKET_SERVER_RETRY_INTERVAL_MS (2*1000)
#define WAKEME_HEADLESS_SOCKET_SERVER_MAX_RETRY_INTERVAL_MS (30*1000)

#endif /* COMMON_HPP_ */
