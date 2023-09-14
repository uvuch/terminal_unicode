Terminal ESC Sequences
==============================
In general, the sequence starts with `033[` and ends with `m`. Inside there goes a semicolon-separated list of codes.

Example: `\033[33;1m` makes the output yellow (33) bold (1).

- C: `printf("\033[31;1;4mHello\033[0m");`
- C++: `std::cout<<"\033[31;1;4mHello\033[0m";`
- Python3: `print("\033[31;1;4mHello\033[0m")`
- Bash: `echo -e "\033[31;1;4mHello\033[0m"`

where the first part makes the text red (31), bold (1), underlined (4) and the last part clears all this (0).

Modifiers
===============================
```
  0	Regular
  1	Bold
  2	Faint (decreased intensity)
  3	Italic
  4	Underline
  5	Slow Blink
  6	Rapid Blink // not widely supported
  7	Inverse
  8	Conseal     // not widely supported
  9	Crossed out // not widely supported
  
  10 Primary(default) font	
  11–19	Alternate font	                      // Select alternate font n-10
  20 Fraktur	                                // hardly ever supported
  21 Bold off or Double Underline Bold off    // not widely supported; double underline hardly ever supported.
  22 Normal color or intensity	              // Neither bold nor faint
  23 Not italic, not Fraktur	
  24 Underline off							  // Not singly or doubly underlined
  25 Blink off	
  27 Inverse off	
  28 Reveal	conceal off
  29 Not crossed out	
  
  \\033[2K                          - Clear Line
  \\033[<L>;<C>H or \\033[<L>;<C>f  - Put the cursor at line L and column C.
  \\033[<N>A                        - Move the cursor up N lines
  \\033[<N>B                        - Move the cursor down N lines
  \\033[<N>C                        - Move the cursor forward N columns
  \\033[<N>D                        - Move the cursor backward N columns\n
  \\033[2J                          - Clear the screen, move to (0,0)
  \\033[K                           - Erase to end of line
  \\033[s                           - Save cursor position
  \\033[u                           - Restore cursor position\n
```  
  
Foreground Colors
===============================
 ```
 30 Black
 31 Red
 32 Green
 33 Yellow
 34 Blue
 35 Magenta
 36 Cyan
 37 White

 90 Bright Black 
 91 Bright Red
 92 Bright Green
 93 Bright Yellow
 94 Bright Blue
 95 Bright Magenta
 96 Bright Cyan
 97 Bright White
```

Background Colors
===============================
 ```
 40 Black
 41 Red
 42 Green
 43 Yellow
 44 Blue
 45 Magenta
 46 Cyan
 47 White
 
 100 Bright Black 
 101 Bright Red
 102 Bright Green
 103 Bright Yellow
 104 Bright Blue
 105 Bright Magenta
 106 Bright Cyan
 107 Bright White
 ```

 RGB Colors
 ==================================
 ```
 \033[38;2;<r>;<g>;<b>m     #Select RGB foreground color
 \033[48;2;<r>;<g>;<b>m     #Select RGB background color
 ```
 
 