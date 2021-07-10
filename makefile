all:
	mkdir cos-sin/
	cd src/ && make
	cd src/ && make clean
clean:
	rm -r cos-sin
run:
	cd cos-sin && ./cosx-sinx


