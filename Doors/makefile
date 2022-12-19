MyProject : doors.o doors.c
	gcc doors.o -o doors
	./a.exe
MyProject : doors.c
	gcc -c doors.c -o doors.o
installemsdk: 
	cd .. && git clone https://github.com/emscripten-core/emsdk.git
	cd ../emsdk && emsdk install latest && emsdk activate latest && emsdk_env.bat && emcc doors.c -s WASM=1 -o project.html
	npm i http-server -g
runserver:
	  http-server
