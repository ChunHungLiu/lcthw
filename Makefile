CFLAGS=-Wall	-g
PROGS=ex1	ex3	ex4	ex6	ex7	ex8	ex9	\
	ex10	ex11	ex12	ex13	ex14	ex15	ex16	\
	

all:	$(PROGS)

clean:
	rm	-f	$(PROGS)