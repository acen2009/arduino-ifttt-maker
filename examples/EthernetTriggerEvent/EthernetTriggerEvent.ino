#include <IFTTTMaker.h>

/*******************************************************************
 *  Trigger event at end of the setup                              *
 *                                                                 *
 *  adapted by Brian Lough                                         *
 *******************************************************************/

#include <Ethernet.h>
//------- Replace the following! ------
char ssid[] = "xxx";       // your network SSID (name)
char password[] = "yyyy";  // your network key
#define KEY "zzzzzzzzzzzzzzzzzzzz"  // Get it from this page https://ifttt.com/services/maker/settings
#define EVENT_NAME "event" // Name of your event name, set when you are creating the applet

byte mac[] = {  0x00, 0xAA, 0xBB, 0xCC, 0xDE, 0x02 };

EthernetClient client;
IFTTTMaker ifttt(KEY, client);

void setup() {

  Serial.begin(115200);
  Ethernet.begin(mac);

  //triggerEvent takes an Event Name and then you can optional pass in up to 3 extra Strings
  if(ifttt.triggerEvent(EVENT_NAME, ssid)){
    Serial.println("Successfully sent");
  } else
  {
    Serial.println("Failed!");
  }

}

void loop() {
}