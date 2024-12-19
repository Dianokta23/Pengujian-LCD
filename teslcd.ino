#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Alamat I2C LCD, biasanya 0x27 atau 0x3F. Sesuaikan dengan alamat LCD Anda.
LiquidCrystal_I2C lcd(0x27, 16, 2); 

void setup() {
  // Inisialisasi LCD
  lcd.init(); // Gunakan init() untuk menginisialisasi LCD
  lcd.backlight(); // Nyalakan lampu latar LCD
  
  // Tampilkan pesan awal
  lcd.setCursor(0, 0); // Baris pertama, kolom pertama
  lcd.print("Hello, World!");
  
  lcd.setCursor(0, 1); // Baris kedua, kolom pertama
  lcd.print("LCD Test");
}

void loop() {
  // Tidak ada yang dilakukan di loop karena hanya mengetes tampilan awal
}
