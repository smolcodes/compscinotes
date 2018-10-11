: Write a MIPS assembly language program that displays the following asterisk pyramid. Use the ASCII
table to identify the characters for asterisk and end of line. You should use a nested loop to complete this task.

```
#outer loop
li $t0,1
outer:

#inner loop
li $t1,1
inner:

#PRINT t1
add $a0, $zero, $t1
add $a0, $zero, 42
li $v0, 11
syscall

#end inner
add $t1, $t1, 1
ble $t1, $t0, inner
syscall 

add $a0, $zero, 10
li $v0, 11
syscall

#end outer
add $t0, $t0, 1
ble $t0, 5, outer
```
