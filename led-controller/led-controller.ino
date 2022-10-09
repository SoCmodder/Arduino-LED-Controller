//www.diyusthad.com
//www.youtube.com/c/diyusthad

#define red 9
#define green 10
#define blue 11
int t = 2000;
int brightness;
int fadeAmount = 5;

void setup()
{

}

void loop()
{
  showPurple();
  delay(t);
  showDarkOrange();
  delay(t);
  showBlue();
  delay(t);
}

void showPurple() 
{
  analogWrite(red, 128);
  analogWrite(green, 0);
  analogWrite(blue, 128);    
}

void showBlack() {
  analogWrite(red, 0);
  delay(100);
  analogWrite(green, 0);
  delay(100);
  analogWrite(blue, 255);
  delay(100);    
}

void showBlue() 
{
  analogWrite(red, 255);
  analogWrite(green, 0);
  analogWrite(blue, 100);    
}

void showIndigo() 
{
  analogWrite(red, 75);
  analogWrite(green, 0);
  analogWrite(blue, 130);    
}

//https://www.rapidtables.com/web/color/orange-color.html
void showDarkOrange() 
{
  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, 255);    
}

void fade() {
  analogWrite(red, brightness); //writing brightness value to red
  analogWrite(green, brightness); //writing brightness value to green
  analogWrite(blue, brightness);

  brightness += fadeAmount; //increasing brightness value by 5 in each loop

  if (brightness < 0 || brightness > 255 )
  {
    fadeAmount = -fadeAmount; //reversing the direction of fading when brightness reachs 0 or 255
  }
  delay(30); //delaying the speed of fading   
}
