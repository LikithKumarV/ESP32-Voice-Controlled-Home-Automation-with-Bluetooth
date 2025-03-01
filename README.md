IoT Voice-Controlled Home Automation
This project allows you to control home appliances like lights, fans, and TVs using voice commands over Bluetooth. It's implemented using an Arduino (or similar microcontroller) with Bluetooth capabilities and can be controlled via a mobile app or any Bluetooth terminal.

Features
Voice Control: You can send simple voice commands to turn appliances on or off.
Bluetooth Communication: The communication between the microcontroller and a mobile device is established using Bluetooth.
App-Independent: The system doesn’t require a specific mobile app; any Bluetooth serial terminal app can be used to send commands.
Components
Arduino (or ESP32/ESP8266): The microcontroller responsible for controlling the appliances.
Bluetooth Module (HC-05/ESP32): For Bluetooth communication.
Relay Modules: To control high voltage appliances like light, fan, and TV.
Home Appliances: Light, Fan, TV (can be replaced with other appliances).
Jumper Wires and Breadboard for connections.
Pin Configuration
Light: Pin 33
Fan: Pin 15
TV: Pin 18
Installation
Hardware Setup
Connect the relay modules to the corresponding pins on the microcontroller (Light - Pin 33, Fan - Pin 15, TV - Pin 18).
Connect the appliances to the relay modules. Make sure the relay can handle the voltage and current of the appliances.
Bluetooth Module Setup: If you're using an ESP32, the Bluetooth functionality is already integrated. For other microcontrollers like Arduino, you might need a Bluetooth module like HC-05 or HC-06.
Software Setup
Arduino IDE: Open the Arduino IDE and load this script onto your microcontroller.
Bluetooth Serial Monitor: Pair your Bluetooth module with your smartphone or computer. Use any Bluetooth serial terminal app to send commands to the device.
Code Explanation
Bluetooth Communication:

The program uses BluetoothSerial to communicate over Bluetooth.
Voice commands are received via Bluetooth in the loop() function and processed.
Control Functions:

everythingon(): Turns on the light, fan, and TV.
everythingoff(): Turns off all appliances.
Individual control functions like lighton(), fanon(), tvon(), and their corresponding "off" functions.
Voice Commands:

The program recognizes the following commands:
"everything on"
"everything off"
"light on"
"light off"
"fan on"
"fan off"
"TV on"
"TV off"
Serial Monitor: The received commands are printed on the Serial Monitor for debugging.

Usage
Upload Code: After wiring up your components and configuring the Arduino IDE, upload the code to the microcontroller.
Connect via Bluetooth: Pair your phone or device with the Bluetooth module (named "IOT").
Send Commands: Open any Bluetooth terminal on your device and send the following commands to control the appliances:
everything on
light on
fan on
TV on
everything off
light off
fan off
TV off
Example Commands
light on – Turns on the light.
fan off – Turns off the fan.
everything off – Turns off all connected appliances.
Future Improvements
Voice Recognition: Integrate a voice recognition module to make the system fully voice-controlled.
Smartphone App: Develop a custom app to control appliances more easily.
More Appliances: Expand the system to control more devices.
