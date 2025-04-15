/*
    LCD_I2C - Arduino library to control a 16x2 LCD via an I2C adapter based on PCF8574

    Copyright(C) 2020 Blackhack <davidaristi.0504@gmail.com>

    This program is free software : you can redistribute it and /or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.If not, see < https://www.gnu.org/licenses/>.
*/

#include <LCD_I2C.h>

LCD_I2C lcd(0x27, 16, 2);

void setup()
{
    lcd.begin(); 

void loop()
{
    lcd.print("naile"); // You can make spaces using well... spaces
    lcd.setCursor(5, 1); // Or setting the cursor in the desired position.
    lcd.print("Gül");
    delay(2000);
   
    {
        lcd.backlight();
        delay(50);
        lcd.noBacklight();
        delay(2000);
    }

    lcd.backlight();
    lcd.clear();
    delay(500);
}
