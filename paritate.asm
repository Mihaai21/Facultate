; Programul citeste un numar si afiseaza un mesaj referitor la paritate
dosseg
.model small
.stack
.data
mesaj db 13,10,'Introduceti numarul:(<=9)$'
mesg_par db 13,10,'Numarul introdus este par!$'
mesg_impar db 13,10,'Numarul introdus este impar!$'
.code
pstart:
 mov ax,@data
 mov ds,ax

 mov ah,09
mov dx,offset mesaj
 int 21h

mov ah,01h ; se citeste un caracter de la tastatura
; codul ASCII al caracterului introdus va fi in AL
int 21h
mov bx,2
div bx ; se imparte AX la BX, catul va fi in AX, restul in DX
cmp dx,0
jnz impar
mov ah,09
mov dx,offset mesg_par
int 21h
jmp sfarsit
impar:mov ah,09
mov dx,offset mesg_impar
int 21h
sfarsit:
mov ah,4ch
 int 21h ; sfarsitul programului
END pstart