//www.diyusthad.com
//www.youtube.com/c/diyusthad

#define red 9
#define green 10
#define blue 11
int t = 500;

void setup()
{

}

void loop()
{
  analogWrite(red, 255);
  delay(t);
  analogWrite(green, 255);
  delay(t);
  analogWrite(blue, 255);
  delay(t);
  analogWrite(red, 0);
  delay(t);
  analogWrite(green, 0);
  delay(t);
}

void showPurple() 
{
  analogWrite(red, 128);
  delay(t);
  analogWrite(green, 0);
  delay(t);
  analogWrite(blue, 128);    
  delay(t);
}

void showIndigo() 
{
  analogWrite(red, 75);
  delay(t);
  analogWrite(green, 0);
  delay(t);
  analogWrite(blue, 130);    
  delay(t);
}

//https://www.rapidtables.com/web/color/orange-color.html
void showDarkOrange() 
{
  analogWrite(red, 255);
  delay(t);
  analogWrite(green, 140);
  delay(t);
  analogWrite(blue, 0);    
  delay(t);
}
