This file should contain:

  - Jordyn Jaffe
  - jtj2127
  - lab 4
  - description for each part
  
The description should indicate whether your solution for the part is
working or not.  You may also want to include anything else you would
like to communicate to the grader such as extra functionalities you
implemented or how you tried to fix your non-working code.

Part 1. 
a) List the name and message pairs you have inserted into the database:
->first pair: name = JordynJ, message = Happy Sunday
^(record 538)

->second pair: name = JordynJ, message = happy halloween
^(record 539)
I was able to insert and read messages in our class database.

b) My solution for the mdb-lookup program works as intended, with no errors or memory leaks. My program works identical to Jae's program I used in a) above. My solution runs with no issues, and output matches expected output. No leaks found using Valgrind. 
Valgrind: 

==941248== Memcheck, a memory error detector
==941248== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==941248== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==941248== Command: ./mdb-lookup
==941248== 
Usage: mdb-lookup <file_name>
==941248== 
==941248== HEAP SUMMARY:
==941248==     in use at exit: 0 bytes in 0 blocks
==941248==   total heap usage: 0 allocs, 0 frees, 0 bytes allocated
==941248== 
==941248== All heap blocks were freed -- no leaks are possible
==941248== 
==941248== For lists of detected and suppressed errors, rerun with: -s
==941248== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
==942877== Memcheck, a memory error detector
==942877== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==942877== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==942877== Command: ./mdb-lookup ap-mdb
==942877== 
lookup: ==942877== 
==942877== HEAP SUMMARY:
==942877==     in use at exit: 0 bytes in 0 blocks
==942877==   total heap usage: 1,199 allocs, 1,199 frees, 45,208 bytes allocated
==942877== 
==942877== All heap blocks were freed -- no leaks are possible
==942877== 
==942877== For lists of detected and suppressed errors, rerun with: -s
==942877== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
==945207== Memcheck, a memory error detector
==945207== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==945207== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==945207== Command: ./mdb-lookup ap-mdb
==945207== 
lookup:    
   1: {Jae Lee} said {Welcome to Lab 4!}
   2: {AP sucks!} said {no one ever}
   3: {Charlie} said {Let's Marvin Gaye}
   4: {yerrrr} said {yerrrr}
   5: {Colby} said {What's good bruv}
   6: {Colby} said {Lakers in 5}
   7: {Salia Nahshal} said {Hi APers}
   8: {Salia Nahshal } said {Good luck!}
   9: {Salia Nahshal } said {Bye!}
  10: {madeleine} said {first double digit hayy}
  11: {sean} said {crime and punishment}
  12: {ben} said {the first us president}
  13: {ben} said {like clean clothes}
  14: {ben } said {a lot}
  15: {rc} said {ap is the goat}
  16: {May Ramati} said {hello AP}
  17: {May Ramati} said {Good luck in lab 4!}
  18: {May Ramati} said {Bye :)}
  19: {home} said {return home}
  20: {Cai} said {Hi}
  21: {Vishnu } said {Inception best movie}
  22: {blue apple} said {Do blue apples exist?}
  23: {Vishnu} said {}
  24: {Semih Gultekin} said {Good luck with assignme}
  25: {Nitin Rao} said {Hello AP!}
  26: {Farihah Chowdhu} said {Hiii happy last week of}
  27: {Farihah} said {October}
  28: {Kassey Chang} said {Hi AP}
  29: {Katherine Lee} said {Happy Fall}
  30: {Mingyuan Shao} said {Hi, Nice to meet everyo}
  31: {Mingyuan Shao} said {AP is really fun!!}
  32: {ml} said {Starting AP Lab 4 now!}
  33: {Xingchen} said {Just do it}
  34: {Kyleigh} said {That's my name!}
  35: {Sam} said {hello!!!}
  36: {the chicken} said {to the cow.}
  37: {Sam} said {there are messages here}
  38: {the tree} said {nothing it's a tree}
  39: {Jorge} said {survive!}
  40: {student } said {do easy exams Jae!}
  41: {I} said {I added a message}
  42: {Alison Wu} said {uh oh it's lab 4}
  43: {ishan} said {whats good gang}
  44: {taimurs} said {GYATT}
  45: {SergeiPavlovich} said {walk in fridge}
  46: {Arnesa} said {Hello!}
  47: {Arnesa} said {Testing...}
  48: {tiffany} said {tralalalalalala}
  49: {ujir} said {irishman}
  50: {sophie agbekpen} said {period queen}
  51: {Alex N adn2130} said {Hello World!}
  52: {Eden} said {Hi, how are you all tod}
  53: {Alex N adn2130} said {Goodbye :)}
  54: {Clarence Liu} said {Hi guys}
  55: {Heidy Mendez} said {I am hungry rn}
  56: {Alyssa} said {starting lab 4}
  57: {Bar Kroitoro} said {Hello AP classmates}
  58: {Bar Kroitoro} said {Hi everyone}
  59: {madeline} said {good morning}
  60: {Alexandra Garci} said {finally found this file}
  61: {Shreya} said {good morning}
  62: {Shreya} said {good night}
  63: {good} said {day}
  64: {Carson} said {Hello, c may we all get}
  65: {Carson} said {congcongcong!}
  66: {sc} said {almost fall break - you}
  67: {sc} said {hellohellohello}
  68: {stone} said {journey before destinat}
  69: {stone} said {bing bong}
  70: {Weiliang} said {-_-}
  71: {Git} said {No more Git Questions i}
  72: {Rick} said {Wubba Lubba dub-dub}
  73: {hiiii} said {byeeee}
  74: {king julian} said {AHHHHHHHHHHHHHHHHHHHHHH}
  75: {Fahitza Quessa} said {Wow I just started this}
  76: {Fahitza Quessa} said {I am just a girl}
  77: {ellie} said {test hello}
  78: {Mason McVey} said {hello world!}
  79: {mkm2239} said {another msg}
  80: {andromeda} said {   .   }
  81: {fred} said {great}
  82: {Bae Lee} said {my favorite class <3}
  83: {Nicholas} said {we out here}
  84: {Jae} said {Get started with lab4 !}
  85: {Shir S} said {Hi there}
  86: {:)} said {hi}
  87: {emma} said {hey what's up}
  88: {Trishna} said {why is Pupin so cold}
  89: {Adam Dawood} said {Hello}
  90: {Farris} said {Hello!}
  91: {Alqalam} said {This is pretty cool!}
  92: {Jess} said {Hello you all APers!}
  93: {Jess} said {How was class today?}
  94: {Saloni Jain} said {}
  95: {Saloni Jain} said {hi everyone!}
  96: {I hit something} said {No stormtrooper ever}
  97: {Andre} said {hi guys}
  98: {Alice} said {always hangry}
  99: {Teresa } said {message}
 100: {IceSpice} said {She a baddie, she know }
 101: {IceSpice} said {She a baddie with her b}
 102: {Jacob} said {testing message}
 103: {Jae} said {Get started w lab4 now!}
 104: {Elena} said {hi :)}
 105: {Mufasa} said {What up Jae }
 106: {Juan} said {azul=blue}
 107: {Fabi} said {Happy Halloween}
 108: {Ben} said {seg fault core dumped}
 109: {Ben Fu} said {hello world dude}
 110: {student} said {hello there AP}
 111: {Ai Siqi} said {One divides into two!}
 112: {Jacques Lacan} said {I think where I am not}
 113: {Jorge } said {just another comment}
 114: {Sam} said {java > C}
 115: {Ari} said {time for lab4}
 116: {guacamole} said {passionfruit by drake}
 117: {Vayu} said {Hopefully this worked..}
 118: {i luv jae} said {my man jae is bae}
 119: {not Jae} said {Jae Jae Jae Jae Jae Joe}
 120: {Annalie} said {Hi}
 121: {Annalie} said {Bye}
 122: {richard} said {im so tired}
 123: {sunset lover} said {the sunset was so prett}
 124: {fee fi} said {fo fum}
 125: {one of us} said {on the trail}
 126: {david} said {hi friends! good luck}
 127: {ronaldo} said {messi sucks}
 128: {Katie} said {hello world!}
 129: {messi} said {ronaldo sucks}
 130: {} said {}
 131: {Katie Zhang} said {hello world 2}
 132: {student 123} said {hello everyone}
 133: {yaya} said {i miss 2019 tiktok}
 134: {yaya} said {can i get a hoya?}
 135: {yaya} said {how was your day? mine }
 136: {Michael} said {@michael.straus.two.s}
 137: {ag} said {what's up?}
 138: {things i miss} said {java garbage collector}
 139: {jae woo lee} said {3 words, 3 letters, 1 s}
 140: {my mom} said {hello children}
 141: {birdie mcbird} said {tweet tweet}
 142: {gemma collins} said {i'm claustrophobic}
 143: {Leelop} said {Bardee ess du (jamaican}
 144: {ap student} said {starting lab4!}
 145: {Kassey Chang} said {Hello again}
 146: {mm} said {i hope i dont fail this}
 147: {Daniel} said {Hi!}
 148: {Daniel} said {Why?}
 149: {Jae Kwon} said {Follow -> @jaeeekwon}
 150: {AB } said {hello}
 151: {AB} said {no yeah}
 152: {Sarah Bearde} said {Good morning, AP!}
 153: {Sarah Bearden} said {Live laugh love}
 154: {Sarah Bearden} said {testing testing 123}
 155: {Johnny} said {I did not hit her}
 156: {jae woo bee} said {buzz buzz}
 157: {Rahi} said {Hellooooooo}
 158: {Moises} said {This is pretty cool!}
 159: {jae} said {you all get A+ :)}
 160: {crrrrr} said {je suis le deluge}
 161: {Hope} said {hello ap!!}
 162: {Hope} said {is this working}
 163: {William W} said {Every man dies, not eve}
 164: {Bartleby} said {I would rather not}
 165: {zen} said {haii}
 166: {Mila} said {Hi}
 167: {Mila} said {Tudo bem?}
 168: {Marie Cat} said {meow~meow~~woof!}
 169: {Jae Lee} said {hi}
 170: {flu2104} said {Hello World}
 171: {Bryan} said {class of 2025!!!!!!!!!}
 172: {10TypesOfPeople} said {UnderstandBinaryOrNot}
 173: {Edward} said {Nuggets in 4}
 174: {Edward} said {Listen to TesseracT}
 175: {Jae} said {you shall not find this}
 176: {Aiden} said {Hello}
 177: {Aiden E.} said {Hello world}
 178: {ARB} said {Too many labs}
 179: {ARB} said {Just kidding! these are}
 180: {ARB} said {FUN ! DON"T tell the fu}
 181: {michelle} said {Thankful to the TA's}
 182: {test} said {hello lab4}
 183: {Skeele} said {part 1a is hard}
 184: {Taylor} said {1989 This Friday}
 185: {adele} said {hello its me}
 186: {bsb <3} said {i want it that way cuz }
 187: {Sandra Zelen} said {good luck on lab 4!}
 188: {Sandra Zelen} said {so real}
 189: {leah} said {:>  }
 190: {leah} said {woah this is so cool}
 191: {Tobechi Onwuka} said {testing}
 192: {owl} said {OVO}
 193: {willyfuey} said {cashews are the best nu}
 194: {arleen} said {  (         )  }
 195: {arleen} said {hi testing}
 196: {Sky} said {Check out CSC Bobagram!}
 197: {Sky} said {Put me down as referral}
 198: {Teresa} said {put me down instead for}
 199: {Teresa} said {csc bobagrams :)}
 200: {jessica} said {hola mi amigos}
 201: {jessica} said {como estas todos}
 202: {CR7} said {Siuuuuuuu!}
 203: {moon} said {I love me and C}
 204: {sun} said {coding in the moonlight}
 205: {Jayz} said {Barbs RISE!!!}
 206: {trishna} said {makefiles are starting }
 207: {Kait} said {hello!}
 208: {Ali} said {yeooo wsg}
 209: {Ali} said {po que e isso}
 210: {Samir} said {Hello AP!}
 211: {Ramya} said {hi everyone!}
 212: {Batman} said {Robin to the batmobile}
 213: {AP Student} said {What day is it?}
 214: {Jae} said {Send help!}
 215: {joe} said {yup}
 216: {Evelyn} said {Hello World}
 217: {Kevin } said {What's up?}
 218: {Zaina} said {hello world}
 219: {Zaina} said {pupin 301}
 220: {hello} said {world}
 221: {confucius} said {i got 99 problems but}
 222: {joe} said {line 222 is a silly goo}
 223: {i mean} said {line 224 is silly goose}
 224: {Enrista} said {slay}
 225: {poko} said {hello!}
 226: {Cat Escobar} said {Happy Spooky Season!}
 227: {JWP} said {I'm in butler ref at 2a}
 228: {timestamp} said {written@10.26.2:14}
 229: {Melisa} said {T-1 DAY TIL 1989(TV) DR}
 230: {Ruizhe Fu} said {Hii}
 231: {Zac} said {random times}
 232: {Z} said {start earlier, man}
 233: {Z} said {Happy Halloween}
 234: {marionn} said {HELLO}
 235: {Kira} said {message}
 236: {Meron} said {happy pre-Friday!}
 237: {Meron} said {halloweekend:))}
 238: {Marionna Saunde} said {wassup}
 239: {Marionna Saunde} said {happy halloween}
 240: {Marionna Saunde} said {vibezz}
 241: {Allyce} said {<3 <3 lmao}
 242: {Karin} said {This is cool!!}
 243: {hellen} said {hii hello bye}
 244: {sam c} said {i <3 analysis}
 245: {APer} said {the weather today is so}
 246: {john doe} said {i need an internship}
 247: {ronaldo} said {messi is the goat}
 248: {X} said {moonlight uh}
 249: {oppenheimer} said {now i am become death}
 250: {jae the bae} said {no wae i'm feelin kinda}
 251: {vzr} said {it's a beautiful day}
 252: {Melisa} said {spotify daylist >>>}
 253: {Makda} said {heyyy}
 254: {yoyo} said {Let's go to a Halloween}
 255: {yoyo} said {party! ye~}
 256: {Nithin C} said {Yasss}
 257: {poor_cs_stu} said {just finished fundie ex}
 258: {poor_cs_stu} said {And ap exam is coming..}
 259: {Mitski} said {bet on losing dogs}
 260: {riya} said {hello!}
 261: {riya kishen} said {part 1a!}
 262: {riya kishen} said {i'm doing lab 4!}
 263: {Maksym} said {hello world}
 264: { } said {wonder if you can messa}
 265: {\0} said {\0}
 266: {      } said {            }
 267: {rm mdb-cs3157} said {}
 268: {} said {reverse engineering mdb}
 269: {teri} said {this is too much}
 270: {Bayley} said {testing}
 271: {tyler} said {hello}
 272: {marco} said {polo}
 273: {w} said {mbappe deserves bdor}
 274: {hw} said {.... . .-.. .-.. ---}
 275: {youtube.com/} said {watch?v=dQw4w9WgXcQ}
 276: {yeahhhhhhhh} said {ok i can use that}
 277: {ksv} said {I want sweet potato}
 278: {tetra} said {ploid}
 279: {Fr  d  ric Chop} said {was a Polish composer a}
 280: {Rissa Kei Chua} said {Why is AP so hard?}
 281: {dedotated wam} said {whats the rec amount?}
 282: {sad ap student} said {take me back to java}
 283: {a} said {cs}
 284: {amadea} said {swimming after class :)}
 285: {Marc} said {Testing Code}
 286: {jinoo} said {hi}
 287: {lana} said {yes to heaven}
 288: {Layla} said {hi}
 289: {Matt} said {Hello World}
 290: {Emilianoooooo} said {IM A BEAST}
 291: {Emily} said {Hellooooooooooooooooooo}
 292: {Jacob Million} said {i heart ap}
 293: {boots} said {the house down}
 294: {we} said {must keep tehe average }
 295: {alonzo} said {hi}
 296: {wine} said {is it vegan?}
 297: {waldo} said {where am i}
 298: {elvin} said {leaving my mark}
 299: {scary costume} said {ap exam scores}
 300: {Wood Chuck} said {Would chuck if it could}
 301: {student} said {working on lab 4!}
 302: {taylor} said {1989 TV in 3 hours}
 303: {joe burrow} said {beat 49ers sunday}
 304: {tramy} said {hello world}
 305: {Cutie} said {Hi Everyone!}
 306: {sabby} said {): ap is hard but its o}
 307: {Emily} said {has the best roomie eve}
 308: {rhea} said {says hello}
 309: {Enid} said {guess my halloween cost}
 310: {dog} said {bark}
 311: {nemo} said {I love the C}
 312: {C++ ISO NL. 10} said {Pref underscore_style}
 313: {Manan} said {hello}
 314: {Rust} said {enters the chat & left}
 315: {Valgrind} said {I see dead ptrs}
 316: {annie} said {good luck on midterms!}
 317: {me} said {or not}
 318: {John} said {Testing}
 319: {John} said {Testing done bye}
 320: {Shon} said {so I hear ya like jazz}
 321: {mori} said {Jae is such a good lect}
 322: {spiderman} said {i am a superhero}
 323: {mike} said {hi i am mike}
 324: {thor} said {i don't know what a fun}
 325: {batman} said {i am not batman}
 326: {Taniyah Mason} said {You've got this!}
 327: {Taniyah Mason} said {Paint the town red}
 328: {the musicman} said {plz give me album recs!}
 329: {mr. musicless} said {i HATE music >:(}
 330: {Nick} said {help i'm trapped in AP!}
 331: {michelle twan} said {send help}
 332: {Brandon Pae} said {Excited for midterm!}
 333: {bart simpson} said {im like hey whats up he}
 334: {columbia hater} said {open the damn gates}
 335: {sam} said {betskatron}
 336: {Peder Dingsor} said {let's get started}
 337: {Peder } said {Manifesting a good midt}
 338: {how can i lose} said {if i'm already chose?}
 339: {pookie} said {its the way you act}
 340: {beep beep} said {keep it cute}
 341: {when you} said {when you when you}
 342: {Gal} said {Hello World}
 343: {Gal Kedem} said {Mcdonald's}
 344: {clinton} said {hello}
 345: {Andrew} said {Communism is cool}
 346: {Yoni} said {Class of 2053' proud ri}
 347: {Andrew} said {There is not in the wor}
 348: {We are Legioon.} said {We do not forgive.}
 349: {We do not forge} said {We are Anonymous.}
 350: {Pinchas} said {Giants for life}
 351: {aud} said {i am so deadfully confu}
 352: {Andrew Stein} said {If not now, when?}
 353: {aud} said {i meant dreadfully...}
 354: {aud} said {maybe i'm not so lost}
 355: {jadyn} said {have a good day :)}
 356: {troy bolton} said {bet on it}
 357: {pixar} said {lamplamplamp}
 358: {diego} said {i will start this hw be}
 359: {deegee} said {before sunday! }
 360: {Eva} said {hello}
 361: {Eva G} said {hellooo}
 362: {Millie Bear} said {tech is cool}
 363: {Friday} said {is kinyoub in Japanese}
 364: {Chinese Charact} said {   is compatible here?}
 365: {Keemin Lee} said {I'm not doing Part 2}
 366: {inigo montoya} said {you  killed my father}
 367: {inigo montoya} said {prepare to die!}
 368: {dimpy} said {computers arent real}
 369: {I} said {hello!}
 370: {I} said {starting lab4}
 371: {Lucy} said {Lab 4 is riveting}
 372: {Me again} said {Entering some more mess}
 373: {elias} said {Hi AP <3}
 374: {Alexia Popescu} said {Buna tuturor!}
 375: {Eric} said {cirE}
 376: {Galaxy} said {I'm better than apple}
 377: {Alexia} said {Happy Haloweekend!}
 378: {Elon Musk} said {when can I fight with M}
 379: {Haloween} said {BOO}
 380: {Jacob} said {yooooooo}
 381: {Zuck} said {Elon lets grapple}
 382: {Jim Lahey} said {I am the liquor!}
 383: { OB OB OB OB OB} said { OA OA OA OA OA OA OA O}
 384: {} said {}
 385: {Lucas} said {hi Theo and Alexia.}
 386: {Esteban} said {Don't quit}
 387: {socialconstruct} said {we pass if we fail}
 388: {Sandhya} said {First message :)}
 389: {              } said {Kalispera}
 390: {Sandhya} said {It's Friday!}
 391: {Theo} said {Lucas got 100 on midter}
 392: {Umme} said {hello AP world :)}
 393: {Umme} said {good luck on lab4}
 394: {AOT} said {Final part airs Nov 4th}
 395: {Eren} said {Yeager}
 396: {AP Student} said {Hello I'm Thomas}
 397: {Ariel} said {Hi allison}
 398: {Bayley} said {testing again}
 399: {Dominic } said {my name is not dom}
 400: {Gordon Ramsay} said {it's ***ing RAW}
 401: {Alessandra} said {hungry}
 402: {Ale} said {aleksy hungry}
 403: {Amrita Pal} said {hi everyone!!!}
 404: {layla} said {end the genocide}
 405: {Amrita Pal} said {guys my initials are AP}
 406: {Amrita Pal} said {happy halloweekend!!}
 407: {hudhud} said {happy halloween!}
 408: {NICHOLAS} said {should've started soone}
 409: {Nikola Desnica} said {Jae Lee = Mr AP}
 410: {hudhudny} said {I'm bored}
 411: {boo} said {I scared you}
 412: {bob} said {whaaaaaaaaaa}
 413: {henny kim} said {hello good night}
 414: {yo} said {wha}
 415: {star} said {Wish to get a decent sc}
 416: {star} said {Wishing a decent score}
 417: {Aurora} said { Coherence is a great m}
 418: {Adheesh K} said {sup yall I <3 AP}
 419: {Adheesh K} said {Good luck on lab 4!}
 420: {Gojo} said {I will live!}
 421: {notCamille} said {fall break is coming!}
 422: {layla} said {bardi esda (jamaican)}
 423: {Skylar} said {I wish I completed this}
 424: {neel shanmugam} said {databases are cool}
 425: {bryce} said {hello fella}
 426: {Adneen} said {Happy Halloween!}
 427: {Adneen } said {Hello!! }
 428: {kris jenner} said {ur doin amazing sweetie}
 429: {soulja boy} said {yuuuuuuuuuuuuuuuuuuu}
 430: {Batman} said {I am vengeance}
 431: {Rayan Hayle} said {Lab 4 started, midterm }
 432: {john} said {foobar}
 433: {conor} said {good mornin}
 434: {Lizette} said {hello}
 435: {Aliya Tang} said {hello world}
 436: {Aliya Tang} said {hi ap!!}
 437: {lixia} said {followme @lixia_chen_wu}
 438: {Michelle} said {Hi AP !!}
 439: {Michelle} said {This is cool :)}
 440: {iris} said {knock knock!!}
 441: {jae jae's} said {i love fried food}
 442: {Oduor} said {hello}
 443: {Jae Jae's} said {I am JJ's namesake}
 444: {haha} said {yoyo}
 445: {linda} said {im really tired rn}
 446: {Alex Seo} said {i like pizza}
 447: {AP Student} said {happy halloweekend}
 448: {roland.} said {:}
 449: {ryanh} said {hello}
 450: {frieren} said {A mere ten years ;(}
 451: {Sebastian} said {the quick brown fox}
 452: {Sebastian} said {jumped over the lazydog}
 453: {Leywin} said {realmheart}
 454: {Sung Jin Woo} said {Arise}
 455: {hi} said {yayyy}
 456: {} said {}
 457: {Faith G} said {Mandatory record post :}
 458: {Faith G} said {**post :))}
 459: {James Y} said {Hi everyone!}
 460: {ap student} said {starting lab 4}
 461: {Ethan ZHOU} said {hi I am here again}
 462: {Steve} said {I love Halloween}
 463: {Hao Cui} said {This is my message}
 464: {HC} said {LOL}
 465: {Simon} said {The weather is nice}
 466: {Simon} said {I am Czech}
 467: {Cecilia} said {is doing lab4e}
 468: {someone} said {hello}
 469: {Steve} said {testing}
 470: {Ice Spice} said {she a baddie she showin}
 471: {linds} said {i am scared}
 472: {Toya} said {Hi APers yay}
 473: {unknown} said {omomg}
 474: {ak} said {summer summer i know}
 475: {ak} said {aloha}
 476: {soreti} said {AAHHHHHHHH}
 477: {Toya } said {AP or Adv Prog? vote pl}
 478: {Austin} said {OR 1=1; DROP TABLE user}
 479: {diapavis} said {need a nap}
 480: {Greg Hirsch} said {if it is to be said}
 481: {Greg Hirsch} said {so it be, so it is}
 482: {ayaan} said {completing lab 4}
 483: {Tom Wambsgans} said {Can't make a Tomlette}
 484: {Tom Wambsgans} said {WO breaking a few Gregs}
 485: {n3si} said {According to all known }
 486: {according to al} said {l known laws of aviatio}
 487: {there is no way} said {a bee should be  able  }
 488: {to fly. Its win} said {gs are too small to get}
 489: {Cece} said {lab4}
 490: {Misha} said {what the dog doin}
 491: {Hailey} said {hey :D}
 492: {yes ok} said {no continue d          }
 493: {peso pluma} said {chauuuuuuuu}
 494: {lindsey} said {viva mexicooooooooooooo}
 495: {peso pluma} said {confia en el proceso}
 496: {Thomas Chen} said {My favorite professor i}
 497: {Thomas} said {s Jae Woo Lee}
 498: {twelve} said {equivalent to the produ}
 499: {Shan} said {difficult roads often l}
 500: {Shan} said {beautiful destinations.}
 501: {Luceeeeeeeeeee} said {Tested truncation}
 502: {Kathryn} said {i'm scared for exam2}
 503: {Liang Song} said {I just started}
 504: {silly rabbit} said {trix are for kids!}
 505: {gorilla} said {halloweekend x AP lab k}
 506: {good student} said {everything is great}
 507: {gloria} said {beep boop}
 508: {Zoie G} said {hey everyone! :-)}
 509: {Zoie G} said {My favorite color is ye}
 510: {sammy agrawal} said {ladies & gentlemen, we }
 511: {Zoie} said {Okay, this is my last m}
 512: {sammy agrawal} said {got em}
 513: {sammy agrawal} said {amazing saturday night}
 514: {sammy agrawal} said {AP=Absolute Party}
 515: {aidan} said {yah mean}
 516: {yo} said {yo}
 517: {william tang} said {AP at the function}
 518: {Matt} said {hello world}
 519: {anayeli :)} said {lollll}
 520: {yoyo} said {check out andrew bird's}
 521: {mr bird} said {check andrew bird's mus}
 522: {bee movie} said {according to all known }
 523: {procrastinator} said {i hope i can finish on }
 524: {Matt} said {Test 2}
 525: {Mike} said {world hello}
 526: {Mike} said {database record}
 527: {Mike} said {what is a pointer}
 528: {Emily} said {Testing testing!}
 529: {Zimou Liu} said {I caught the flu}
 530: {Mar} said {hi ap :/}
 531: {Wendy} said {Hello world}
 532: {Wendy} said {Start the lab4}
 533: {Anuar} said {starting lab4}
 534: {Ashley} said {Starting lab4!}
 535: {Ashley} said {Happy Halloweekend!}
 536: {Ygritte} said {You know nothing}
 537: {Wonders O wco21} said {hi}
 538: {JordynJ} said {Happy Sunday}
 539: {JordynJ} said {happy halloween }
 540: {Matrioshka} said {Patrioshka}
 541: {Julian R.} said {Matrioshka}
 542: {Divya} said {Hello my friend }
 543: {Zara} said {hi AP}
 544: {Zara} said {hello world}
 545: {Divya} said {new york in fall is awe}
 546: {Lucas Chen} said {hi!}
 547: {Andrew} said {Hi there!}
 548: {Sheen } said {Finally starting}
 549: {Sheen} said {go niners!}
 550: {student} said {This is my favorit clas}
 551: {akj} said {helloworld!!}
 552: {student1} said {this is fun}
 553: {why} said {the sad student}
 554: {Williams} said {He is in Europe}
 555: {BB} said {I am so stressed}
 556: {BB} said {I love this class Thank}
 557: {tired student} said {am done yay}
 558: {Esteban} said {I love NY}
 559: {Yinana} said {AP is killing me}
 560: {Anonymous} said {msg please}
 561: {yellow} said {yellower}
 562: {ArinJ} said {starting lab4 on time}
 563: {ArinJ} said {._.}
 564: {alan ma} said {hello AP!}
 565: {Ben Silverman} said {Yooooooo mad cool}
 566: {Ben S} said {AP amirite}
 567: {Ben S} said {truncation nation}
 568: {Alex Nguyen} said {beep boop}
 569: {test} said {test}
 570: {jeff} said {help me i just started}
 571: {jeff} said {yo pruebo esta base de }
 572: {Icaro Andrade S} said {Never gonna...}
 573: {Icaro Andrade S} said {Happy Halloween!}
 574: {Nancy} said {Spooktober}
 575: {justin} said {hello}
 576: {Nancy} said {Roar Lion Roar}
 577: {a student} said {help}
 578: {Jae} said {NO MORE HW EVER AGAIN!!}
 579: {Nabihah Ahmad} said {Free Palestine}
 580: {Billo} said {Boss}
 581: {Jae} said {haha you wish}
 582: {}  said  {} said {}  said  {}
 583: {} said {} said {} said {}
 584: {Elroy} said {imagine dragons}
 585: {Henry Zheng} said {Ben is my dad}
 586: {Mihir Uberoi} said {Sam Thomason}
 587: {Adam} said {I just started lab4 and}
 588: {Jessica Sun} said {Hello World}
 589: {Jessica Sun} said {Is everyone ready for t}
 590: {I love AP} said {AP is great}
 591: {tramy} said {checking one last time}
 592: {Scooby} said {Scooby Doo Bee Doo!}
 593: {Jonah Singer} said {happy halloween!}
 594: {Test} said {this is a Test}
 595: {Who} said {that ^^}
 596: {Jian Zhang} said {The pointer in C is cha}
 597: {NairaAltunkeser} said {are we out of the woods}
lookup: ==945207== 
==945207== HEAP SUMMARY:
==945207==     in use at exit: 0 bytes in 0 blocks
==945207==   total heap usage: 1,199 allocs, 1,199 frees, 45,720 bytes allocated
==945207== 
==945207== All heap blocks were freed -- no leaks are possible
==945207== 
==945207== For lists of detected and suppressed errors, rerun with: -s
==945207== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
==948680== Memcheck, a memory error detector
==948680== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==948680== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==948680== Command: ./mdb-lookup ap-mdb
==948680== 
lookup: hello   
  16: {May Ramati} said {hello AP}
  35: {Sam} said {hello!!!}
  67: {sc} said {hellohellohello}
  77: {ellie} said {test hello}
  78: {Mason McVey} said {hello world!}
 109: {Ben Fu} said {hello world dude}
 110: {student} said {hello there AP}
 128: {Katie} said {hello world!}
 131: {Katie Zhang} said {hello world 2}
 132: {student 123} said {hello everyone}
 140: {my mom} said {hello children}
 150: {AB } said {hello}
 161: {Hope} said {hello ap!!}
 182: {test} said {hello lab4}
 185: {adele} said {hello its me}
 207: {Kait} said {hello!}
 218: {Zaina} said {hello world}
 220: {hello} said {world}
 225: {poko} said {hello!}
 243: {hellen} said {hii hello bye}
 260: {riya} said {hello!}
 263: {Maksym} said {hello world}
 271: {tyler} said {hello}
 304: {tramy} said {hello world}
 308: {rhea} said {says hello}
 313: {Manan} said {hello}
 344: {clinton} said {hello}
 360: {Eva} said {hello}
 361: {Eva G} said {hellooo}
 369: {I} said {hello!}
 392: {Umme} said {hello AP world :)}
 413: {henny kim} said {hello good night}
 425: {bryce} said {hello fella}
 434: {Lizette} said {hello}
 435: {Aliya Tang} said {hello world}
 442: {Oduor} said {hello}
 449: {ryanh} said {hello}
 468: {someone} said {hello}
 518: {Matt} said {hello world}
 525: {Mike} said {world hello}
 544: {Zara} said {hello world}
 551: {akj} said {helloworld!!}
 564: {alan ma} said {hello AP!}
 575: {justin} said {hello}
lookup: hellooooo   
  16: {May Ramati} said {hello AP}
  35: {Sam} said {hello!!!}
  67: {sc} said {hellohellohello}
  77: {ellie} said {test hello}
  78: {Mason McVey} said {hello world!}
 109: {Ben Fu} said {hello world dude}
 110: {student} said {hello there AP}
 128: {Katie} said {hello world!}
 131: {Katie Zhang} said {hello world 2}
 132: {student 123} said {hello everyone}
 140: {my mom} said {hello children}
 150: {AB } said {hello}
 161: {Hope} said {hello ap!!}
 182: {test} said {hello lab4}
 185: {adele} said {hello its me}
 207: {Kait} said {hello!}
 218: {Zaina} said {hello world}
 220: {hello} said {world}
 225: {poko} said {hello!}
 243: {hellen} said {hii hello bye}
 260: {riya} said {hello!}
 263: {Maksym} said {hello world}
 271: {tyler} said {hello}
 304: {tramy} said {hello world}
 308: {rhea} said {says hello}
 313: {Manan} said {hello}
 344: {clinton} said {hello}
 360: {Eva} said {hello}
 361: {Eva G} said {hellooo}
 369: {I} said {hello!}
 392: {Umme} said {hello AP world :)}
 413: {henny kim} said {hello good night}
 425: {bryce} said {hello fella}
 434: {Lizette} said {hello}
 435: {Aliya Tang} said {hello world}
 442: {Oduor} said {hello}
 449: {ryanh} said {hello}
 468: {someone} said {hello}
 518: {Matt} said {hello world}
 525: {Mike} said {world hello}
 544: {Zara} said {hello world}
 551: {akj} said {helloworld!!}
 564: {alan ma} said {hello AP!}
 575: {justin} said {hello}
lookup: Jordyn  
 538: {JordynJ} said {Happy Sunday}
 539: {JordynJ} said {happy halloween }
lookup: JJordyn
 
lookup:   
   1: {Jae Lee} said {Welcome to Lab 4!}
   2: {AP sucks!} said {no one ever}
   3: {Charlie} said {Let's Marvin Gaye}
   4: {yerrrr} said {yerrrr}
   5: {Colby} said {What's good bruv}
   6: {Colby} said {Lakers in 5}
   7: {Salia Nahshal} said {Hi APers}
   8: {Salia Nahshal } said {Good luck!}
   9: {Salia Nahshal } said {Bye!}
  10: {madeleine} said {first double digit hayy}
  11: {sean} said {crime and punishment}
  12: {ben} said {the first us president}
  13: {ben} said {like clean clothes}
  14: {ben } said {a lot}
  15: {rc} said {ap is the goat}
  16: {May Ramati} said {hello AP}
  17: {May Ramati} said {Good luck in lab 4!}
  18: {May Ramati} said {Bye :)}
  19: {home} said {return home}
  20: {Cai} said {Hi}
  21: {Vishnu } said {Inception best movie}
  22: {blue apple} said {Do blue apples exist?}
  23: {Vishnu} said {}
  24: {Semih Gultekin} said {Good luck with assignme}
  25: {Nitin Rao} said {Hello AP!}
  26: {Farihah Chowdhu} said {Hiii happy last week of}
  27: {Farihah} said {October}
  28: {Kassey Chang} said {Hi AP}
  29: {Katherine Lee} said {Happy Fall}
  30: {Mingyuan Shao} said {Hi, Nice to meet everyo}
  31: {Mingyuan Shao} said {AP is really fun!!}
  32: {ml} said {Starting AP Lab 4 now!}
  33: {Xingchen} said {Just do it}
  34: {Kyleigh} said {That's my name!}
  35: {Sam} said {hello!!!}
  36: {the chicken} said {to the cow.}
  37: {Sam} said {there are messages here}
  38: {the tree} said {nothing it's a tree}
  39: {Jorge} said {survive!}
  40: {student } said {do easy exams Jae!}
  41: {I} said {I added a message}
  42: {Alison Wu} said {uh oh it's lab 4}
  43: {ishan} said {whats good gang}
  44: {taimurs} said {GYATT}
  45: {SergeiPavlovich} said {walk in fridge}
  46: {Arnesa} said {Hello!}
  47: {Arnesa} said {Testing...}
  48: {tiffany} said {tralalalalalala}
  49: {ujir} said {irishman}
  50: {sophie agbekpen} said {period queen}
  51: {Alex N adn2130} said {Hello World!}
  52: {Eden} said {Hi, how are you all tod}
  53: {Alex N adn2130} said {Goodbye :)}
  54: {Clarence Liu} said {Hi guys}
  55: {Heidy Mendez} said {I am hungry rn}
  56: {Alyssa} said {starting lab 4}
  57: {Bar Kroitoro} said {Hello AP classmates}
  58: {Bar Kroitoro} said {Hi everyone}
  59: {madeline} said {good morning}
  60: {Alexandra Garci} said {finally found this file}
  61: {Shreya} said {good morning}
  62: {Shreya} said {good night}
  63: {good} said {day}
  64: {Carson} said {Hello, c may we all get}
  65: {Carson} said {congcongcong!}
  66: {sc} said {almost fall break - you}
  67: {sc} said {hellohellohello}
  68: {stone} said {journey before destinat}
  69: {stone} said {bing bong}
  70: {Weiliang} said {-_-}
  71: {Git} said {No more Git Questions i}
  72: {Rick} said {Wubba Lubba dub-dub}
  73: {hiiii} said {byeeee}
  74: {king julian} said {AHHHHHHHHHHHHHHHHHHHHHH}
  75: {Fahitza Quessa} said {Wow I just started this}
  76: {Fahitza Quessa} said {I am just a girl}
  77: {ellie} said {test hello}
  78: {Mason McVey} said {hello world!}
  79: {mkm2239} said {another msg}
  80: {andromeda} said {   .   }
  81: {fred} said {great}
  82: {Bae Lee} said {my favorite class <3}
  83: {Nicholas} said {we out here}
  84: {Jae} said {Get started with lab4 !}
  85: {Shir S} said {Hi there}
  86: {:)} said {hi}
  87: {emma} said {hey what's up}
  88: {Trishna} said {why is Pupin so cold}
  89: {Adam Dawood} said {Hello}
  90: {Farris} said {Hello!}
  91: {Alqalam} said {This is pretty cool!}
  92: {Jess} said {Hello you all APers!}
  93: {Jess} said {How was class today?}
  94: {Saloni Jain} said {}
  95: {Saloni Jain} said {hi everyone!}
  96: {I hit something} said {No stormtrooper ever}
  97: {Andre} said {hi guys}
  98: {Alice} said {always hangry}
  99: {Teresa } said {message}
 100: {IceSpice} said {She a baddie, she know }
 101: {IceSpice} said {She a baddie with her b}
 102: {Jacob} said {testing message}
 103: {Jae} said {Get started w lab4 now!}
 104: {Elena} said {hi :)}
 105: {Mufasa} said {What up Jae }
 106: {Juan} said {azul=blue}
 107: {Fabi} said {Happy Halloween}
 108: {Ben} said {seg fault core dumped}
 109: {Ben Fu} said {hello world dude}
 110: {student} said {hello there AP}
 111: {Ai Siqi} said {One divides into two!}
 112: {Jacques Lacan} said {I think where I am not}
 113: {Jorge } said {just another comment}
 114: {Sam} said {java > C}
 115: {Ari} said {time for lab4}
 116: {guacamole} said {passionfruit by drake}
 117: {Vayu} said {Hopefully this worked..}
 118: {i luv jae} said {my man jae is bae}
 119: {not Jae} said {Jae Jae Jae Jae Jae Joe}
 120: {Annalie} said {Hi}
 121: {Annalie} said {Bye}
 122: {richard} said {im so tired}
 123: {sunset lover} said {the sunset was so prett}
 124: {fee fi} said {fo fum}
 125: {one of us} said {on the trail}
 126: {david} said {hi friends! good luck}
 127: {ronaldo} said {messi sucks}
 128: {Katie} said {hello world!}
 129: {messi} said {ronaldo sucks}
 130: {} said {}
 131: {Katie Zhang} said {hello world 2}
 132: {student 123} said {hello everyone}
 133: {yaya} said {i miss 2019 tiktok}
 134: {yaya} said {can i get a hoya?}
 135: {yaya} said {how was your day? mine }
 136: {Michael} said {@michael.straus.two.s}
 137: {ag} said {what's up?}
 138: {things i miss} said {java garbage collector}
 139: {jae woo lee} said {3 words, 3 letters, 1 s}
 140: {my mom} said {hello children}
 141: {birdie mcbird} said {tweet tweet}
 142: {gemma collins} said {i'm claustrophobic}
 143: {Leelop} said {Bardee ess du (jamaican}
 144: {ap student} said {starting lab4!}
 145: {Kassey Chang} said {Hello again}
 146: {mm} said {i hope i dont fail this}
 147: {Daniel} said {Hi!}
 148: {Daniel} said {Why?}
 149: {Jae Kwon} said {Follow -> @jaeeekwon}
 150: {AB } said {hello}
 151: {AB} said {no yeah}
 152: {Sarah Bearde} said {Good morning, AP!}
 153: {Sarah Bearden} said {Live laugh love}
 154: {Sarah Bearden} said {testing testing 123}
 155: {Johnny} said {I did not hit her}
 156: {jae woo bee} said {buzz buzz}
 157: {Rahi} said {Hellooooooo}
 158: {Moises} said {This is pretty cool!}
 159: {jae} said {you all get A+ :)}
 160: {crrrrr} said {je suis le deluge}
 161: {Hope} said {hello ap!!}
 162: {Hope} said {is this working}
 163: {William W} said {Every man dies, not eve}
 164: {Bartleby} said {I would rather not}
 165: {zen} said {haii}
 166: {Mila} said {Hi}
 167: {Mila} said {Tudo bem?}
 168: {Marie Cat} said {meow~meow~~woof!}
 169: {Jae Lee} said {hi}
 170: {flu2104} said {Hello World}
 171: {Bryan} said {class of 2025!!!!!!!!!}
 172: {10TypesOfPeople} said {UnderstandBinaryOrNot}
 173: {Edward} said {Nuggets in 4}
 174: {Edward} said {Listen to TesseracT}
 175: {Jae} said {you shall not find this}
 176: {Aiden} said {Hello}
 177: {Aiden E.} said {Hello world}
 178: {ARB} said {Too many labs}
 179: {ARB} said {Just kidding! these are}
 180: {ARB} said {FUN ! DON"T tell the fu}
 181: {michelle} said {Thankful to the TA's}
 182: {test} said {hello lab4}
 183: {Skeele} said {part 1a is hard}
 184: {Taylor} said {1989 This Friday}
 185: {adele} said {hello its me}
 186: {bsb <3} said {i want it that way cuz }
 187: {Sandra Zelen} said {good luck on lab 4!}
 188: {Sandra Zelen} said {so real}
 189: {leah} said {:>  }
 190: {leah} said {woah this is so cool}
 191: {Tobechi Onwuka} said {testing}
 192: {owl} said {OVO}
 193: {willyfuey} said {cashews are the best nu}
 194: {arleen} said {  (         )  }
 195: {arleen} said {hi testing}
 196: {Sky} said {Check out CSC Bobagram!}
 197: {Sky} said {Put me down as referral}
 198: {Teresa} said {put me down instead for}
 199: {Teresa} said {csc bobagrams :)}
 200: {jessica} said {hola mi amigos}
 201: {jessica} said {como estas todos}
 202: {CR7} said {Siuuuuuuu!}
 203: {moon} said {I love me and C}
 204: {sun} said {coding in the moonlight}
 205: {Jayz} said {Barbs RISE!!!}
 206: {trishna} said {makefiles are starting }
 207: {Kait} said {hello!}
 208: {Ali} said {yeooo wsg}
 209: {Ali} said {po que e isso}
 210: {Samir} said {Hello AP!}
 211: {Ramya} said {hi everyone!}
 212: {Batman} said {Robin to the batmobile}
 213: {AP Student} said {What day is it?}
 214: {Jae} said {Send help!}
 215: {joe} said {yup}
 216: {Evelyn} said {Hello World}
 217: {Kevin } said {What's up?}
 218: {Zaina} said {hello world}
 219: {Zaina} said {pupin 301}
 220: {hello} said {world}
 221: {confucius} said {i got 99 problems but}
 222: {joe} said {line 222 is a silly goo}
 223: {i mean} said {line 224 is silly goose}
 224: {Enrista} said {slay}
 225: {poko} said {hello!}
 226: {Cat Escobar} said {Happy Spooky Season!}
 227: {JWP} said {I'm in butler ref at 2a}
 228: {timestamp} said {written@10.26.2:14}
 229: {Melisa} said {T-1 DAY TIL 1989(TV) DR}
 230: {Ruizhe Fu} said {Hii}
 231: {Zac} said {random times}
 232: {Z} said {start earlier, man}
 233: {Z} said {Happy Halloween}
 234: {marionn} said {HELLO}
 235: {Kira} said {message}
 236: {Meron} said {happy pre-Friday!}
 237: {Meron} said {halloweekend:))}
 238: {Marionna Saunde} said {wassup}
 239: {Marionna Saunde} said {happy halloween}
 240: {Marionna Saunde} said {vibezz}
 241: {Allyce} said {<3 <3 lmao}
 242: {Karin} said {This is cool!!}
 243: {hellen} said {hii hello bye}
 244: {sam c} said {i <3 analysis}
 245: {APer} said {the weather today is so}
 246: {john doe} said {i need an internship}
 247: {ronaldo} said {messi is the goat}
 248: {X} said {moonlight uh}
 249: {oppenheimer} said {now i am become death}
 250: {jae the bae} said {no wae i'm feelin kinda}
 251: {vzr} said {it's a beautiful day}
 252: {Melisa} said {spotify daylist >>>}
 253: {Makda} said {heyyy}
 254: {yoyo} said {Let's go to a Halloween}
 255: {yoyo} said {party! ye~}
 256: {Nithin C} said {Yasss}
 257: {poor_cs_stu} said {just finished fundie ex}
 258: {poor_cs_stu} said {And ap exam is coming..}
 259: {Mitski} said {bet on losing dogs}
 260: {riya} said {hello!}
 261: {riya kishen} said {part 1a!}
 262: {riya kishen} said {i'm doing lab 4!}
 263: {Maksym} said {hello world}
 264: { } said {wonder if you can messa}
 265: {\0} said {\0}
 266: {      } said {            }
 267: {rm mdb-cs3157} said {}
 268: {} said {reverse engineering mdb}
 269: {teri} said {this is too much}
 270: {Bayley} said {testing}
 271: {tyler} said {hello}
 272: {marco} said {polo}
 273: {w} said {mbappe deserves bdor}
 274: {hw} said {.... . .-.. .-.. ---}
 275: {youtube.com/} said {watch?v=dQw4w9WgXcQ}
 276: {yeahhhhhhhh} said {ok i can use that}
 277: {ksv} said {I want sweet potato}
 278: {tetra} said {ploid}
 279: {Fr  d  ric Chop} said {was a Polish composer a}
 280: {Rissa Kei Chua} said {Why is AP so hard?}
 281: {dedotated wam} said {whats the rec amount?}
 282: {sad ap student} said {take me back to java}
 283: {a} said {cs}
 284: {amadea} said {swimming after class :)}
 285: {Marc} said {Testing Code}
 286: {jinoo} said {hi}
 287: {lana} said {yes to heaven}
 288: {Layla} said {hi}
 289: {Matt} said {Hello World}
 290: {Emilianoooooo} said {IM A BEAST}
 291: {Emily} said {Hellooooooooooooooooooo}
 292: {Jacob Million} said {i heart ap}
 293: {boots} said {the house down}
 294: {we} said {must keep tehe average }
 295: {alonzo} said {hi}
 296: {wine} said {is it vegan?}
 297: {waldo} said {where am i}
 298: {elvin} said {leaving my mark}
 299: {scary costume} said {ap exam scores}
 300: {Wood Chuck} said {Would chuck if it could}
 301: {student} said {working on lab 4!}
 302: {taylor} said {1989 TV in 3 hours}
 303: {joe burrow} said {beat 49ers sunday}
 304: {tramy} said {hello world}
 305: {Cutie} said {Hi Everyone!}
 306: {sabby} said {): ap is hard but its o}
 307: {Emily} said {has the best roomie eve}
 308: {rhea} said {says hello}
 309: {Enid} said {guess my halloween cost}
 310: {dog} said {bark}
 311: {nemo} said {I love the C}
 312: {C++ ISO NL. 10} said {Pref underscore_style}
 313: {Manan} said {hello}
 314: {Rust} said {enters the chat & left}
 315: {Valgrind} said {I see dead ptrs}
 316: {annie} said {good luck on midterms!}
 317: {me} said {or not}
 318: {John} said {Testing}
 319: {John} said {Testing done bye}
 320: {Shon} said {so I hear ya like jazz}
 321: {mori} said {Jae is such a good lect}
 322: {spiderman} said {i am a superhero}
 323: {mike} said {hi i am mike}
 324: {thor} said {i don't know what a fun}
 325: {batman} said {i am not batman}
 326: {Taniyah Mason} said {You've got this!}
 327: {Taniyah Mason} said {Paint the town red}
 328: {the musicman} said {plz give me album recs!}
 329: {mr. musicless} said {i HATE music >:(}
 330: {Nick} said {help i'm trapped in AP!}
 331: {michelle twan} said {send help}
 332: {Brandon Pae} said {Excited for midterm!}
 333: {bart simpson} said {im like hey whats up he}
 334: {columbia hater} said {open the damn gates}
 335: {sam} said {betskatron}
 336: {Peder Dingsor} said {let's get started}
 337: {Peder } said {Manifesting a good midt}
 338: {how can i lose} said {if i'm already chose?}
 339: {pookie} said {its the way you act}
 340: {beep beep} said {keep it cute}
 341: {when you} said {when you when you}
 342: {Gal} said {Hello World}
 343: {Gal Kedem} said {Mcdonald's}
 344: {clinton} said {hello}
 345: {Andrew} said {Communism is cool}
 346: {Yoni} said {Class of 2053' proud ri}
 347: {Andrew} said {There is not in the wor}
 348: {We are Legioon.} said {We do not forgive.}
 349: {We do not forge} said {We are Anonymous.}
 350: {Pinchas} said {Giants for life}
 351: {aud} said {i am so deadfully confu}
 352: {Andrew Stein} said {If not now, when?}
 353: {aud} said {i meant dreadfully...}
 354: {aud} said {maybe i'm not so lost}
 355: {jadyn} said {have a good day :)}
 356: {troy bolton} said {bet on it}
 357: {pixar} said {lamplamplamp}
 358: {diego} said {i will start this hw be}
 359: {deegee} said {before sunday! }
 360: {Eva} said {hello}
 361: {Eva G} said {hellooo}
 362: {Millie Bear} said {tech is cool}
 363: {Friday} said {is kinyoub in Japanese}
 364: {Chinese Charact} said {   is compatible here?}
 365: {Keemin Lee} said {I'm not doing Part 2}
 366: {inigo montoya} said {you  killed my father}
 367: {inigo montoya} said {prepare to die!}
 368: {dimpy} said {computers arent real}
 369: {I} said {hello!}
 370: {I} said {starting lab4}
 371: {Lucy} said {Lab 4 is riveting}
 372: {Me again} said {Entering some more mess}
 373: {elias} said {Hi AP <3}
 374: {Alexia Popescu} said {Buna tuturor!}
 375: {Eric} said {cirE}
 376: {Galaxy} said {I'm better than apple}
 377: {Alexia} said {Happy Haloweekend!}
 378: {Elon Musk} said {when can I fight with M}
 379: {Haloween} said {BOO}
 380: {Jacob} said {yooooooo}
 381: {Zuck} said {Elon lets grapple}
 382: {Jim Lahey} said {I am the liquor!}
 383: { OB OB OB OB OB} said { OA OA OA OA OA OA OA O}
 384: {} said {}
 385: {Lucas} said {hi Theo and Alexia.}
 386: {Esteban} said {Don't quit}
 387: {socialconstruct} said {we pass if we fail}
 388: {Sandhya} said {First message :)}
 389: {              } said {Kalispera}
 390: {Sandhya} said {It's Friday!}
 391: {Theo} said {Lucas got 100 on midter}
 392: {Umme} said {hello AP world :)}
 393: {Umme} said {good luck on lab4}
 394: {AOT} said {Final part airs Nov 4th}
 395: {Eren} said {Yeager}
 396: {AP Student} said {Hello I'm Thomas}
 397: {Ariel} said {Hi allison}
 398: {Bayley} said {testing again}
 399: {Dominic } said {my name is not dom}
 400: {Gordon Ramsay} said {it's ***ing RAW}
 401: {Alessandra} said {hungry}
 402: {Ale} said {aleksy hungry}
 403: {Amrita Pal} said {hi everyone!!!}
 404: {layla} said {end the genocide}
 405: {Amrita Pal} said {guys my initials are AP}
 406: {Amrita Pal} said {happy halloweekend!!}
 407: {hudhud} said {happy halloween!}
 408: {NICHOLAS} said {should've started soone}
 409: {Nikola Desnica} said {Jae Lee = Mr AP}
 410: {hudhudny} said {I'm bored}
 411: {boo} said {I scared you}
 412: {bob} said {whaaaaaaaaaa}
 413: {henny kim} said {hello good night}
 414: {yo} said {wha}
 415: {star} said {Wish to get a decent sc}
 416: {star} said {Wishing a decent score}
 417: {Aurora} said { Coherence is a great m}
 418: {Adheesh K} said {sup yall I <3 AP}
 419: {Adheesh K} said {Good luck on lab 4!}
 420: {Gojo} said {I will live!}
 421: {notCamille} said {fall break is coming!}
 422: {layla} said {bardi esda (jamaican)}
 423: {Skylar} said {I wish I completed this}
 424: {neel shanmugam} said {databases are cool}
 425: {bryce} said {hello fella}
 426: {Adneen} said {Happy Halloween!}
 427: {Adneen } said {Hello!! }
 428: {kris jenner} said {ur doin amazing sweetie}
 429: {soulja boy} said {yuuuuuuuuuuuuuuuuuuu}
 430: {Batman} said {I am vengeance}
 431: {Rayan Hayle} said {Lab 4 started, midterm }
 432: {john} said {foobar}
 433: {conor} said {good mornin}
 434: {Lizette} said {hello}
 435: {Aliya Tang} said {hello world}
 436: {Aliya Tang} said {hi ap!!}
 437: {lixia} said {followme @lixia_chen_wu}
 438: {Michelle} said {Hi AP !!}
 439: {Michelle} said {This is cool :)}
 440: {iris} said {knock knock!!}
 441: {jae jae's} said {i love fried food}
 442: {Oduor} said {hello}
 443: {Jae Jae's} said {I am JJ's namesake}
 444: {haha} said {yoyo}
 445: {linda} said {im really tired rn}
 446: {Alex Seo} said {i like pizza}
 447: {AP Student} said {happy halloweekend}
 448: {roland.} said {:}
 449: {ryanh} said {hello}
 450: {frieren} said {A mere ten years ;(}
 451: {Sebastian} said {the quick brown fox}
 452: {Sebastian} said {jumped over the lazydog}
 453: {Leywin} said {realmheart}
 454: {Sung Jin Woo} said {Arise}
 455: {hi} said {yayyy}
 456: {} said {}
 457: {Faith G} said {Mandatory record post :}
 458: {Faith G} said {**post :))}
 459: {James Y} said {Hi everyone!}
 460: {ap student} said {starting lab 4}
 461: {Ethan ZHOU} said {hi I am here again}
 462: {Steve} said {I love Halloween}
 463: {Hao Cui} said {This is my message}
 464: {HC} said {LOL}
 465: {Simon} said {The weather is nice}
 466: {Simon} said {I am Czech}
 467: {Cecilia} said {is doing lab4e}
 468: {someone} said {hello}
 469: {Steve} said {testing}
 470: {Ice Spice} said {she a baddie she showin}
 471: {linds} said {i am scared}
 472: {Toya} said {Hi APers yay}
 473: {unknown} said {omomg}
 474: {ak} said {summer summer i know}
 475: {ak} said {aloha}
 476: {soreti} said {AAHHHHHHHH}
 477: {Toya } said {AP or Adv Prog? vote pl}
 478: {Austin} said {OR 1=1; DROP TABLE user}
 479: {diapavis} said {need a nap}
 480: {Greg Hirsch} said {if it is to be said}
 481: {Greg Hirsch} said {so it be, so it is}
 482: {ayaan} said {completing lab 4}
 483: {Tom Wambsgans} said {Can't make a Tomlette}
 484: {Tom Wambsgans} said {WO breaking a few Gregs}
 485: {n3si} said {According to all known }
 486: {according to al} said {l known laws of aviatio}
 487: {there is no way} said {a bee should be  able  }
 488: {to fly. Its win} said {gs are too small to get}
 489: {Cece} said {lab4}
 490: {Misha} said {what the dog doin}
 491: {Hailey} said {hey :D}
 492: {yes ok} said {no continue d          }
 493: {peso pluma} said {chauuuuuuuu}
 494: {lindsey} said {viva mexicooooooooooooo}
 495: {peso pluma} said {confia en el proceso}
 496: {Thomas Chen} said {My favorite professor i}
 497: {Thomas} said {s Jae Woo Lee}
 498: {twelve} said {equivalent to the produ}
 499: {Shan} said {difficult roads often l}
 500: {Shan} said {beautiful destinations.}
 501: {Luceeeeeeeeeee} said {Tested truncation}
 502: {Kathryn} said {i'm scared for exam2}
 503: {Liang Song} said {I just started}
 504: {silly rabbit} said {trix are for kids!}
 505: {gorilla} said {halloweekend x AP lab k}
 506: {good student} said {everything is great}
 507: {gloria} said {beep boop}
 508: {Zoie G} said {hey everyone! :-)}
 509: {Zoie G} said {My favorite color is ye}
 510: {sammy agrawal} said {ladies & gentlemen, we }
 511: {Zoie} said {Okay, this is my last m}
 512: {sammy agrawal} said {got em}
 513: {sammy agrawal} said {amazing saturday night}
 514: {sammy agrawal} said {AP=Absolute Party}
 515: {aidan} said {yah mean}
 516: {yo} said {yo}
 517: {william tang} said {AP at the function}
 518: {Matt} said {hello world}
 519: {anayeli :)} said {lollll}
 520: {yoyo} said {check out andrew bird's}
 521: {mr bird} said {check andrew bird's mus}
 522: {bee movie} said {according to all known }
 523: {procrastinator} said {i hope i can finish on }
 524: {Matt} said {Test 2}
 525: {Mike} said {world hello}
 526: {Mike} said {database record}
 527: {Mike} said {what is a pointer}
 528: {Emily} said {Testing testing!}
 529: {Zimou Liu} said {I caught the flu}
 530: {Mar} said {hi ap :/}
 531: {Wendy} said {Hello world}
 532: {Wendy} said {Start the lab4}
 533: {Anuar} said {starting lab4}
 534: {Ashley} said {Starting lab4!}
 535: {Ashley} said {Happy Halloweekend!}
 536: {Ygritte} said {You know nothing}
 537: {Wonders O wco21} said {hi}
 538: {JordynJ} said {Happy Sunday}
 539: {JordynJ} said {happy halloween }
 540: {Matrioshka} said {Patrioshka}
 541: {Julian R.} said {Matrioshka}
 542: {Divya} said {Hello my friend }
 543: {Zara} said {hi AP}
 544: {Zara} said {hello world}
 545: {Divya} said {new york in fall is awe}
 546: {Lucas Chen} said {hi!}
 547: {Andrew} said {Hi there!}
 548: {Sheen } said {Finally starting}
 549: {Sheen} said {go niners!}
 550: {student} said {This is my favorit clas}
 551: {akj} said {helloworld!!}
 552: {student1} said {this is fun}
 553: {why} said {the sad student}
 554: {Williams} said {He is in Europe}
 555: {BB} said {I am so stressed}
 556: {BB} said {I love this class Thank}
 557: {tired student} said {am done yay}
 558: {Esteban} said {I love NY}
 559: {Yinana} said {AP is killing me}
 560: {Anonymous} said {msg please}
 561: {yellow} said {yellower}
 562: {ArinJ} said {starting lab4 on time}
 563: {ArinJ} said {._.}
 564: {alan ma} said {hello AP!}
 565: {Ben Silverman} said {Yooooooo mad cool}
 566: {Ben S} said {AP amirite}
 567: {Ben S} said {truncation nation}
 568: {Alex Nguyen} said {beep boop}
 569: {test} said {test}
 570: {jeff} said {help me i just started}
 571: {jeff} said {yo pruebo esta base de }
 572: {Icaro Andrade S} said {Never gonna...}
 573: {Icaro Andrade S} said {Happy Halloween!}
 574: {Nancy} said {Spooktober}
 575: {justin} said {hello}
 576: {Nancy} said {Roar Lion Roar}
 577: {a student} said {help}
 578: {Jae} said {NO MORE HW EVER AGAIN!!}
 579: {Nabihah Ahmad} said {Free Palestine}
 580: {Billo} said {Boss}
 581: {Jae} said {haha you wish}
 582: {}  said  {} said {}  said  {}
 583: {} said {} said {} said {}
 584: {Elroy} said {imagine dragons}
 585: {Henry Zheng} said {Ben is my dad}
 586: {Mihir Uberoi} said {Sam Thomason}
 587: {Adam} said {I just started lab4 and}
 588: {Jessica Sun} said {Hello World}
 589: {Jessica Sun} said {Is everyone ready for t}
 590: {I love AP} said {AP is great}
 591: {tramy} said {checking one last time}
 592: {Scooby} said {Scooby Doo Bee Doo!}
 593: {Jonah Singer} said {happy halloween!}
 594: {Test} said {this is a Test}
 595: {Who} said {that ^^}
 596: {Jian Zhang} said {The pointer in C is cha}
 597: {NairaAltunkeser} said {are we out of the woods}
lookup: ==948680== 
==948680== HEAP SUMMARY:
==948680==     in use at exit: 0 bytes in 0 blocks
==948680==   total heap usage: 1,199 allocs, 1,199 frees, 51,352 bytes allocated
==948680== 
==948680== All heap blocks were freed -- no leaks are possible
==948680== 
==948680== For lists of detected and suppressed errors, rerun with: -s
==948680== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
