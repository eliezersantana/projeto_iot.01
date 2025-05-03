#define ventilador 9
#define termometro A0
#define buzzer 12
#define led 10
#define ledverde 11

int baselineTemp = 30;
int toptemp = 50;
int celsius = 0;
int fahrenheit = 0;

void setup()
{
  pinMode(termometro, INPUT);
  Serial.begin(9600);

  pinMode(ventilador, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(ledverde, OUTPUT);
}

void loop()
{

  celsius = map(((analogRead(termometro) - 20) * 3.04), 0, 1023, -40, 125);
  fahrenheit = ((celsius * 9) / 5 + 32);
  Serial.print(celsius);
  Serial.print(" C, ");
  Serial.print(fahrenheit);
  Serial.println(" F");
  
   if (celsius < baselineTemp) {
    digitalWrite(ventilador, LOW);
    digitalWrite(ledverde, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  } else {
    digitalWrite(ventilador, HIGH);
    digitalWrite(ledverde, HIGH);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  }
  if (celsius >= toptemp) {
    digitalWrite(ventilador, HIGH);
    digitalWrite(ledverde, LOW);
    digitalWrite(buzzer,  HIGH);
    digitalWrite(led,  HIGH);
  }
  delay(1000); 
}
