all: lib exec

lib: 
	g++ -fPIC -shared myclass.cc -o myclass.so
exec:
	g++ class_user.cc -ldl -o class_user