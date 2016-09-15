# LiveCPP
Testing a live coding technique using DLLs (Linux)


use this command to compile the library
```
g++ -fPIC -shared myclass.cc -o myclass.so
```

use this command to compile the executable

```
g++ class_user.cc -ldl -o class_user  
```

once you compile both , execute class_user, edit myclass.h or/and myclass.cc , recompile the library , choose "y" in the prompt and voila the code is updated live, without exiting the executable.
