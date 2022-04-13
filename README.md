# Cours Clean Code !


**All sources can be found at the site** : [Learn Clean Code with Cpp](https://julesfouchy.github.io/Learn--Clean-Code-With-Cpp/lessons/).
Check it out to found all courses i'm referring to.

Now, here a *summary* of what I did during several weeks :

## Lessons

### Level 1

- Repo downloaded from JulesFouchy/Simple-Cpp-Setup

- Check that each extension works properly after the PTUT (Clang-Tidy and Clang-Format)

- [x] Watch a video about Naming : [Kevlin Henney, Clean Coders Hate What Happens to Your Code When You Use These Enterprise Programming Tricks](https://youtu.be/FyCYva9DhsI?t=2490)

**Wednesday 9th February, I read from [Introduction] to [Make it work, then make it good]** 

#### <ins>Notes</ins> :

##### Naming
_Don't use abbreviations._ Already knew it but it's good to be reminded.

_Append "out" to non-const reference parameters_ Check the courses on it for exemple.
-> When a parameter is going to have is values changed in a function, add an _out_ at the end of it to make it clear.

##### Stack vs Heap

_Almost always use <ins>the Stack</ins>_ `int i = 3;` _instead of_ `int* i = new int;` , so variable don't disappear at the end of the loop.
Use the Heap for big things, polymorphism and varying-size objects.

##### Consistency in style

_**Be consistent in style.**_ It's stupid but logic. I'm watching you, Quentin-to-be. Don't be an a** and be consistent.

### Level 2

- [x] Watch a video about Free function : [CppCon 2016: David Sankel “Building Software Capital: How to write the highest quality code and why"](https://www.youtube.com/watch?v=ta3S8CRN2TM&t=2158s)

- [x] Check what Code Guidelines says about writing small function : [F.3: Keep functions short and simple](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rf-single)

- [x] Watch a video about DRY (Don't Repeat Yourself) : [Keynote: SOLID, Revisited - Tony Van Eerd ](https://www.youtube.com/watch?v=glYq-dvgby4&t=4157s)

- [x] Check what Fluent C++ says about CRTP : [The Curiously Recurring Template Pattern (CRTP)](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rf-single)

**Wednesday 16th February, I read from [Prefer free functions] to [Composition over Inheritance]** 

#### <ins>Notes</ins> :

##### Use structs to group data

There is a new way to initialyse struct with C++20 ! Check [this page](https://julesfouchy.github.io/Learn--Clean-Code-With-Cpp/lessons/use-structs-to-group-data/) (extracted from Jules's lessons) to see it ! It's so much lisible !

### Level 3

- [x] Watch a video from The Cherno about std::vector : [Dynamic Arrays in C++ (std::vector)](https://www.youtube.com/watch?v=PocJ5jXv8No)

- [x] Watch a first video about testing : [CppCon 2015: T. Winters & H. Wright](https://www.youtube.com/watch?v=u5senBJUkPc)
      Then a second video : [CppCon 2016: David Sankel](https://www.youtube.com/watch?v=ta3S8CRN2TM&t=1306s)
      And a third : [Kevlin Henney - Programming with GUTs](https://www.youtube.com/watch?v=cfh6ZrA19r4&t=983s)

- [x] Watch a video about dependecies : [Import as an antipattern - Demystifying Dependency Injection in modern Python](https://www.youtube.com/watch?v=qkGxy4c64Jg)

- [x] Read the article about std::optionnal [Using C++17 std::optional](https://www.cppstories.com/2018/05/using-optional/)

- [x] Read the article about Strong Typing [Strong types for strong interfaces](https://www.fluentcpp.com/2016/12/08/strong-types-for-strong-interfaces/)

**Wednesday 16th March, I read from [std::vector] to [Strong Typing]** 

#### <ins>Notes</ins> :

##### Check again Strong Typing

Strong typing is a really interesting topic and I went over it a bit quickly. Check the article again, it will help you later.

## Assignment

### Guess a number

- [x] Try without reading the tips
-> Succeed without checking any tips

- [x] Improve written code with Jules' advice : synthetize better

- [x] Add a motivationnal function for the player

- [ ] Solve the problem of `T get_input_from_user()` : infinite loop if wrong input

#### <ins>Notes</ins> :

Look at the function that checks if the user has returned the right type of argument. It's entilted `int user_take_a_guess()`
Could be useful later.

#### Guess a number is working !

### Hangman

- [x] Try without reading the tips
-> Fail ! Got an compilator error ~~unsolved~~ !

- Push the failed project on a seperate branch called "Hangman Pb"
 
- [x] Hangman able to build : several "const" were missing in the header

- [x] Succeed to launch a funtionnable Hangman

- [x] Improve written code with Jules' advice : Use of strong type

- [ ] Check if the user enter just a single letter

- [x] Add an text-intro

- [ ] Add more word to the bank

#### Hangman is working !

### Menu

- [x] Create a menu to play the different game

- [ ] Create a whole text rpg adventure accesible in the menu. Because life is an adventure.

- [ ] Improve written code







