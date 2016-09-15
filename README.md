# LiveCPP
Testing a live coding technique using DLLs (Linux)
Follow the steps

1) use this command to compile the library
```
g++ -fPIC -shared myclass.cc -o myclass.so
```

2) use this command to compile the executable

```
g++ class_user.cc -ldl -o class_user  
```

3) execute class_user

4) open myclass.cc and edit the string at line 21

5) recompile the library

6) type "y" in the prompt of the executable and the new string should appear 
