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
    id: rootsettings    

    Page {
        
        id: setting
        
        ScrollView {
            
        
    Container {
        
        //verticalAlignment: VerticalAlignment.Fill
        layoutProperties: StackLayoutProperties {
            spaceQuota: 20
        }
       layout: StackLayout {
            //columnCount: 2
        }
        Label {
            multiline: true
            text: "NOTE: These do not currently work. This app to be opensourced for many improvements"
        }
        
        Label {                       
            text: settings.uuid 
        }
        
        topPadding: 15
        TextField {
            id: uuidObject
            objectName: "uuidObject"
            textFormat: TextFormat.Plain
            text : settings.uuid
        }
        
            Button {
                id: title_btn0                
                text: "Back"
                onClicked: {
                    close();
                }
            }
            Button {
                id: title_btn2                
                text: "Save"
                onClicked: {
                    settings.uuid = uuidObject.text ;
                }                                
                }


                Button {
                    id: title_btn3
                    horizontalAlignment: HorizontalAlignment.Left
                    text: "Reset"
                    onClicked: {
                        uuidObject.text = "3088e24053954894961ecff021bd6055";
                    }
                }
                Label {
                    text: "Notify all UUIDs"
                }       
                
                ToggleButton {
                    id: tbuuid         
                }
                Label {
                    text: "Notify Only"
                }       
                
                ToggleButton {
                    id: tbonly
                }
                Label {
                    text: "Turn on Wifi"
                    
                }       
                ToggleButton {
                    id: tbwifi                    
                    }
 
}
    }
}
}

    


