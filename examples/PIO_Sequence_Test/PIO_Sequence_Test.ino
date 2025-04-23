//example code to cycle through all the 24 pins one after the other
void setup() {
  set_24bit(OUTPUT);
}

void loop() {
  uint32_t data = 1;
  for(int i=0; i<24; i++){
    safe_write_24bit(data<<i);
    delay(500);
  }
}
