const int arttir = 3;
const int azalt = 4;

const int dongu = 2;

int durum_arttir;
int durum_azalt;
int durum_dongu;

int sayac = 0;

void setup()
{
  pinMode(arttir, INPUT);
  pinMode(azalt, INPUT);
  pinMode(dongu, INPUT);

  Serial.begin(9600);
}

void loop()
{
  while (dongu == HIGH)
  {
    durum_arttir = digitalRead(arttir);
    durum_azalt = digitalRead(azalt);


    if (durum_arttir == HIGH)
    {
      sayac++;
      Serial.println("sayac = ");
      Serial.println(sayac);
      delay(200);
    }

    else if (durum_azalt == HIGH)
    {
      sayac--;
      Serial.println("sayac = ");
      Serial.println(sayac);
      delay(200);

    }
    durum_dongu = digitalRead(dongu);
  }
  switch (sayac) {
    case 1:
      Serial.println("1. Motor Calisiyor");
      break;

    case 'a':
      Serial.println("2. Motor Calisiyor");
      break;

    case 3:
      Serial.println("3. Motor Calisiyor");
      break;

    case 4:
      Serial.println("4. Motor Calisiyor");
      break;

    default:
      Serial.println("Yanlis Deger Girildi ");
      break;
  }
}
