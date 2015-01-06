CFLAGS=-Wall	-g
PROGS=ex1	ex3	ex4	ex6	ex7	ex8	ex9	\
	ex10	ex11	ex12	ex13	ex14	ex15	ex16	\
	ex17	ex18	

all:	$(PROGS) ex19/ex19

test:
	bash test/ex17.sh
	cd ex19 && make test

ex19/ex19:
	$(MAKE) -C ex19

clean:
	rm	-f	$(PROGS)
	$(MAKE) -C ex19 clean

.PHONY: test
