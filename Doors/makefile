project:
	gcc -std=c99 -Wall -Wpedantic -o doors doors.c
	./doors

installemscript:
	cd .. && git clone https://github.com/emscripten-core/emsdk.git
	cd ../emsdk && emsdk install latest && emsdk active latest && emsdk_env.bat && emcc doors.c -o doors.html
runserver:
	cd ../emsdk && http-server