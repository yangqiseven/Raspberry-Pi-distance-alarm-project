import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)

TRIG = 18
ECHO = 16 #input pin is 11 and output pin is 9


GPIO.setup(TRIC,GPIO.OUT)
GPIO.setup(ECHO,GPIO.IN)

 while Ture:
  GPIO.setup(TRIG, 0)
  time.sleep(0.01)

  GPIO.output(TRIG, 1)
  time.sleep(0.00001)
  GPIO.output(TRIG, 0)

while GPIO.input(ECHO)==0:
  start = time.time()
  
while GPIO.input(ECHO)==1:
  stop = time.time()
  
duration = stop - start

distance = duration * (34000/2) #where the speed of sound is 340m/s

distance = round(distance, 2)

print "Distance:", distance, "cm"

minimum_alert_dis = 1
maximum_alert_dis = 60
 if distance > 60
         print "Distancesafe:",distance - 0.5, "cm"
         if distance >= minimum_alert_dis and distance <= maximuma_alert_dis:
                 print "Distance Alert!"

GPIO.cleanup()
