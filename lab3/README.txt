This file should contain:

  - Jordyn Jaffe
  - jtj2127
  - lab3
  - description for each part
  
The description should indicate whether your solution for the part is
working or not.  You may also want to include anything else you would
like to communicate to the grader such as extra functionalities you
implemented or how you tried to fix your non-working code.

Part 1: My part1 code and Makefile work as intended and expected; tests run successfully with no errors. There are no memory leaks, thus everything in Part1, both the functions and Makefile work as expected with no errors or memory leaks.

Part 2: My part2 code also works successfully and accesses the library created in part1 successfully. Part2 code (revecho.c program) and Makefile run as expected with no errors or memory leaks; ./revecho testing works and output is successful. 


==3891163== Memcheck, a memory error detector
==3891163== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3891163== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==3891163== Command: ./mylist
==3891163== 
testing addFront(): 9.0 8.0 7.0 6.0 5.0 4.0 3.0 2.0 1.0 
testing flipSignDouble(): -9.0 -8.0 -7.0 -6.0 -5.0 -4.0 -3.0 -2.0 -1.0 
testing flipSignDouble() again: 9.0 8.0 7.0 6.0 5.0 4.0 3.0 2.0 1.0 
testing findNode(): OK
popped 9.0, the rest is: [ 8.0 7.0 6.0 5.0 4.0 3.0 2.0 1.0 ]
popped 8.0, the rest is: [ 7.0 6.0 5.0 4.0 3.0 2.0 1.0 ]
popped 7.0, the rest is: [ 6.0 5.0 4.0 3.0 2.0 1.0 ]
popped 6.0, the rest is: [ 5.0 4.0 3.0 2.0 1.0 ]
popped 5.0, the rest is: [ 4.0 3.0 2.0 1.0 ]
popped 4.0, the rest is: [ 3.0 2.0 1.0 ]
popped 3.0, the rest is: [ 2.0 1.0 ]
popped 2.0, the rest is: [ 1.0 ]
popped 1.0, the rest is: [ ]
testing addAfter(): 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 
popped 1.0, and reversed the rest: [ 9.0 8.0 7.0 6.0 5.0 4.0 3.0 2.0 ]
popped 9.0, and reversed the rest: [ 2.0 3.0 4.0 5.0 6.0 7.0 8.0 ]
popped 2.0, and reversed the rest: [ 8.0 7.0 6.0 5.0 4.0 3.0 ]
popped 8.0, and reversed the rest: [ 3.0 4.0 5.0 6.0 7.0 ]
popped 3.0, and reversed the rest: [ 7.0 6.0 5.0 4.0 ]
popped 7.0, and reversed the rest: [ 4.0 5.0 6.0 ]
popped 4.0, and reversed the rest: [ 6.0 5.0 ]
popped 6.0, and reversed the rest: [ 5.0 ]
popped 5.0, and reversed the rest: [ ]
==3891163== 
==3891163== HEAP SUMMARY:
==3891163==     in use at exit: 0 bytes in 0 blocks
==3891163==   total heap usage: 19 allocs, 19 frees, 1,824 bytes allocated
==3891163== 
==3891163== All heap blocks were freed -- no leaks are possible
==3891163== 
==3891163== For lists of detected and suppressed errors, rerun with: -s
==3891163== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)


==3892644== Memcheck, a memory error detector
==3892644== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3892644== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==3892644== Command: ./revecho
==3892644== 
==3892644== 
==3892644== HEAP SUMMARY:
==3892644==     in use at exit: 0 bytes in 0 blocks
==3892644==   total heap usage: 0 allocs, 0 frees, 0 bytes allocated
==3892644== 
==3892644== All heap blocks were freed -- no leaks are possible
==3892644== 
==3892644== For lists of detected and suppressed errors, rerun with: -s
==3892644== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
==3892945== Memcheck, a memory error detector
==3892945== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3892945== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==3892945== Command: ./revecho hello world dude
==3892945== 
dude
world
hello

dude found
==3892945== 
==3892945== HEAP SUMMARY:
==3892945==     in use at exit: 0 bytes in 0 blocks
==3892945==   total heap usage: 4 allocs, 4 frees, 3,632 bytes allocated
==3892945== 
==3892945== All heap blocks were freed -- no leaks are possible
==3892945== 
==3892945== For lists of detected and suppressed errors, rerun with: -s
==3892945== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
==3893495== Memcheck, a memory error detector
==3893495== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3893495== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==3893495== Command: ./revecho hello world friend
==3893495== 
friend
world
hello

dude not found
==3893495== 
==3893495== HEAP SUMMARY:
==3893495==     in use at exit: 0 bytes in 0 blocks
==3893495==   total heap usage: 4 allocs, 4 frees, 4,656 bytes allocated
==3893495== 
==3893495== All heap blocks were freed -- no leaks are possible
==3893495== 
==3893495== For lists of detected and suppressed errors, rerun with: -s
==3893495== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
