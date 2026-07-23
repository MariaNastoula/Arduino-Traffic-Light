const int Green_PIN = 2;
const int Yellow_PIN = 4;
const int Red_PIN = 6;

void setup()
{
    pinMode(Green_PIN, OUTPUT);
    pinMode(Yellow_PIN, OUTPUT);
    pinMode(Red_PIN, OUTPUT);
}

void loop()
{
    digitalWrite(Green_PIN, HIGH);
    digitalWrite(Yellow_PIN, LOW);
    digitalWrite(Red_PIN, LOW);
    delay(1000);
    
    digitalWrite(Green_PIN,LOW);
    digitalWrite(Yellow_PIN,HIGH);
    delay(1000);

    digitalWrite(Yellow_PIN, LOW);
    digitalWrite(Red_PIN,HIGH);
    delay(1000);
}
