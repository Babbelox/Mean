# Mean
A new programming language I've been working on. 

Mean is a language used to exercise on VMAs and CODE, using a fake Kernel I've designed to make everything make sense. Of course I know that such a language woudn't make sense in modern operating systems.

I imagined Mean to be already organized in "object files"

@VIRTAL AREAS

#C:
    XC0 :: public readable at [AUTO];

#P:
    <RAM> :: private writable at [AUTO]; the Kernel decides the backing file

#H:
    <RAM> :: private writable at [AUTO];

#ALL_AREAS:
    NULL;

#D:
    XDO :: private readable at [file_2, Y];
    XD1 :: private writable ar [file_3, X];

@DATA (used for global data saved in D)
(Data types in v 0.0 will be int(32), long(64) and char(8), and point, also space is supported)
let x: int = 10;
let y: char = "a";
space z, 4; (saves a space of 4 bytes, size of an int)
{XD1} let t: int = 9; saves in VMA XD1

@MEAN CODE

funct main: int(){
    (local functions are saved in Pile automatically)
    let t: long = 6409;
    let g: long = 5;
    let p: point = --> g;

    g = g + t;
    t = t - g;
    ion(g);

    return y;
}

funct ion: int(){
    
}

