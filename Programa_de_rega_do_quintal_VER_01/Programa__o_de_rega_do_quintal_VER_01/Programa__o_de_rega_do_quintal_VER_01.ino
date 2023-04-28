  /* Predefinições de tempo
  Tempo	      segundos Milesimos
1 Segundo	    1	       1000
1 Minuto	    60	     60000
2 Minutos	    120	     120000
5 Minutos	    300	     300000
1 Hora	      3600	   3600000
8 Horas	      28800	   28800000
12 Horas	    43200	   43200000
24 Horas	    86400	   86400000
07Hs 54 min	  28440	   28440000
 */
  //Variaveis
  long esperaInicio = 0; //Tempo para iniciar a primeira rega
  long liga = 120000; //Tempo de rega
  long intervalo = 28440000; //Intervalo
  //TESTE
  //long esperaInicio = 1000;
  //long liga = 500;
  //long intervalo = 100;

void setup() { //Ativa as saidas
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
    digitalWrite(3, HIGH); //Inicia cim todos os reles desligados
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(9, HIGH);
    delay(esperaInicio);

    digitalWrite(3, LOW);
    delay(liga);
    digitalWrite(3, HIGH);    

    digitalWrite(4, LOW);
    delay(liga);
    digitalWrite(4, HIGH); 
    
    digitalWrite(5, LOW);
    delay(liga);
    digitalWrite(5, HIGH); 
        
    digitalWrite(9, LOW);
    delay(liga);
    digitalWrite(9, HIGH); 

    delay(intervalo); //
}
