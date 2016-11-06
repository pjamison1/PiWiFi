
PiWiFi

The purpose of this application is to allow a power user of BlackBerry and owner of some kind of beacon (Blowtooth Low Energy source) to confisure it to automatically turn on the BlackBery Device's WiFi on returning to the Beacon (Home, Office , etc). It is basic and cloned almost in entirety from the PiWiFi (service) provided in Cascades Community Samples. If any part of the author or licence is broken or removed this is purely accidental - I wish to adhere to the Apache Licence and ensure the original code and authors are acknowledged.

The sample code for this application is Open Source under the Apache 2.0 License.

Applies To

Cascades for BlackBerry 10
Author(s)

Philip Ivan Jamison
Release History

Known Issues

The UUID is currently hardcoded. I had too much difficulty trying to update it and save it via QSettings but this would be the preference going forward.
Dependencies

BlackBerry Device Software 10.3 GOLD and greater
How to Build PiWiFi

Simply Import the project into a workspace in your NDK.

The PiWiFi application consists of two interrelated projects:

PiWiFi -- the GUI component of the application. PiWiFiService -- the Headless service component of the application.

These can be found under the PiWiFi top level folder. Copy this folder and all its contents to a location of your choosing then import these four projects into a workspace in your NDK.

When importing these projects do NOT copy them. You MUST ensure that the checkbox entitled "Copy projects into workspace" is NOT checked. There are interrelationships between the two constituent projects that will NOT be properly preserved if you copy them.

You should review the two projects after they have been imported paying particular attention to the settings in the bar-descriptor.xml file in the PiWiFi project. There is only one bar-descriptor.xml for this application and that is the one in the PiWiFi project. The other project has no bar-descriptor.xml file!

To build the application you should build the PiWiFi project. The other project will be built automatically as a dependent project.

You should ensure that both projects have the same settings in terms of Build Configuration; "Device-Debug", "Device-Release", etc.

But I don't want to build it myself!

If you don't want to build this sample application yourself we've included a pre-built and signed BAR file. You can find it in the folder "installable-bar-files".

To contribute code to this repository you must be signed up as an official contributor.

Contributing Changes

Please see the README of the Cascades-Community-Samples repository for instructions on how to add new Samples or make modifications to existing Samples.

Bug Reporting and Feature Requests

I am trying to put this up on github so work away if you know what you are doing...

Disclaimer

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
