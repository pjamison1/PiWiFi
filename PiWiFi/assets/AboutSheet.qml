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

import bb.cascades 1.0

Sheet {
    id: root
Page{    
    ScrollView {
            Container {
                
                    verticalAlignment: VerticalAlignment.Fill
                    layoutProperties: StackLayoutProperties {
                        spaceQuota: 20
                    }
                    Button {
                        id: title_btn1
                        text: "Back"
                        onClicked: {
                            close();
                        }
                    }
                                
                
                //Label {
                  TextArea {                      
                  enabled: true
                  editable: false
                    id: taBody_about1
                    horizontalAlignment: HorizontalAlignment.Center
                    text: qsTr("Pi Wi Fi - Turn on your wifi when you return to your home or office.  If you have a pi3 (or Beacon using Bluetooth Low Energy) with the correct UUID.\n " + 
                    "This is made with the assistance of the WakeMeByBeacon BlackBerry source example, with thanks.\n " +
                    "The UUID is 30 88 e2 40 53 95 48 94 96 1e cf f0 21 bd 60 55 \n " + 
                    "The Bluetooth pi3 commands are:\n" +
                    "sudo hciconfig hci0 up\n" +
                    "sudo hciconfig hci0 leadv 3\n" + 
                    "sudo hcitool -i hci0 cmd 0x08 0x0008 1E 02 01 1A 1A FF 4C 00 02 15 30 88 e2 40 53 95 48 94 96 1e cf f0 21 bd 60 55 00 02 00 06 C8")
                    
                }
                
                Label {
                    id: lblAuthors
                    textStyle.fontWeight: FontWeight.Bold
                    text: qsTr("Authors")
                }
                Label {
                    id: lblAuthor_name2
                    text: qsTr("PIJ")                
                }
                Label {                                              
                    text: "http://www.apache.org/licenses/LICENSE-2.0" 
                    id: apache
                }
            }
        }
}
    }





/*

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

/*
import bb.cascades 1.0

Sheet {
    id: root
    
    onOpened: {
        animation.play();
    }

    Page {
        
        id: about
        titleBar: TitleBar {
            kind: TitleBarKind.FreeForm
            kindProperties: FreeFormTitleBarKindProperties {
                
                
                Container {
                    layout: StackLayout {
                        orientation: LayoutOrientation.LeftToRight
                    }
                    Container {
                        verticalAlignment: VerticalAlignment.Fill
                        layoutProperties: StackLayoutProperties {
                            spaceQuota: 20
                        }
                        CustomButton {
                            id: title_btn1
                            verticalAlignment: VerticalAlignment.Center
                            horizontalAlignment: HorizontalAlignment.Fill
                            text: "Back"
                            onClicked: {
                                close();
                            }
                            leftPadding: 10
                            topPadding: 15
                        }
                    }
                    Container {
                        verticalAlignment: VerticalAlignment.Center
                        layoutProperties: StackLayoutProperties {
                            spaceQuota: 60
                        }
                        Label {
                            text: qsTr("About ")
                            horizontalAlignment: HorizontalAlignment.Center
                            verticalAlignment: VerticalAlignment.Center
                            textStyle.fontWeight: FontWeight.W800
                        }
                    }
                    Container {
                        verticalAlignment: VerticalAlignment.Fill
                        layoutProperties: StackLayoutProperties {
                            spaceQuota: 20
                        }
                    }
                }
                

            }
        }

        actionBarVisibility: ChromeVisibility.Visible
        Container {
            layout: StackLayout {
            }
            leftPadding: 20
            rightPadding: 20
            verticalAlignment: VerticalAlignment.Fill
            Label {
                id: lblHeading_version
                //text: qsTr("V1.1.2") 
                text: {Application.applicationVersion}
                verticalAlignment: VerticalAlignment.Center
                horizontalAlignment: HorizontalAlignment.Center
            }
            ImageView {
                horizontalAlignment: HorizontalAlignment.Center
                imageSource: "asset:///images/icon.png"
                opacity: 0
                onTouch: {
                    if (event.isDown()) {
                        animation.play()
                    }
                }
                 attachedObjects: [
                    SequentialAnimation {
                        id: animation
                        animations: [
                            FadeTransition {
                                duration: 1000
                                fromOpacity: 0.0
                                toOpacity: 1.0
                            },
                            RotateTransition {
                                toAngleZ: -10
                                duration: 125
                            },
                            RotateTransition {
                                toAngleZ: 10
                                duration: 250
                            },
                            RotateTransition {
                                toAngleZ: -10
                                duration: 250
                            },
                            RotateTransition {
                                toAngleZ: 10
                                duration: 250
                            },
                            RotateTransition {
                                toAngleZ: 0
                                duration: 125
                            }
                        ]
                    }
                ]
            }

            ScrollView {

                Container {

                    Label {
                        id: taBody_about1
                        horizontalAlignment: HorizontalAlignment.Center
                        text: qsTr("Pi Wi Fi - Turn on your wifi when you return to your home or office.  If you have a pi3 (or iBeacon) with the correct UUID.\n " + 
                        "This is made with the assistance of the WakeMeByBeacon BlackBerry source example, with thanks.\n " +
                        "The UUID is 30 88 e2 40 53 95 48 94 96 1e cf f0 21 bd 60 55 \n " + 
                        "The Bluetooth pi3 commands are:\n" +
                        "sudo hciconfig hci0 up\n" +
                        "sudo hciconfig hci0 leadv 3\n" + 
                        "sudo hcitool -i hci0 cmd 0x08 0x0008 1E 02 01 1A 1A FF 4C 00 02 15 30 88 e2 40 53 95 48 94 96 1e cf f0 21 bd 60 55 00 02 00 06 C8")
                        multiline: true
                    }

                    Label {
                        id: lblAuthors
                        textStyle.fontWeight: FontWeight.Bold
                        text: qsTr("Authors")
                    }
                    Label {
                        id: lblAuthor_name2
                        text: qsTr("PIJ")

                    }
                    TextField {
                        text: "http://www.apache.org/licenses/LICENSE-2.0" 
                        id: apache
                    }
                }
            }
        }
        actions: [
            InvokeActionItem {
                id: shareMe
                ActionBar.placement: ActionBarPlacement.OnBar
                query {
                    mimeType: "text/plain"
                    invokeActionId: "bb.action.SHARE"
                    onQueryChanged: {
                        shareMe.query.updateQuery();
                    }
                }
                handler: InvokeHandler {
                    id: shareHandler
                    onInvoking: {
                        shareMe.data = "Check out the ( Original ) BlackBerry 10 'WheresMyBeacon' " + "application written by @jcmrim and @mdwrim " + "here http://bit.ly/SJBBKl";
                        shareHandler.confirm();
                    }
                }
            }
        ]

    }
}

*/
