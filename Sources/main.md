- how does program get executed?
- instructions
- printf... ;
- semi-colon ends instruction

- char declares a character variable

- int declares a number (but apparently also a function. Maybe just a function who's return value is a number?)

- char <>[] declares a string/sequence of characters
- %s, %i interpolate string, integer vars into printf first arg
- actually supposed to use %d not %i but %i does work here. %s breaks because of type check

- ahhh, here is the verbose run command: [Running] cd "/Users/tcarney/Development/c/Sources/" && gcc main.c -o main && "/Users/tcarney/Development/c/Sources/"main
- so it looks something like: 
  1. we change directory to c/Sources && use gcc to run main.c with some option -o main (maybe this is targeting the function named main inside the file?)
  2. this compiles to a new file (temporary/mutable file?): "/Users/tcarney/Development/c/Sources/"main
  3. we display that file in the output tab by simply naming it: "/Users/tcarney/Development/c/Sources/"main
    - maybe it's not as simple as naming because keyword main is outside the quotation marks... 
