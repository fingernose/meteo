
 // the cell and 10K pulldown are connected to a0
int photocellPin = 0;
int PhotoRead;


void CellReading(){

PhotoRead = analogRead(photocellPin);
/* 
Serial.print("PhotoCell reading = ");
Serial.println(PhotoRead); // the raw analog reading

We'll have a few threshholds, qualitatively determined
if (photocellReading < 10) {
Serial.println(" - Dark");
} else if (photocellReading < 200) {
Serial.println(" - Dim");
} else if (photocellReading < 500) {
Serial.println(" - Light");
} else if (photocellReading < 800) {
Serial.println(" - Bright");
} else {
Serial.println(" - Very bright");
}
*/   
}