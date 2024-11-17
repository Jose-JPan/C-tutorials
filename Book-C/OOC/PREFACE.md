# Preface
## The beginning
    1 No programming technique solves all problems 
    2 No programming language produces only correct results 
    3 No programmer should start each project from scratch 
## (OOP)    
    Object-oriented programming is the current cure-all - althoug it has been
    around for much more than ten years. At the core, there is little more to it than
    finally applying the good programming principles which we have been taught for 
    more than twenty years. C++ (Eiffel, Oberon-2, Smalltalk... take your pick) is the
    New Language because it is object-oriented - although you need not use it that 
    way if you do not want to (or know how to), and it turns out that you can do just
    as well with plain ANSI-C. Only object-orientation permits code reuse between
    projects -- Although the idea of subroutines is as old as computers and good 
    programmers always carried their toolkits and libraries with them.

## About the book
    This book is not going to praise object-oriented programming or condemn the Old 
    Way. We are simply going to use ANSI-C to discover how object-oriented programming
    is done, what its techniques are, why they help us solve bigger problems, and how 
    we generality and program to catch mistakes earlier. Along the way we encounter
    all the jargon - classes, inheritance, instances, linkage, methods, objects, 
    polymorphisms, and more - but we take it out of the realm of magic and see how it 
    translates into the things we have known and done all along.

## Nice Discovery
    I had fun discovering that ANSI-C is a full-scale object-oriented language.
    To share this fun you need to be reasonably fluent in ANSI-C to begin with -- 
    feeling comfortable with structure, pointers, prototypes, and function pointers is
    a must. Working through the book you will encounter all the newspeak -- according 
    to Orwell and Webster a language "designed to diminish the range of thought" -- 
    and I will try to demonstrate how it merely combines all the good programming 
    principles that you always wanted to employ into a coherent approach. As a result
    you may will become a more proficiente ANSI-C programmer. 

## Chapters
    The first six chapters develop the fundations of object-oriented programming with
    ANSI-C. We start with a careful information hiding technique for abstract data 
    types, add generic functions based on dynamic linkage and inherit code by 
    judicious lengthening of structures. Finally, we put it all together in a class
    hierarchy that makes code much easier to maintain.

## Having Discipline
    Programming takes discipline. Good programming takes a lot of discipline, a large
    number of principles, and standard, defensive ways of doing things right. Pro-
    grammers use tools. Good programmers make tools to dispose of routine tasks once
    and for all. Object-oriented programming with ANSI-C requires a fair amount of
    immutable code -- names may change but not the structures. Therefore, in chapter
    seven we build a small preprocessor to create the boilerplate required. It looks
    like yet another new object-oriented dialect language (yanoodi perhaps?) but it
    should not be viewed as such -- it gets the dull parts out of the way and lets us
    concentrate on the creative aspects of problem solving with better techniques. 
    ooc (sorry) is pliable: we have made it, we understand it and can change it, and 
    it writes the ANSI-C code just like we would.

## Refining Technology
    The following chapters refine our technology. In chapter eight we add dynamic 
    type checking to catch our mistakes earlier on. In chapter nine we arrange for
    automatic initialization to prevent another class of bugs. Chapter ten introduces
    delegates and shows how classes and callback functions cooperate to simplify, for
    example, the constant chore of producing standard main programs. More chapters 
    are concerned with plugging memory leaks by using class methods, storing and loa-
    ding structured data with a coherent strategy, and disciplined error recovery 
    through a system of nested exception handlers.

## Implementing Mouse-Operated Calculator
    Finally, in the last chapter we leave the confines of ANSI-C and implement the 
    obligatory mouse-operated calculator, first for curses and then for the X Window
    System. This example neatly demonstrates how elegantly we can design and imple-
    ment, using objects and classes, even if we have to cope with the idiosyncrasies
    of foreign libraries and class hierarchies. 

## How it will go
    Each chapter has a summary where I try to give the more cursory reader a rundown
    on the happening in the chapter and their importance for future work. Most chap-
    ters suggest some exercises; however, they are not spelled out formally, because
    I firmly believe that one should experiment on one's own. Because we are building
    the techniques from scratch, I have refrained from making and using a massive
    class library, even though some examples could have benefited from it. If you
    want to understand  object-oriented programming, it is more important to first 
    master the techniques and consider your options in code design; dependece on so-
    mebody else's library for your developments should come a bit later.

## Maybe not so relevant
    An important part of this book is the enclosed source floppy -- it has DOS file
    system containing a single shell script to create all the sources arranged by 
    chapter. There is a ReadMe file -- consult it before you say make. It is also 
    quite instructive to use a program like diff and trace the evolution of the root
    classes and ooc reports through the later chapters.

## My disenchantment with C++
    The techniques described here grew out of my disenchantment with C++ when I 
    needed object-oriented techniques to implement an interactive programming language    
    and realized that I could not forge a portable implementation in C++. I turned to 
    what I knew, ANSI-C, and I was perfectly able to do what I had to. I have shown 
    this to a number of people in courses and workshops and others have used the me-
    thods to get their jobs done. It would have stopped there as my footnote to a fad,
    if Brian kernighan and my publishers, Hans-Joachim Niclas and John Wait, had not
    encouraged me to publish the notes (and in due course to reinvent it all once mo-
    re). My thanks go to them and to all those who helped with and suffured through
    the evolution of this book. Last not least I thank my family -- and no, object-
    orientation will not replace sliced bread. 
