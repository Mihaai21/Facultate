    ; Program combinat: calculează puterea unui număr și verifică dacă rezultatul este par sau impar
.model small
.stack
.data
mesaj1 db 13,10,'Introduceti numarul:(<=9)$'
mesaj2 db 13,10,'Introduceti puterea:(<=9)$'
mesaj_final db 13,10,'Rezultatul este: $'
mesaj_putere_0 db 13,10, 'Orice numar ridicat la puterea 0 este 1! $'
mesg_par db 13,10,'Rezultatul este par!$'
mesg_impar db 13,10,'Rezultatul este impar!$'
r db 30 dup(0) ; in variabila r se va stoca rezultatul
.code
pstart:
    mov ax,@data
    mov ds,ax

    ; Pasul 1: Citirea numărului
    mov ah,09
    mov dx,offset mesaj1
    int 21h
    mov ah,01h ; Citirea unui caracter
    int 21h
    and ax,00FFh
    sub ax,30h ; Transformarea în valoare numerică
    push ax ; Stocare în stivă

    ; Pasul 2: Citirea puterii
    mov ah,09
    mov dx,offset mesaj2
    int 21h
    mov ah,01h ; Citirea unui caracter
    int 21h
    and ax,00FFh
    sub ax,30h ; Transformarea în valoare numerică
    mov cx,ax ; Salvarea în CX pentru numărul de înmulțiri

    ; Verificare putere 0
    cmp cx,0
    jne putere_0
    mov ah,09
    mov dx, offset mesaj_putere_0
    int 21h
    mov ax,1 ; Rezultatul este 1
    jmp verificare_paritate

putere_0:
    pop bx ; Recuperare număr din stivă
    mov ax,0001

inmultire:
    mul bx
    loop inmultire

    ; Conversia rezultatului în ASCII pentru afișare
    xor si,si
    mov bx,10
cifra:
    div bx
    add dl,30h
    mov r[si],dl
    inc si
    xor dx,dx
    cmp ax,0
    jne cifra

    ; Afișarea rezultatului
    mov ah,9
    mov dx, offset mesaj_final
    int 21h
caracter:
    dec si
    mov ah,02
    mov dl,r[si]
    int 21h
    cmp si,0
    jne caracter

verificare_paritate:
    ; Verificarea parității rezultatului
    mov bx,2
    xor dx,dx ; Resetare DX
    div bx ; Împărțire AX la BX, restul este în DX
    cmp dx,0
    jnz impar

    ; Afișare mesaj "par"
    mov ah,09
    mov dx,offset mesg_par
    int 21h
    jmp sfarsit

impar:
    ; Afișare mesaj "impar"
    mov ah,09
    mov dx,offset mesg_impar
    int 21h

sfarsit:
    mov ah,4ch
    int 21h ; Sfârșitul programului
END pstart

    
