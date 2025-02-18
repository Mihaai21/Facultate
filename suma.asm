.MODEL small
.stack 100h
.data
mesaj1 db 13,10, "nr1=",'$'
mesaj2 db 13,10, "nr2=",'$'
suma db 13,10, "Suma=",'$'
nr1 db ?
nr2 db ?
s dw ?
.code
start:
mov ax, @data
mov ds, ax

mov dx, offset mesaj1
mov ah,09h
int 21h

mov ah, 01h
int 21h

sub nr1,'0' ;transformare din string in int
xor ah,ah ;inversarea bitilor din Ah (nu stiu dc)
mov nr1, al

mov dx, offset mesaj2
mov ah, 09h
int 21h

mov ah, 01h
int 21h

sub nr2,'0'
xor ah,ah
mov nr2, al

mov al, nr1
add al,nr2
mov s,ax
sub s,'0'

mov dx, offset suma
mov ah,09h
int 21h

mov dx,s
mov ah, 02h ; codul de afisare al unui numar de tip int
int 21h

mov ah, 4ch
int 21h

end start