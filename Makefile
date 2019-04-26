camel: main.c
  gcc -std=c99 -Wall -Wextra main.c camel.a  -o camel 

camel.a: camel.h camel.c
  gcc -c -std=c99 -Wall -Wextra -o camel.a

