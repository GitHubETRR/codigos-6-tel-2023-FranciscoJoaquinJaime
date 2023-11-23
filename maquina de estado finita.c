#define DEMORA 40
#define LED2 6
#define LED1 5
#define PULSADOR 13

typedef enum{
  ESTADO_UP,
  ESTADO_FALLING,
  ESTADO_RISING,
  ESTADO_DOWN,
}debounceState_t;

debounceState_t estado;

void buttonPressed();
void buttonReleased();

void debounceFSM_init();
void debounceFSM_update();

unsigned long TiempoAhora = 0;


void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(PULSADOR, INPUT);
  Serial.begin(9600);
  TiempoAhora=millis();
  debounceFSM_init();
}

void loop()
{
  debounceFSM_update();
}



void debounceFSM_init(void){
  estado=ESTADO_UP;
}

void debounceFSM_update(void){
  switch(estado){
    case (ESTADO_UP):
      TiempoAhora = millis();
      if (digitalRead(PULSADOR) == LOW)estado = ESTADO_FALLING;
      break;
    case (ESTADO_FALLING):{
      if (millis()-TiempoAhora>DEMORA){
        TiempoAhora = millis();
        if (digitalRead (PULSADOR) == LOW){
          estado = ESTADO_DOWN;
          buttonPressed();
        }
        else estado = ESTADO_UP;
      }
      break;
    }
    case (ESTADO_DOWN):{
      TiempoAhora = millis();
      if (digitalRead(PULSADOR) == HIGH){
        estado = ESTADO_RISING;
      }
      break;
    }   
    case (ESTADO_RISING):{
      if (millis()-TiempoAhora>DEMORA){
        TiempoAhora = millis();
        if (digitalRead (PULSADOR) == HIGH){
          estado = ESTADO_UP;
          buttonReleased();
        }
        else estado = ESTADO_DOWN;
      } break;
    }  
  }
}
    
void buttonPressed(){
  if ((digitalRead (LED1)) == LOW){
    digitalWrite (LED1, HIGH);
  }
  else digitalWrite (LED1, LOW);
}

void buttonReleased(){
  if ((digitalRead (LED2)) == LOW){
    digitalWrite (LED2, HIGH);
  }
  else digitalWrite (LED2, LOW);
}
