 Write a program that computes powers of 2 starting with the number 2
0 = 1. You can have
the sequence stop at 210 = 1024. Calculate the powers of 2 sequence in a register and trace is with the debugger. If you
did it correctly, you should be able to see the values below one after another in a register.

```
add $t1, $zero, 1  #start with 0+1 to have 1 as first value
add $t2, $zero, 2 #get $t2=2
# START LOOP
Loop1:
mult $t1, $t2 #$t1*$t2--->1*2=2
mflo $t1 #takes value from 5 and makes it the new $t1. $t1=2
ble $t1, 1023, Loop1 #this is the loop. Starts at 0 and ends at 1024
#adds one index highter
```
