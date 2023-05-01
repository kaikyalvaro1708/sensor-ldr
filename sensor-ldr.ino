
//luminosidade


void setup()
{
  pinMode(13, OUTPUT); // verde
  pinMode(12, OUTPUT); // amarelo
  pinMode(11, OUTPUT); // vermelho
  pinMode(10, OUTPUT); // buzzer
  
}

void loop(){
  
   int luminosidade = analogRead(A0); // fotorresistor


  if(luminosidade >=0 && luminosidade <300) { //ok
    digitalWrite(13, HIGH); 
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    noTone(10);
  
  }
  
  else if(luminosidade >= 300 && luminosidade <600){ //alerta
    
    digitalWrite(13, LOW);
  	digitalWrite(12, HIGH);
  	digitalWrite(11,LOW);
  	tone(10, 1000, 3000);
  }
  
  else{ //problema
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11, HIGH);
    tone(10, 1000);
  }
  
}
