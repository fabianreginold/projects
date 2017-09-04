void setup(){

Serial.begin(9600);

}

void loop(){

int soil_moisture=analogRead(A0);  // read from analog pin A3

Serial.print("analog value: ");
Serial.println(soil_moisture);


delay(1000);
}
