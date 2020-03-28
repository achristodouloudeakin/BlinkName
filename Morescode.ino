int led1 = A5;
int led2 = D7;

void setup() 
{
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
}


void long_write()
{
    // Always begins off
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(25);
    
    // Long tone on
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(1000);
    
    // Turns off again
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(25);
}

void short_write()
{
    // Always begins off
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(25);
    
    // Short tone on
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(400);
    
    // Turns off again
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(25);

}

void loop() 
{
    delay(3000);

    // A
    short_write();
    long_write();
   
    // N
    long_write();
    short_write();
    
    // D
    long_write();
    short_write();
    short_write();
    
    // R
    short_write();
    long_write();
    short_write();
    
    // E
    short_write();
   
    // A
    short_write();
    long_write();

    // S
    short_write();
    short_write();
    short_write();

    delay(1000);
}