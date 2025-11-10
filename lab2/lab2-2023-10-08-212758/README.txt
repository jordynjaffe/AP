This file should contain:

  - Jordyn Jaffe
  - jtj2127
  - lab 2

Descriptions:

part1: My program isort and accompanying functions in part 1 work as expected, with no memory leaks. For my sort method, I used bubble sort, and used code I found on geeksforgeeks as a starting point for my bubble sort ascending function and descending function. 

part2: My program twecho and accompanying functions in part 2 work as expected, with no memory leaks. I used the lecture notes on strcopy as a basis for copying over the string characters into the upper case copiedArgs. 
  
valgrind: ./isort: No such file or directory
==1730123== Memcheck, a memory error detector
==1730123== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1730123== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==1730123== Command: ./isort
==1730123== 
Enter size of array: original: 71 56 13 78 13 23 12 95 76 95 
ascending: 12 13 13 23 56 71 76 78 95 95 
descending: 95 95 78 76 71 56 23 13 13 12 
==1730123== 
==1730123== HEAP SUMMARY:
==1730123==     in use at exit: 0 bytes in 0 blocks
==1730123==   total heap usage: 5 allocs, 5 frees, 2,680 bytes allocated
==1730123== 
==1730123== All heap blocks were freed -- no leaks are possible
==1730123== 
==1730123== For lists of detected and suppressed errors, rerun with: -s
==1730123== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
==1732306== Memcheck, a memory error detector
==1732306== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1732306== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==1732306== Command: ./twecho
==1732306== 
==1732306== 
==1732306== HEAP SUMMARY:
==1732306==     in use at exit: 0 bytes in 0 blocks
==1732306==   total heap usage: 0 allocs, 0 frees, 0 bytes allocated
==1732306== 
==1732306== All heap blocks were freed -- no leaks are possible
==1732306== 
==1732306== For lists of detected and suppressed errors, rerun with: -s
==1732306== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
==2085989== Memcheck, a memory error detector
==2085989== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2085989== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==2085989== Command: ./twecho
==2085989== 
==2085989== 
==2085989== HEAP SUMMARY:
==2085989==     in use at exit: 0 bytes in 0 blocks
==2085989==   total heap usage: 0 allocs, 0 frees, 0 bytes allocated
==2085989== 
==2085989== All heap blocks were freed -- no leaks are possible
==2085989== 
==2085989== For lists of detected and suppressed errors, rerun with: -s
==2085989== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
Enter size of array: original: 71 16 82 12 91 
ascending: 12 16 71 82 91 
descending: 91 82 71 16 12 
