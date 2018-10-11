Display the powers of 2 starting with 2048 until 1. For instance, your program should display 2048,
1024, 512, 258, 128, 64, 32, 16, 8, 4, 2, 1. Accomplish this using the shift right instruction (srl). 

```
li $t1, 2048

loop1:

srl $t1, $t1, 1

#print integer
add $a0,$t1,$zero
li $v0, 1
syscall

#print character
li $v0, 11
li $a0, 32
syscall
bge $t1, 1, loop1 
```


