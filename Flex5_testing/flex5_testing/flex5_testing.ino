/***************************************************** 
* ESP32 Analog Input Test 
* Analog Input: ADC_1_0 pin ==> GPIO36 (VP).
* Analog Input: ADC_1_0 pin ==> GPIO37
* Analog Input: ADC_1_0 pin ==> GPIO38
* Analog Input: ADC_1_0 pin ==> GPIO39
* Analog Input: ADC_1_0 pin ==> GPIO32
*****************************************************/
//Analog Input
#define ANALOG_PIN_0 36
#define ANALOG_PIN_1 37
#define ANALOG_PIN_2 38
#define ANALOG_PIN_3 39
#define ANALOG_PIN_4 32

int analog_value0 = 0;
int analog_value1 = 0;
int analog_value2 = 0;
int analog_value3 = 0;
int analog_value4 = 0;
void setup()
{
  Serial.begin(115200);
  delay(150); // give me time to bring up serial monitor
  //Serial.println("ESP32 Analog IN Test");
}

void loop()
{
  analog_value0 = analogRead(ANALOG_PIN_0);
  analog_value1 = analogRead(ANALOG_PIN_1);
  analog_value2 = analogRead(ANALOG_PIN_2);
  analog_value3 = analogRead(ANALOG_PIN_3);
  analog_value4 = analogRead(ANALOG_PIN_4);

Serial.print(analog_value0);
Serial.print(",");
Serial.print(analog_value1);
Serial.print(",");
Serial.print(analog_value2);
Serial.print(",");
Serial.print(analog_value3);
Serial.print(",");
Serial.println(analog_value4);

  delay(500);
}
