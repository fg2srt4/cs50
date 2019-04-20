# Questions

## What's `stdint.h`?

A C header file that allows you to define the exact width of integers used. It is use to define the width of BYTE, DWORD, LONG, and WORD.

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

To specify the exact width of integers. Each of those types have a specific minimum and maximum number of bits.

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

BYTE = 8
DWORD = 32
LONG = 32
WORD = 16

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

bfTpye

## What's the difference between `bfSize` and `biSize`?

bfSize contains the size of the file in bytes and belongs in the BITMAPFILEHEADER. However, biSize defines the number of bytes needed by the BITMAPINFOHEADER to define the color and dimension information.

## What does it mean if `biHeight` is negative?

negative value in biHeight indicates a top-down bitmap.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

biBitCount, it determines the number of bits used to define each pixel.

## Why might `fopen` return `NULL` in `copy.c`?

The program cannot open the image file input in the argv[1] position

## Why is the third argument to `fread` always `1` in our code?

The third argument indicates the number of items to be read. Each instance of fread we're only reading one element in the bitmap. BITMAPFILEHEADER, on line 40 and BITMAPINFOHEADER on line 44.

## What value does `copy.c` assign to `padding` if `bi.biWidth` is `3`?

1

## What does `fseek` do?

fseek skips to a certain part of the file. In copy.c, it skips over the padding, because padding is the argument passed in fseek's offset parameter.

## What is `SEEK_CUR`?

It tells where fseek should begin it's offset. SEEK_CUR tells fseek to begin offset at current position in the file.
