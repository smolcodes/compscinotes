Write a MIPS assembly language program that reads ten integers from the user, stores them in
memory and then loads them back out of memory and displays them to the user in reverse order. Storing variables
```
data:
add $t0, $zero, $zero #initializes t0 to zero
add $t1, $zero, 10 #sets t1 to 1

main:
Loop1: #first loop gets 10 user inputs
add $t0, $t0, 1 #adds 1 to t0

addi $v0, $zero, 5 # get user int
syscall 
sw $v0, 0($sp) #saves word 
add $sp, $sp, 4 #adds 
bne $t1, $t0, Loop1

add $t0, $zero, 0
Loop2:
sub $sp, $sp, 4
add $t0, $t0, 1
lw $a0, 0($sp)
li $v0, 1
syscall
bne $t0, 10, Loop2
```
