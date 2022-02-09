# Cours Clean Code !


**All sources can be found at the site** : https://julesfouchy.github.io/Learn--Clean-Code-With-Cpp/lessons/
Check it out to found all courses i'm referring to.

Now, here a *summary* of what I did during several weeks :


## Lessons

### Level 1

- Repo downloaded from JulesFouchy/Simple-Cpp-Setup

- Check that each extension works properly after the PTUT

#### <ins>Notes</ins> :

##### Naming
_Don't use abbreviations._ Already knew it but it's good to be reminded.

_Append "out" to non-const reference parameters_ Check the courses on it for exemple.
-> When a parameter is going to have is values changed in a function, add an _out_ at the end of it to make it clear.

##### Stack vs Heap

_Almost always use <ins>the Stack</ins> `int i = 3;` instead of `int* i = new int;`_, so variable don't disappear at the end of the loop.
Use the Heap for big things, polymorphism and varying-size objects.

