
#define BLYNK_PRINT Serial // digunakan untuk monitor blynk di serial

#include <ESP8266WiFi.h> // file untuk model wifi
#include <BlynkSimpleEsp8266.h> // file untuk blynk

char auth[] = "YourAuthToken"; // token yang dikirim dari blynk ke email kalian masing masing
char ssid[] = "school";
char pass[] = "apaaja123";

void setup() // fungsi utama, dijalankan sekali
{
  // Debug console
  Serial.begin(9600); // untuk monitor di serial print

  Blynk.begin(auth, ssid, pass);

}

void loop()// ifungsi utama, dijalankan sekali
{
  Blynk.run();
}
