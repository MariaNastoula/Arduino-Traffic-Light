const int Green_PIN = 2;//set Arduino digital pin 2 as the green LED pin
const int Yellow_PIN = 4; // set the Arduino digital pin 4 as the yellow LED pin
const int Red_PIN = 6; // set the Arduino digital pin 6 as the red LED pin

void setup()
{
    pinMode(Green_PIN, OUTPUT);  //initialize pin 2 as output
    pinMode(Yellow_PIN, OUTPUT); //initialize pin 4 as outuput
    pinMode(Red_PIN, OUTPUT); //initialize pin 6 as output
}

void loop()
{
    //turn on only the green led for 1sec
    digitalWrite(Green_PIN, HIGH);
    digitalWrite(Yellow_PIN, LOW);
    digitalWrite(Red_PIN, LOW);
    delay(1000);
    
    //turn off the green led - turn on the yellow for 1 sec
    digitalWrite(Green_PIN,LOW);
    digitalWrite(Yellow_PIN,HIGH);
    delay(1000);

    //turn off thhe yelloa led - turn on the red for 1 sec
    digitalWrite(Yellow_PIN, LOW);
    digitalWrite(Red_PIN,HIGH);
    delay(1000);
}
