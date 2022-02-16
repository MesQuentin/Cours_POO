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


## Assignment

### Guess a number

- [x] Try without reading the tips
-> Succeed at first try

- [x] Improve written code

#### <ins>Notes</ins> :

Look at the function that checks if the user has returned the right type of argument. It's entilted `int user_take_a_guess()`
Could be useful later.

#### Guess a number is working !






